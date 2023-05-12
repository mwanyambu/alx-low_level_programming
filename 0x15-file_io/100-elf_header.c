#include "main.h"

/**
 * check_elf - checks for an ELF file
 * @e_ident: pointer to an aray of magic numbers in ELF
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_magic - print ELF magic numbers
 * @e_ident: pointer to an array of magic numbers in ELF
 */
void print_magic(unsigned char *e_ident)
{
	int i;


	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		printf(" ");
	}
}
/**
 * print_class - prints class of ELF header
 * e_ident: pointer to an array of class
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:                            ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELFCLASS64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * print_data - prints data
 * @e_ident: pointer to an array of ELF class
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                             ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}
/**
 * print_version - prints ELF version
 * @e_ident: pointer to an array of ELF version
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                              %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_osabi - prints OS/ABI
 * @e_ident: pointer to array of elf version
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                              ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - system V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Unix - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX -FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * print_abi - prints ABI version of ELF
 * @e_ident: pointer to array of elf version
 */
void print_abi(unsigned char *e_ident)
{
	printf("ABI Version:                           %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints type of ELF
 * @e_type: type
 * @e_ident: pointer to array with ELF class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("None (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
 * print_entry - prints entry point of ELF
 * @e_entry: address of entry point
 * @e_ident: pointer to array with ELF class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address:                 ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}
/**
 * close_elf - closes ELF file
 * @elf: descriptor of ELF
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - entry point
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fd, fr;
	Elf64_Ehdr *elfh = malloc(sizeof(Elf64_Ehdr));

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant read file %s\n", argv[1]);
		exit(98);
	}
	if (elfh == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	fr = read(fd, elfh, sizeof(Elf64_Ehdr));
	if (fr == -1)
	{
		free(elfh);
		close_elf(0);
		dprintf(STDERR_FILENO, "Error: No such file or directory %s\n", argv[1]);
		exit(98);
	}
	check_elf(elfh->e_ident);
	printf("ELF Header:\n");
	print_magic(elfh->e_ident);
	print_class(elfh->e_ident);
	print_data(elfh->e_ident);
	print_version(elfh->e_ident);
	print_osabi(elfh->e_ident);
	print_abi(elfh->e_ident);
	print_type(elfh->e_type, elfh->e_ident);
	print_entry(elfh->e_entry, elfh->e_ident);
	free(elfh);
	close_elf(fd);
	return (0);
}

#include <stdio.h>

/**
 * check_palindrome - checks for a palindrome
 * @n: number to be checked
 * Return: 1 else 0
 */
int check_palindrome(int n)
{
	int num = n;
	int opp = 0;

	while (n > 0)
	{
		opp  = opp * 10 + n % 10;
		n /= 10;
	}
	num == opp;
}
/**
 * main - entrty point to program
 * Return: 0
 */
int main(void)
{
	int max_pal = 0;
	int x, y;

	for (x = 999; x >= 100; x--)
	{
		for (y = x; y >= 100; y--)
		{
			int product  = x * y;

			if (check_palindrome(product) && product > max_pal)
			{
				max_pal = product;
			}
		}
	}
	FILE *fp = fopen("102-result", "w");

	if (fp != NULL)
	{
		fprintf(fp, "%d", max_pal);
		fclose(fp);
	}
	return (0);
}

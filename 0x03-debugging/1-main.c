#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
/* loop will always print as long as i is 0 */
        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");
/* this will print infinite loop avoided */
        return (0);
}

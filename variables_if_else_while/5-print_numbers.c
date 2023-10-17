#include <stdio.h>
/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
		if (x < 9)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}

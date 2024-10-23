#include <stdio.h>
#include <conio.h>

void main(void)
{
	int i;
	int j;

	for (i = 10; i > 0; i--)
	{
		printf("%d\'s Time Table:\n", i);

		for (j = 1; j <= 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		printf("*************\n");
	}
}
#include <stdio.h>
#include <conio.h>

void main(void)
{
	int sum = 0;
	int temp = 0;

	while (sum <= 100)
	{
		scanf(" %d", &temp);
		sum += temp;
	}

	printf("Current Sum Value = %d\nExiting...\n", sum);
}

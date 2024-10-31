#include <stdio.h>
#include <conio.h>

long my_pow_fn(int base, int exp);

void main(void)
{
	int x;
	int y;

	printf("\nEnter Base Value: ");
	scanf(" %d", &x);

	printf("Enter Exponent Value: ");
	scanf(" %d", &y);

	printf("%d^%d = %d", x, y, my_pow_fn(x, y));
}

long my_pow_fn(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}

	if (exp == 1)
	{
		return base;
	}

    return (base * my_pow_fn(base, exp - 1));
}
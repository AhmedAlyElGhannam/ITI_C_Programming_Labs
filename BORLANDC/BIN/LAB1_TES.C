#include <stdio.h>

void main(void)
{
	char c;
	scanf(" %c", &c);
	getchar(); // consume new line
    printf("Character %c is equivalent to %d ASCII Code\n", c, c);
}
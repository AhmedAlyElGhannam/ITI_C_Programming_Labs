#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b);

void main(void)
{
    int x = 86;
    int y = 42;

    printf("\n1st Number Before Swap = %d\n2nd Number Before Swap = %d\n", x, y);

    swap(&x, &y);

    printf("\n1st Number After Swap = %d\n2nd Number After Swap = %d\n", x, y);

}

void swap(int *a, int *b)
{
    (*a) ^= (*b);
    (*b) ^= (*a);
    (*a) ^= (*b);

    return;
}
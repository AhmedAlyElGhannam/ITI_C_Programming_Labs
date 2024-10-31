#include <stdio.h>

#define N 6

void main(void)
{
	int x[N] = {99, 86, 713, 45, 42, 69};

	int max = -999;
	int min = 999;

	int i;

	for (i = 0; i < N; i++)
	{
		if (x[i] >= max)
			max = x[i];
		if (x[i] <= min)
			min = x[i];
	}

	printf("Max = %d\nMin = %d\n", max, min);
}
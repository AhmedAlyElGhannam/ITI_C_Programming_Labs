#include <stdio.h>

#define N 3
void main(void)
{
	int x[N][N];

	int i;
	int j;
	printf("Enter array elements: \n");

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf(" %d", &x[i][j]);
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", x[i][j]);
		}

        printf("\n");
	}
}
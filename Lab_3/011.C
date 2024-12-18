#include <stdio.h>

#define ROW 3
#define COL 4

void main(void)
{
	int x[ROW][COL];

	int row_sum[ROW] = {0};
	float col_avg[COL] = {0.0};

	int i;
	int j;

	printf("Enter 2D array elements: \n");

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			scanf(" %d", &x[i][j]);
			row_sum[i] += x[i][j];
			col_avg[j] += x[i][j];
		}
	}

	for (i = 0; i < COL; i++)
	{
		col_avg[i] /= 3.0;
	}

	printf("Sum of Each Row: \n");
	printf("%d %d %d \n", row_sum[0], row_sum[1], row_sum[2]);

	printf("Average of Each Column: \n");
	printf("%f %f %f %f", col_avg[0], col_avg[1], col_avg[2], col_avg[3]);
}
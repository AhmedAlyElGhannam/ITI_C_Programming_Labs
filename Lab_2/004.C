#include <stdio.h>
#include <conio.h>
#include <string.h>

#define n	7

void main(void)
{
	// magic box represented via 2D array initialized to 0
	int magic_box[n][n] = {0};

	// default position for 1
	int col = n / 2;
	int row = 0;

	// temp variables for position determination
	int row_temp;
	int col_temp;

	// variable with value ranging from 1 to n*n
	int num = 1;

	// iterators for printing
	int i, j;

	// save 1 in initial position
	magic_box[row][col] = num;

	
	for(num = 2; num <= (n*n); num++)
	{
		// check if default positions are occupied or not
		row_temp = (row - 1 + n) % n;
		col_temp = (col + 1) % n;

		
		if (magic_box[row_temp][col_temp] == 0)
		{
			// free position => use template row/col values
			row = row_temp;
			col = col_temp;
		}
		else if (magic_box[row_temp][col_temp] != 0)
		{
			// occupied position => only increment row and leave existing col value
			row = (row + 1) % n;
		}


		// save num in determined position
		magic_box[row][col] = num;
	}

	// print magic box
	for (i = 0; i < n; i++)
	{
		printf("\n\n\t\t");

		for (j = 0; j < n; j++)
		{
			printf("%d\t", magic_box[i][j]);
		}

			printf("\n\n");
	}

	return;
}

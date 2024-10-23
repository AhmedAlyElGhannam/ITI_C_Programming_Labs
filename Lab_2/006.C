#include <stdio.h>
#include <conio.h>

void main(void)
{
	short x = 0;
	printf("Choose Your Favourite Epic Fantasy Book:\n");
	printf("1. A Feast For Crows.\n");
	printf("2. The Way of Kings.\n");
	printf("3. The Dragonbone Chair.\n");

	printf("Your Choice: ");
	scanf(" %d", &x);

	switch (x)
	{
		case 1:

			printf("You Chose Option \"1\": A Feast For Crows.\n");

		break;



		case 2:

			printf("You Chose Option \"2\": The Way of Kings.\n");

		break;



		case 3:

			printf("You Chose Option \"3\": The Dragonbone Chair.\n");

		break;



		default:

			printf("Not Choosing One is Considered as Choosing all! :\)\n");

	}

	return;
}
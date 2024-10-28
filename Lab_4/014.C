#include <stdio.h>
#include <conio.h>

#define UP		0x48
#define DOWN    0x50
#define HOME	0x47
#define END		0x4F
#define ENTER	0x0D
#define ESC		0x1B
#define NORMAL_ATTR	0x07
#define HILIGHT_ATTR	0x70
#define New	0
#define Display	1
#define Exit	2


void main(void)
{
	char menu[3][10] = {
						" New     ", " Display ", " Exit    "
						};
	int terminated = 0;
	int row;
	int col;
	int pos = 0;
	int i;
	char ch;

	do
	{
		// clear user screen
		clrscr();

		// draw menu with selected items
		for (i = 0; i < 3; i++)
		{
			// go to place to print
			gotoxy(20, 10 + (i * 2));

			// change highlighted attributes
			textattr(i == pos ? HILIGHT_ATTR : NORMAL_ATTR);

			// print current menu item
			cprintf("%s\n", menu[i]);
		}


		// read pressed key from the user
		ch = getch();


		// take the suitable action dependent on the pressed key
		switch (ch)
		{
			case NULL:
				ch = getch(); // get the code for the 2nd byte for the normal key
				switch (ch)
				{
					case UP:
						// decrement pos value and circulate
						pos = (pos <= 0) ? 2 : pos - 1;
					break;

					case DOWN:
						// increment pos value and circulate
						pos = (pos >= 2) ? 0 : pos + 1;
					break;

					case HOME:
						pos = 0;
					break;

					case END:
						pos = 2;
					break;

				}

			break;


			case ENTER:
				clrscr();
				textattr(NORMAL_ATTR);
				switch (pos)
				{
					case New:
						cprintf("You Chose \"New\"");
						getchar();
					break;

					case Display:
						cprintf("You Chose \"Display\"");
						getchar();
					break;

					case Exit:
						cprintf("Exiting...");
                        getchar();
					break;
				}

			break;


			case ESC:
				terminated = 1; // terminate the program
			break;
		}

	} while (!terminated);
}

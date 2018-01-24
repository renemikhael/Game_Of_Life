/* Copyright Polytechnical University of Vaasa 2001                  */
/*********************************************************************
*																	 *
*      Game of Life written in C-language using ncurses 			 * 
*																	 *
*--------------------------------------------------------------------*
*
* 1.  NAME
*     Exercise 4
*
* 2.  DESCRIPTION
*     Famous Game of Life simulator using structs and ncurses library
*
* 3.  VERSIONS
*       Original
*         16.12.2016 / Rene Mikhael
*
**********************************************************************/
/*********************************************************************
*                                                                    *
*    MAIN PROGRAM                                                    *
*                                                                    *
**********************************************************************/
#include "header.h"
int main(void)
{
	int generation=2;
	struct cell array[HEIGHT][WIDTH]= {0};
	initscr ();
	clear ();
	nodelay (stdscr, TRUE);

	start_color ();
	init_pair (1, COLOR_RED, COLOR_WHITE);
	init_pair (2, COLOR_BLUE, COLOR_WHITE);
	init_pair (3, COLOR_BLUE, COLOR_WHITE);
	bkgd (COLOR_PAIR (3));
	curs_set(0);

        array[19][19].current = 1;
        array[16][15].current = 1;
        array[17][16].current = 1;
        array[17][17].current = 1;
        array[20][19].current = 1;
        array[20][20].current = 1;
        array[20][21].current = 1;
        array[22][22].current = 1;
        array[22][21].current = 1;
        array[20][22].current = 1;
        array[19][19].current = 1;
        array[16][21].current = 1;
        array[17][14].current = 1;
        array[18][14].current = 1;
        array[18][13].current = 1;
        array[18][17].current = 1;

	printTable(array);
	do
	{
		move (0,0);
		printf("Generation %d\n", generation++);
		calculate(array);
		printTable(array);
		refresh ();
	}
	while (generation < 501);
	noecho ();
	endwin ();
}

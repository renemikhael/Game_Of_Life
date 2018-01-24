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
*    FUNCTIONS                                                       *
*                                                                    *
**********************************************************************/

/*********************************************************************
;
;	P R O C E D U R E   D E S C R I P T I O N
;
;---------------------------------------------------------------------
;
; NAME: printTable(struct cell board[HEIGHT][WIDTH])
;
; DESCRIPTION: Prints the current array with two for statements
;
;*********************************************************************/
#include "header.h"
int printTable(struct cell board[HEIGHT][WIDTH])
{
	int i, j;
	for (i = 0; i < HEIGHT; i++)
	{
	for (j = 0; j < WIDTH; j++)
	{
		if (board[i][j].current == 1)
		{
		waddch(stdscr, ACS_CKBOARD | COLOR_PAIR(1));
		}
	else waddch(stdscr, ACS_DEGREE | COLOR_PAIR(2));
	}
	printw("\n");
	refresh ();
	}
	usleep(90000);
}

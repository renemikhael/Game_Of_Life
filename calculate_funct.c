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
;
;	P R O C E D U R E   D E S C R I P T I O N
;
;---------------------------------------------------------------------
;
; NAME: calculate(struct cell board[HEIGHT][WIDTH])
;
; DESCRIPTION: Rules of the game
;
;*********************************************************************/
#include "header.h"
int calculate(struct cell board[HEIGHT][WIDTH])
{
	int neighbor, i, j;
	for (i = 0; i < HEIGHT; i++)
	{
	for (j = 0; j < WIDTH; j++)
	{
		neighbor = getNeighborCount(board, i, j);
		if (board[i][j].current == 1 && neighbor == 3) //survives
		{
		board[i][j].future = 1;
		}
		if (board[i][j].current == 1 && neighbor == 2) //survives
		{
		board[i][j].future = 1;
		}
		if (board[i][j].current == 1 && neighbor > 3) //dies
		{
		board[i][j].future = 0;
		}
		if (board[i][j].current == 1 && neighbor < 2) //dies
		{
		board[i][j].future = 0;
		}
		if (board[i][j].current == 0 && neighbor == 3) //a new cell is created
		{
		board[i][j].future = 1;
		}

	}
	}
	for (i = 0; i < HEIGHT; i++) //Copies current array to future array
	{
	for (j = 0; j < WIDTH; j++)
	{
		board[i][j].current = board[i][j].future;
	}
	}
}

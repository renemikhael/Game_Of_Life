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
; NAME: getNeighborCount(struct cell board[HEIGHT][WIDTH], int i, int j)
;
; DESCRIPTION: Calculates neighbors where live cells live
;
;*********************************************************************/
#include "header.h"
int getNeighborCount(struct cell board[HEIGHT][WIDTH], int i, int j)
{
	int neighbor = 0;
	if ((i-1>=0) && (j-1>=0))
	{
		if (board[i][j+1].current == 1)
			neighbor++;
		if (board[i][j-1].current == 1)
			neighbor++;
		if (board[i+1][j+1].current == 1)
			neighbor++;
		if (board[i-1][j-1].current == 1)
			neighbor++;
		if (board[i+1][j-1].current == 1)
			neighbor++;
		if (board[i-1][j+1].current == 1)
			neighbor++;
		if (board[i+1][j].current == 1)
			neighbor++;
		if (board[i-1][j].current == 1)
			neighbor++;
		if (neighbor < 2)
			board[i][j].current == 0;
		if (neighbor > 3)
			board[i][j].current == 0;
	}
	else if ((i-1<0) && (j-1>=0))
	{
		if (board[i][j+1].current == 1)
			neighbor++;
		if (board[i][j-1].current == 1)
			neighbor++;
		if (board[i+1][j+1].current == 1)
			neighbor++;
	}
	return neighbor;
}

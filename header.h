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
/*-------------------------------------------------------------------*
*    HEADER FILES                                                    *
*--------------------------------------------------------------------*/
#include <ncurses.h>

#define HEIGHT 50
#define WIDTH 130
/*********************************************************************
*                                                                    *
*    GLOBAL VARIABLES                                          		 *
*                                                                    *
**********************************************************************/
struct cell
{
    int current;
    int future;
};
/*********************************************************************
*                                                                    *
*    FUNCTION PROTOTYPES                                      		 *
*                                                                    *
**********************************************************************/
int printTable(struct cell board[HEIGHT][WIDTH]);
int getNeighborCount(struct cell board[HEIGHT][WIDTH], int i, int j);
int calculate(struct cell board[HEIGHT][WIDTH]);

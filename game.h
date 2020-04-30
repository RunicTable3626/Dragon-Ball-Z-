#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //


/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
* 
*
*
* Example of a struct to hold state machine data:
*/

typedef struct  {
  int row;
  int col;
  int height;
  int width;
  const u16 *image;
 }SonGoku ;

typedef struct  {
  int row;
  int col;
  int height;
  int width;
  const u16 *image;
 }Buu ;

typedef struct {
  int row;
  int col;
  int height;
  int width;
  const u16 *image;
 }GenkiDama ;




#endif

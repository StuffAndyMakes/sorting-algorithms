//
//  sortcommon.h
//  sortexperiments
//
//  Created by Andy Frey on 11/16/21.
//

#ifndef sortcommon_h
#define sortcommon_h



// because printf()
#include <stdio.h>
// for srandomdev() and random()
#include <stdlib.h>
// for INT_MAX
#include <limits.h>



void swapElements(int *, int *);
void loadArrayWithRandomInts(int *, int);
void printArray(int [], int);



#endif /* sortcommon_h */

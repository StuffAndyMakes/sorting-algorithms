//
//  selectionsort.c
//  sortexperiments
//
//  Created by Andy Frey on 11/16/21.
//

#include "selectionsort.h"
#include "sortcommon.h"



// Selection Sort
void selectionSort(int array[], int n) {

    int i, j, min_element;

    for (i = 0; i < n-1; i++) {
        min_element = i;
        for (j = i+1; j < n; j++) {
            if (array[j] < array[min_element]) min_element = j;
        }
        swapElements(&array[min_element], &array[i]);
    }

}

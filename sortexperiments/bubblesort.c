//
//  bubblesort.c
//  sortexperiments
//
//  Created by Andy Frey on 11/16/21.
//

#include "bubblesort.h"



// bubble sort function
void bubbleSort(int arr[], int n) {

    int i, j;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) swapElements(&arr[j], &arr[j+1]);
        }
    }

}

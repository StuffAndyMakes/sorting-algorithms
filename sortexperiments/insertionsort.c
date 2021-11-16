//
//  insertionsort.c
//  sortexperiments
//
//  Created by Andy Frey on 11/16/21.
//

#include "insertionsort.h"



// Insertion Sort Function
void insertionSort(int arr[], int n) {

    int i, element, j;

    for (i = 1; i < n; i++) {
        element = arr[i]; j = i - 1;
        while (j >= 0 && arr[j] > element) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = element;
    }

}

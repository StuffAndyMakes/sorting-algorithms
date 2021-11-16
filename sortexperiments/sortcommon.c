//
//  sortcommon.c
//  sortexperiments
//
//  Created by Andy Frey on 11/16/21.
//

#include "sortcommon.h"



// Function to swap two elements
void swapElements(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void loadArrayWithRandomInts(int *arr, int numElements) {
    for (int i = 0; i < numElements; i++) {
        srandomdev();
        arr[i] = random() % INT_MAX;
    }
}

void printArray(int arr[], int numElements) {
    int i;
    for (i = 0; i < numElements; i++) printf("%d ", arr[i]);
    printf("\n");
}

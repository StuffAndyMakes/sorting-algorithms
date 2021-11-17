//
//  main.c
//  sortexperiments - test performance of different sort algorithms in C (sorting random ints)
//
//  Source for algorithms borrowed from:
//    https://www.edureka.co/blog/sorting-algorithms-in-c/
//
//  Created by Andy Frey on 11/16/21.
//

#include <stdio.h>
#include <stdlib.h>
// for time_t, clock_t, time(), and clock()
#include <sys/time.h>

// sort algorithms
#include "sortcommon.h"
#include "bubblesort.h"
#include "insertionsort.h"
#include "selectionsort.h"
#include "quicksort.h"
#include "mergesort.h"



int main(int argc, const char * argv[]) {

    time_t today;
    clock_t beginTime, endTime;
    double elapsed = 0.0;

    int arr[1000000];
    int arr_size = sizeof(arr)/sizeof(arr[0]);


    loadArrayWithRandomInts(arr, arr_size);

    printf("SORT ALGORITHM SPEED TEST\n");
    printf("Testing with array of %d ints.\n", arr_size);

    printf("MERGE      Running..."); fflush(stdout);

    time(&today);

    beginTime = clock();
    mergeSort(arr, 0, arr_size - 1);  // mergeSort(array, leftIndex, rightIndex)
    endTime = clock();

    elapsed = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf(" Finished in %.5f seconds.\n", elapsed); fflush(stdout);


    loadArrayWithRandomInts(arr, arr_size);

    printf("QUICK      Running..."); fflush(stdout);

    beginTime = clock();
    quickSort(arr, 0, arr_size - 1);  // quickSort(array, lowIndex, highIndex)
    endTime = clock();

    elapsed = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf(" Finished in %.5f seconds.\n", elapsed); fflush(stdout);


    loadArrayWithRandomInts(arr, arr_size);

    printf("SELECTION  Running..."); fflush(stdout);

    beginTime = clock();
    selectionSort(arr, arr_size);  // selectionSort(array, numElements)
    endTime = clock();

    elapsed = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf(" Finished in %.5f seconds.\n", elapsed); fflush(stdout);


    loadArrayWithRandomInts(arr, arr_size);

    printf("INSERTION  Running..."); fflush(stdout);

    beginTime = clock();
    insertionSort(arr, arr_size);  // insertionSort(array, numElements)
    endTime = clock();

    elapsed = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf(" Finished in %.5f seconds.\n", elapsed); fflush(stdout);


    loadArrayWithRandomInts(arr, arr_size);

    printf("BUBBLE     Running..."); fflush(stdout);

    beginTime = clock();
    bubbleSort(arr, arr_size);  // bubbleSort(array, numElements)
    endTime = clock();

    elapsed = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf(" Finished in %.5f seconds.\n", elapsed); fflush(stdout);


    return 0;
}

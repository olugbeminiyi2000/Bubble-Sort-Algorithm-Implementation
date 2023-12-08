#include "bubblesort.h"

/**
 * @brief Implementation of the bubble sort algorithm.
 *
 * This function takes an array and its size as input
 * and sorts it in ascending order using the bubble sort algorithm.
 *
 * @param arr An array to be sorted.
 * @param size The size of the array.
 */
void bubblesort(int arr[], int size)
{
    // Outer loop for the number of passes
    for (int i = 0; i < size - 1; i++)
    {
        // Inner loop for each pass
        for (int j = 0; j < size - i - 1; j++)
        {
            // Compare adjacent elements and swap if necessary
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

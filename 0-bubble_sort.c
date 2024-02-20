#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using Bubble Sort algorithm
 * @array: pointer to the array to be sorted
 * @size: the length of array or the size of array
 *
 * Return: None (void)
 *
 * Description:
 *   This function implements the Bubble Sort algorithm to sort an array of integers
 *   in ascending order.
 * 
 * Complexity:
 *   - Best Case: O(n) - When the array is already sorted, and no swaps are needed.
 *   - Average Case: O(n^2) - When elements are randomly distributed.
 *   - Worst Case: O(n^2) - When the array is sorted in descending order.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    for (i = 0; i < size; i++)
    {
        int swapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
                printf("%d ", array[j]); /*  Print array after each swap* */
            }
        }

        /**  If no two elements were swapped in the inner loop,
         then the array is already sorted 
         */
        if (!swapped)
        {
            break;
        }
    }
}


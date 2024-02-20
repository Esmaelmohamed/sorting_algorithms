#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Description:
 *   This function sorts an array of integers using the Selection sort algorithm.
 *   It iterates through the array, finding the minimum element and swapping it
 *   with the current element at the beginning of the unsorted portion of the array. 
 * 
 * The time complexity of the Selection Sort algorithm is as follows:
 * Best Case: O(n^2)
 * Average Case: O(n^2)
 * Worst Case: O(n^2)
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_index;
    int temp;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        min_index = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }

        if (min_index != i)
        {
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }
}

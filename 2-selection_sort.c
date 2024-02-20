#include "sort.h"

/**
 * swap - Exchange the values of two integers.
 * @jar1: Pointer to the first integer.
 * @jar2: Pointer to the second integer.
 *
 * Description:
 *   This function swaps the values of two integers.
 */
void swap(int *jar1, int *jar2)
{
    int temp_value = *jar1;
    *jar1 = *jar2;
    *jar2 = temp_value;
}

/**
 * selection_sort - Arrange an array of integers in ascending order using selection sort.
 * @arr: Pointer to the array of integers.
 * @size: Size of the array.
 *
 * Description:
 *   This function sorts the given array in ascending order using the selection sort algorithm.
 *   It iterates through the array, finding the smallest element in the unsorted part
 *   and swaps it with the first unsorted element.
 *   It prints the array after each swap.
 *
 * Time Complexity:
 *   - Best Case: O(n^2) - When the array is already sorted.
 *   - Average Case: O(n^2) - When elements are randomly distributed.
 *   - Worst Case: O(n^2) - When the array is sorted in descending order.
 */
void selection_sort(int *arr, size_t size)
{
    size_t i,j;
    if (arr == NULL || size < 2)
        return;

    for ( i = 0; i < size - 1; i++)
    {
        int *min_element = arr + i;
        for ( j = i + 1; j < size; j++)
            min_element = (arr[j] < *min_element) ? (arr + j) : min_element;

        if ((arr + i) != min_element)
        {
            swap(arr + i, min_element);
            print_array(arr, size);
        }
    }
}

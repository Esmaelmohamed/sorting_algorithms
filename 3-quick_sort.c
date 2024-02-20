#include "sort.h"

void swap(int *jar1, int *jar2);
int lomuto_partitioning(int *array, size_t size, int left, int right);
void recursive_quick_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap - Swap two integers in an array.
 * @jar1: The first integer to be swapped.
 * @jar2: The second integer to be swapped.
 */
void swap(int *jar1, int *jar2)
{
    int tmp;

    tmp = *jar1;
    *jar1 = *jar2;
    *jar2 = tmp;
}

/**
 * lomuto_partitioning - Partition a subset of an array of integers using the Lomuto scheme.
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset.
 * @right: The ending index of the subset.
 *
 * Return: The final index of the partition.
 *
 * Complexity: O(n)
 */
int lomuto_partitioning(int *array, size_t size, int left, int right)
{
    int *pivot_element, above_index, below_index;

    pivot_element = array + right;
    for (above_index = below_index = left; below_index < right; below_index++)
    {
        if (array[below_index] < *pivot_element)
        {
            if (above_index < below_index)
            {
                swap(array + below_index, array + above_index);
                print_array(array, size);
            }
            above_index++;
        }
    }

    if (array[above_index] > *pivot_element)
    {
        swap(array + above_index, pivot_element);
        print_array(array, size);
    }

    return above_index;
}

/**
 * recursive_quick_sort - Implement Quicksort recursively using the Lomuto scheme.
 * @array: The array of integers to sort.
 * @size: The size of the array.
 * @left: The starting index of the array partition.
 * @right: The ending index of the array partition.
 *
 * Complexity: O(n log n) average case, O(n^2) worst case
 */
void recursive_quick_sort(int *array, size_t size, int left, int right)
{
    int part;

    if (right - left > 0)
    {
        part = lomuto_partitioning(array, size, left, right);
        recursive_quick_sort(array, size, left, part - 1);
        recursive_quick_sort(array, size, part + 1, right);
    }
}

/**
 * quick_sort - Sort an array of integers in ascending order using Quicksort.
 * @array: The array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme and prints the array after each swap.
 *
 * Complexity: O(n log n) average case, O(n^2) worst case
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    recursive_quick_sort(array, size, 0, size - 1);
}

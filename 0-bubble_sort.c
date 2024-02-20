#include <stdio.h>
#include <sort.h> 

/**
 * bubble_sort - sorts an array of integers in ascending order using Bubble Sort algorithm
 * @array: pointer to the array to be sorted
 * @sizeOfArray: the length of array or the size of array
 *
 * Return: None (void)
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    for (i = 0; i < size; i++)
    {
        int swappedArray = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swappedArray = 1;
                printf("%d ", array[j]);
            }
        }
        if (!swappedArray)
        {
            break;
        }
    }
}

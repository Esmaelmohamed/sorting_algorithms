#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                        using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 *
 * Return: None
 *
 * Description:
 *   This function sorts a doubly linked list of integers in ascending order
 *   using the Insertion sort algorithm. It swaps the nodes themselves to perform
 *   the sorting.
 *
 * Complexity:
 *   - Best Case: O(n) - When the list is already sorted.
 *   - Average Case: O(n^2) - When elements are randomly distributed.
 *   - Worst Case: O(n^2) - When the list is sorted in descending order.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next_node;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;

    while (current != NULL)
    {
        next_node = current->next;
        while (current->prev != NULL && current->n < current->prev->n)
        {
            current->prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;
            current->next = current->prev;
            current->prev = current->prev->prev;
            current->next->prev = current;
            if (current->prev != NULL)
                current->prev->next = current;
            else
                *list = current;
            print_list(*list);
        }
        current = next_node;
    }
}

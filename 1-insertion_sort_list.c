#include "sort.h"

/**
 * swap - Swap two nodes in a doubly linked list.
 * @h: Pointer to the head of the list.
 * @n1: First node to swap.
 * @n2: Second node to swap.
 *
 * Description:
 *   This function swaps two nodes in a doubly linked list. It updates the
 *   pointers of the nodes and the head of the list if necessary.
 */
void swap(listint_t **h, listint_t *n1, listint_t *n2)
{
    if (n1->prev != NULL)
        n1->prev->next = n2;
    else
        *h = n2;

    if (n2->next != NULL)
        n2->next->prev = n1;

    n1->next = n2->next;
    n2->prev = n1->prev;
    n1->prev = n2;
    n2->next = n1;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 *
 * Description:
 *   This function sorts a doubly linked list of integers in ascending order
 *   using the insertion sort algorithm. It iterates through the list,
 *   swapping adjacent nodes as needed to place each element in its correct
 *   position.
 *   It prints the list after each swap operation.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *sorted;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    sorted = *list;
    current = sorted->next;

    while (current != NULL)
    {
        while (current->prev != NULL && current->n < current->prev->n)
        {
            swap(list, current->prev, current);
            print_list((const listint_t *)*list); // Print list after each swap
        }
        current = current->next;
    }
}

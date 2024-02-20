#include "sort.h"

/**
 * swap - Swap two nodes in a listint_t doubly-linked list.
 * @head: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 *
 * Description:
 *   This function swaps two nodes in a listint_t doubly-linked list. It updates
 *   the pointers of the nodes and the head of the list if necessary.
 */
void swap(listint_t **head, listint_t **node1, listint_t *node2)
{
    (*node1)->next = node2->next;
    if (node2->next != NULL)
        node2->next->prev = *node1;
    node2->prev = (*node1)->prev;
    node2->next = *node1;
    if ((*node1)->prev != NULL)
        (*node1)->prev->next = node2;
    else
        *head = node2;
    (*node1)->prev = node2;
    *node1 = node2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description:
 *   This function sorts a doubly linked list of integers in ascending order
 *   using the insertion sort algorithm. It iterates through the list,
 *   starting from the second node, comparing each node with its predecessors,
 *   and swapping nodes as necessary to insert each node in its correct position.
 *   It prints the list after each swap operation.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current_node, *insertion_node, *temporary_node;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    for (current_node = (*list)->next; current_node != NULL; current_node = temporary_node)
    {
        temporary_node = current_node->next;
        insertion_node = current_node->prev;
        while (insertion_node != NULL && current_node->n < insertion_node->n)
        {
            swap(list, &insertion_node, current_node);
            print_list((const listint_t *)*list);
        }
    }
}

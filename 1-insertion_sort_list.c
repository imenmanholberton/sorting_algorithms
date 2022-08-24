#include "sort.h"
/**
 * @brief
 *
 */
void swap(listint_t **head, listint_t **A, listint_t **B)
{
    (*A)->next = (*B)->next;
    if ((*B)->next != NULL)
    (*B)->next->prev = *A;
    (*B)->prev = (*A)->prev;
    (*B)->next = *A;
    if ((*A)->prev != NULL)
        (*A)->prev->next = *B;
    else
    *head = *B;
    (*A)->prev = *B;
    *A = (*B)->prev;
}
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *temp, *key;
    if (!list || !(*list))
        return;
    for (current = (*list)->next; current != NULL; current = key)
    {
        key = current->next;
        temp = current->prev;
        while (temp != NULL && current->n < temp->n)
        {
            swap(list, &temp, &current);
            print_list(*list);
        }
    }
}
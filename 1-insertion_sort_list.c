#include "sort.h"
/**
 * @brief
 * 
 */
listint_t* getNode( int n)
{
listint_t  *  newNode = (listint_t *)malloc(sizeof(listint_t));
if (newNode == NULL)
{
return NULL;
}
// put in the data
newNode->n = n;
newNode->next = NULL;
newNode->prev = NULL;
return (newNode);
}
//function to insert a newNode in sorted way in a sorted doubly linked list
void sortedinserted(listint_t **list, listint_t  *newNode)
{
listint_t *current;
//if list is empty
if (*list  == NULL)
*list = newNode;
//if the node is to e inserted at the beginning
//of the doubly linked list
else if ((*list)->n >= newNode->n)
{
newNode->next = *list;
newNode->next->prev = newNode;
*list = newNode;
}
else{
current = *list;
//locate the node after  which the node is to be inserted
while (current->next != NULL && current->next->n < newNode->n)
current = current->next;
//make the appropriate links
newNode->next = current->next;
//if the new node is not inserted at the end of the list
if(current->next != NULL)
newNode->next->prev = newNode;
current->next = newNode;
newNode->prev = current;
}
}
//function to sort a doubly linked listt using insertion sort
void insertion_sort_list(listint_t **list)
{
//Initialise 'sorted' a sorted douly linked list
listint_t *sorted = NULL;
//traverse the given double linked list and insert every node to sorted
listint_t * current = *list;
while (current != NULL)
{
    //store next for next iteration
listint_t * next = current->next;
//removing all the links so as to create 'current' as a new node forr insertion
current->prev = current->next = NULL;
//insert current in sorted doubly linked list
sortedinserted(&sorted, current);
//update current
current = next;
}
//update head ref to point to sorted  doubly linked list
*list = sorted;
print_list(*list);
}

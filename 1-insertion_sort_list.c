#include "sort.h"

/**
  * insertion_sort_list - sorts a doubly linked list of integers in
  * ascending order using the Insertion sort algorithm.
  * @list: doubly linked list of type listint.
  * Return: Nothing
  **/

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *tmp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = *list;
	curr = curr->next;
	while (curr != NULL)
	{
		while (curr->prev && curr->n < (curr->prev)->n)
		{
			tmp = curr;
			if (curr->next)
				(curr->next)->prev = tmp->prev;
			(curr->prev)->next = tmp->next;
			curr = curr->prev;
			tmp->prev = curr->prev;
			tmp->next = curr;
			if (curr->prev)
				(curr->prev)->next = tmp;
			curr->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			print_list(*list);
			curr = curr->prev;
		}
		curr = curr->next;
	}

}

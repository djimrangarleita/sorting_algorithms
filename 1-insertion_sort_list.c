#include "sort.h"

/**
 * insertion_sort_list - implement insertion sort algo on list
 * @list: ptr to list ptr
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *n1, *n2;
	
	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	tmp = *list;
	while (tmp->next)
	{
		n1 = tmp;
		n2 = tmp->next;
		tmp = tmp->next;
		while (n1)
		{
			if (n1->n > n2->n)
			{
				swap_nodes(n1, n2);
				if (n2->prev == NULL)
				{
					*list = n2;
				}
				print_list(*list);
			}
			else
			{
				break;
			}
			n1 = n2->prev;
		}
	}
}

/**
 * swap_nodes - takes two list nodes and swap them
 * @n1: ptr to first node ptr
 * @n2: ptr to second node ptr
 * Return: nothing
 */
void swap_nodes(listint_t *n1, listint_t *n2)
{
	listint_t *n1prev;

	n1prev = n1->prev;
	
	if (n1->prev)
	{
		n1->prev->next = n2;
	}

	n1->prev = n2;
	n1->next = n2->next;

	if (n2->next)
	{
		n2->next->prev = n1;
	}

	n2->prev = n1prev;
	n2->next = n1;
}

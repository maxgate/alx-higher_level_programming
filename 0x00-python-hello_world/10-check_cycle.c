#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Check if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 * 	   If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *bicycle, *car;
	if (list == NULL || list ->next == NULL)
		return (0);

	bicycle = list->next;
	car = list->next->next;

	while (bicycle && car && car->next)
	{
		if (bicycle == car)
			return (1);

		bicycle = bicycle->next;
		car = car->next->next;
	}

	return (0);
}

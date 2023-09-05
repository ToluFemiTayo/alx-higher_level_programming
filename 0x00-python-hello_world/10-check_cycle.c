#include "lists.h"

/**
 * check_cycle - Fuctn checks if a linked list
 * contains a cycle.
 * @list: Linked list to be checkd.
 *
 * Return: 1 (If the list has a cycle),
 * 0 (If it does not).
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}

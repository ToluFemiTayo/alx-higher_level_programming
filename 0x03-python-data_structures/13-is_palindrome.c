#include "lists.h"

/**
 * reverse_listint - Fuctn that reverses a Linked List.
 * @head: Pointr to the First Node in the List.
 *
 * Return: Pointr to the First Node in the New List.
 */
void reverse_listint(listint_t **head)
{
  listint_t *prev = NULL;
  listint_t *current = *head;
  listint_t *next = NULL;

  while (current)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

  *head = prev;
}

/**
 * is_palindrome - Fuctn checks if Linked List is a palindrome.
 * @head: Double Pointr to the Linked List.
 *
 * Return: 1 (if it is), 0 (if not)
 */
int is_palindrome(listint_t **head)
{
  listint_t *slow = *head, *fast = *head, *temp = *head, *dup = NULL;

  if (*head == NULL || (*head)->next == NULL)
    return (1);

  while (1)
    {
      fast = fast->next->next;
      if (!fast)
	{
	  dup = slow->next;
	  break;
	}
      if (!fast->next)
	{
	  dup = slow->next->next;
	  break;
	}
      slow = slow->next;
    }

  reverse_listint(&dup);

  while (dup && temp)
    {
      if (temp->n == dup->n)
	{
	  dup = dup->next;
	  temp = temp->next;
	}
      else
	return (0);
    }

  if (!dup)
    return (1);

  return (0);
}

#include "list.h"

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *head;
    int     tmp;

    head = lst;
    while (lst->next)
    {
        if (!(* cmp)(lst->data, lst->next->data))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = head;
        }
        else
            lst = lst->next;
    }
    return (head);
}

int     main(void)
{
	t_list	*head;
	t_list	*lst;
	int		tab[]= { 4, 42, -10};
	int		i;

	head = malloc(sizeof(t_list));
	head->data = tab[0];
	lst=head;
	i = 1;
	while (i < 3)
	{
		lst->next = malloc(sizeof(t_list));
		lst->next->data = tab[i];
		lst = lst->next;
		i++;
	}
	lst->next = NULL;

	// sort linked-list
	lst = head;
	head = sort_list(lst, ascending);

	// print linked-list
	lst = head;
	while (lst)
	{
		printf ("%d -> ", (lst->data));
		lst = lst->next;
	}
	printf ("%p \n", lst);

	// free linked-list
	while (head)
	{
		lst = head;
		head = lst->next;
		free (lst);
	}
	return (0);
}
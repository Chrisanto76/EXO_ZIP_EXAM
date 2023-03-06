#include "list.h"

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *head;
    int *tmp;

    head = lst;
    if (!lst)
        return (NULL);
    while (lst->next)
    {
        if (!(*cmp)(*(int *)lst->content, *(int *)lst->next->content))
        {
            tmp = lst->content;
            lst->content = lst->next->content;
            lst->next->content = tmp;
            lst = head;
        }
        else
        {
            lst = lst->next;
        }    

    }
    return (head);
}

int main(void)
{
    int tab[] = {42, 30, 10};

    t_list  *lst;

    lst = malloc(sizeof(*lst));
    lst->content = &tab[0];
    lst->next = malloc(sizeof(*lst));
    lst->next->content = &tab[1];
    lst->next->next = malloc(sizeof(*lst));
    lst->next->next->content = &tab[2];
    lst->next->next->next = NULL;
    lst = sort_list (lst, ascending);
    printf (" %d  -> ", *(int *)(lst->content));
    printf (" %d  -> ", *(int *)(lst->next->content));
    printf (" %d  -> ", *(int *)(lst->next->next->content));
    printf (" %p \n", lst->next->next->next);
    return (0);
}

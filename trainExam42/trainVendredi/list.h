#ifndef SORT_LIST_H
# define SORT_LIST_H
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
    void    *content;
    struct s_list *next;       
}              t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

#endif
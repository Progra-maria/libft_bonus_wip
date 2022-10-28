
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **head, t_list *new);

int ft_lstsize(t_list *lst)
{
    int i;

    i = 1;
    while (lst->next != 0)
    {
    lst = lst->next;
    i++;
    }
    return(i);
}

int main(void)
{
    t_list *head;
    t_list *tmp;
    int     i;
    int     *ptr;

    head = 0;
    i = 1;
    ptr = &i;
    while (i <= 1)
    {
        tmp = ft_lstnew((int *)ptr);
        ft_lstadd_front(&head, tmp);
        i++;
    }
    printf("%d\n", ft_lstsize(head));
    return (0);
}

t_list *ft_lstnew(void *content)
{
    t_list *newnode;
    newnode = malloc(sizeof(t_list));
    if (!newnode)
        return (0);
    newnode->content = content;
    newnode->next = 0;
    return (newnode);
}

void ft_lstadd_front(t_list **head, t_list *new)
{
    new->next = *head;
    *head = new;
}

#include <stdio.h>
#include <stdlib.h>
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **head, t_list *new);

t_list *ft_lstlast(t_list *lst)
{
    while (lst->next != 0)
    {
    lst = lst->next;
    }
    return(lst);
}
int main(void)
{
    t_list *head;
    t_list *tmp;
    int     i;
    int     nums[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int     *ptr;

    head = 0;
    i = 0;
    ptr = &nums[0];
    while (i <= 10)
    {
        tmp = ft_lstnew((int *)ptr + i);
        ft_lstadd_front(&head, tmp);
        i++;
    }
    head = ft_lstlast(head);
    //printf("%d\n", * (int)head->content);
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
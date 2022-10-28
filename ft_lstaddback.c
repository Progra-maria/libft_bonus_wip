
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void    printlist(t_list *head);
void ft_lstadd_front(t_list **head, t_list *new);

t_list *ft_lstlast(t_list *lst)
{
    while (lst->next != 0)
    {
    lst = lst->next;
    }
    return(lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *t_last;

    t_last = ft_lstlast(*lst);
    t_last->next = new;
}

int main(void)
{
    t_list *head;
    t_list *newnode;
    int value1;
    int value2;
    int value3;
    int value4;

    value1 = 1;
    value2 = 2;
    value3 = 3;
    value4 = 4; 
    head = ft_lstnew(&value1);
    newnode =ft_lstnew(&value2);
    ft_lstadd_front(&head, newnode);
    printf("%d\n", *(int *)head->content);
    printf("%d\n", *(int *)head->next->content);
    newnode =ft_lstnew(&value3);
    printlist(head);
    ft_lstadd_back(&head, newnode);
    printlist(head);
    return (0);
}

void    printlist(t_list *head)
{
    t_list *temporary = head;
    while (temporary != 0)
    {
        printf("%d -", *(int *)temporary->content);
        temporary = temporary->next;
    }
    printf("\n");
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
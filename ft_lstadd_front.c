
#include <stdlib.h>
#include <stdio.h>


typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list  *ft_lstnew(void *content);
void    printlist(t_list *head);

void ft_lstadd_front(t_list **head, t_list *new)
{
    new->next = *head;
    *head = new;
}

int main(void)
{
    t_list *head;
    t_list *newnode;
    int value1;
    char value2[] = "hola";

    value1 = 35;
    head = ft_lstnew(&value1);
    printf("%d\n", *(int *)head->content);
    newnode =ft_lstnew((char *)value2);
    ft_lstadd_front(&head, newnode);
    printf("%s\n", (char *)head->content);
    printf("%d\n", *(int *)newnode->content);
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

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

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
// int main(void)
// {
//     t_list *mylist;
//     int value;

//     value = 35;
//     mylist = ft_lstnew(&value);
//     printf("%d\n", *(int *)mylist->content);
//     return (0);
// }
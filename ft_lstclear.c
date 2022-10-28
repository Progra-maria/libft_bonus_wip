
//buscar el último nodo de la lista
//ir liberando nodos hacia atrás
//cuando la iteración llegue al nodo siguiente a lst, termina de liberar nodos
//lst->next = 0;

void ft_lstclear(t_list **lst, void (*del)(void
*));
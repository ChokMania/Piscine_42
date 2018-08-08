#include "ex00/ft_list.h"
#include <stdio.h>

void	ft_printf(t_list *t)
{
	if (t == 0)
		return ;
	printf("%s\n", (char *)t->data);
	ft_printf(t->next);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return 0;
}

void	printf_elt(void *d)
{
	printf("%s\n", d);
}

void ft_list_push_back(t_list **begin_list, void *data);
void ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_list_last(t_list *begin_list);
int	ft_list_size(t_list *begin_list);
t_list *ft_list_push_params(int ac, char **av);
void ft_list_clear(t_list **begin_list);
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void ft_list_reverse(t_list **begin_list);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, 
		int (*cmp)());
t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	t_list *t;
	t = 0;
	char	data_ref[] = "12";
	ft_list_push_back(&t, "First lem");
	ft_list_push_front(&t, "Last Elem");
	//ft_printf(t);
	//printf("List length: %d\n", ft_list_size(t));
	//printf("Last elt: %s\n", (char *)(ft_list_last(t)->data));
	t_list *l = ft_list_push_params(ac, av);
	//ft_printf(l);
	//ft_list_clear(&l);
	//ft_printf(l);
	//printf("2th elt: %s\n", (char *)(ft_list_at(l, 1)->data));
	//ft_list_reverse(&l);
	//ft_printf(l);
	//printf("Foreach : \n");
	//ft_list_foreach(l, &printf_elt);
	//printf("Foreach if: \n");
	//ft_list_foreach_if(l, &printf_elt, "12", &ft_strcmp);
	//printf("List find: \n");
	//printf_elt(ft_list_find(l, "12", &ft_strcmp));
	ft_list_remove_if(&l, (void *)data_ref, &ft_strcmp);
	ft_printf(l);
	
	return (0);
}

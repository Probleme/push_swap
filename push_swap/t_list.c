/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 03:16:37 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/12 05:33:30 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst   *ft_newlst(int content)
{
	t_lst   *new;

	new = malloc(sizeof(t_lst));
	if (!new)
		return (NULL);
	new->content = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_lst **stack,t_lst *list)
{
	list->next = *stack;
	*stack = list;
}

t_lst	*ft_lstlast(t_lst *stack)
{
	t_lst	*tmp;

	tmp = stack;
	while(tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void	ft_lstadd_back(t_lst **stack, t_lst *liist)
{
	t_lst *tmp;

	if (*stack)
	{
		tmp = ft_lstlast(*stack);
		tmp->next = liist;
		liist->next = NULL;
	}
	else
	{
		*stack = tmp;
		(*stack)->next = NULL;
	}
}

int	ft_lstsize(t_lst *stack)
{
	size_t	i;
	t_lst	*tmp;

	tmp = stack;
	i = 0;
	while(tmp)
	{
		tmp =tmp->next;
		i++;
	}
	return (i);
}

void	printtlst(t_lst *stack)
{
	t_lst	*tmp;

	tmp = stack;
	while(tmp != NULL)
	{
		ft_putnbr_fd(tmp->content, STDOUT_FILENO);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}
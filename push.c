/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:18:01 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/07 19:14:31 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_lst **stack, int content)
{
	t_lst	*node;

	node = malloc(sizeof(t_lst));
	node->content = content;
	node->next = *stack;
	*stack = node;
}

static int	pop(t_lst **stack)
{
	t_lst	*tmp;
	int		pop;

	tmp = *stack;
	if (*stack == NULL)
		return (printf("Stack is Empty\n"));
	pop = tmp->content;
	(*stack) = tmp->next;
	free(tmp);
	return (pop);
}

void	pa(t_lst **stacka, t_lst **stackb)
{
	int	popped;

	if (*stacka == NULL)
		return ;
	popped = pop(stackb);
	push(stacka, popped);
}

void	pb(t_lst **stacka, t_lst **stackb)
{
	int	popped;

	if (*stackb == NULL)
		return ;
	popped = pop(stacka);
	push(stackb, popped);
}

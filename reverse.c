/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:29:36 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/07 18:59:21 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_lst **stack)
{
	t_lst	*last;
	t_lst	*current;

	if (!(*stack) || !(*stack)->content)
		return ;
	last = *stack;
	while (last->next)
		last = last->next;
	current = *stack;
	while (current->next != last)
		current = current->next;
	current->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_lst **stack)
{
	reverse(stack);
	printf("rra\n");
}

void	rrb(t_lst **stack)
{
	reverse(stack);
	printf("rrb\n");
}

void	rrr(t_lst **stacka, t_lst **stackb)
{
	reverse(stacka);
	reverse(stackb);
	printf("rrr\n");
}

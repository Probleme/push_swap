/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:39:53 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/07 19:07:03 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_lst **stack)
{
	t_lst	*lsn;

	if (!(*stack) || !(*stack)->next)
		return ;
	lsn = *stack;
	while (lsn->next)
		lsn = lsn->next;
	lsn->next = *stack;
	*stack = (*stack)->next;
	lsn->next->next = NULL;
}

void	ra(t_lst **stack)
{
	rotate(stack);
	printf("ra\n");
}

void	rb(t_lst **stack)
{
	rotate(stack);
	printf("rb");
}

void	rr(t_lst **stacka, t_lst **stackb)
{
	rotate(stacka);
	rotate(stackb);
	printf("rr\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:12 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/07 19:11:06 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_lst **stack)
{
	int	content;

	if (!(*stack)->next || !(*stack))
		return ;
	content = 0;
	content = (*stack)->next->content;
	(*stack)->next->content = (*stack)->content;
	(*stack)->content = content;
}

void	sa(t_lst **stack)
{
	swap(stack);
	printf("sa\n");
}

void	sb(t_lst **stack)
{
	swap(stack);
	printf("sb\n");
}

void	ss(t_lst **stacka, t_lst **stackb)
{
	swap(stacka);
	swap(stackb);
	printf("ss\n");
}

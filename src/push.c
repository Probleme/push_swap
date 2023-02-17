/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:18:01 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/13 00:20:55 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	push(t_lst **stack_to, t_lst **stack_from)
{
	t_lst	*tmp;
	t_lst	*head_to;
	t_lst	*head_from;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int	pa(t_lst **stacka, t_lst **stackb)
{
	if (push(stacka, stackb) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_lst **stacka, t_lst **stackb)
{
	if (push(stackb, stacka) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:04:29 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/20 23:39:11 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	get_min(t_lst **stack)
{
	t_lst	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && (head->index != -1))
			min = head->index;
	}
	return (min);
}

void	sort_3(t_lst **stack)
{
	while (is_sorted(stack) != 1)
	{
		if (((*stack)->index > (*stack)->next->index)
			&& ((*stack)->index < (*stack)->next->next->index))
			sa(stack);
		else if (((*stack)->index > ((*stack)->next->index))
			&& ((*stack)->index > (*stack)->next->next->index))
			ra(stack);
		else
			rra(stack);
	}
}

void	sort_4(t_lst **stacka, t_lst **stackb)
{
	int	distance;

	if (is_sorted(stacka) != 1)
	{
		distance = get_distance(stacka, get_min(stacka));
		if (distance == 1)
			ra(stacka);
		else if (distance == 2)
		{
			ra(stacka);
			ra(stacka);
		}
		else if (distance == 3)
			rra(stacka);
	}
	pb(stacka, stackb);
	sort_3(stacka);
	pa(stacka, stackb);
}

void	sort_5(t_lst **stacka, t_lst **stackb)
{
	int	distance;

	if (is_sorted(stacka) == 0)
	{
		distance = get_distance(stacka, get_min(stacka));
		if (distance == 1)
			ra(stacka);
		else if (distance == 2)
		{
			ra(stacka);
			ra(stacka);
		}
		else if (distance == 3)
		{
			rra(stacka);
			rra(stacka);
		}
		else if (distance == 4)
			rra(stacka);
	}
	pb(stacka, stackb);
	sort_4(stacka, stackb);
	pa(stacka, stackb);
}

void	simple_sort(t_lst **stacka, t_lst **stackb)
{
	int	size;

	if (is_sorted(stacka) || ft_lstsize(*stacka) == 0
		|| ft_lstsize(*stacka) == 1)
		return ;
	size = ft_lstsize(*stacka);
	if (size == 2)
		sa(stacka);
	else if (size == 3)
		sort_3(stacka);
	else if (size == 4)
		sort_4(stacka, stackb);
	else if (size == 5)
		sort_5(stacka, stackb);
}

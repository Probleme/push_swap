/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:58:08 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/22 02:07:26 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	find_largest_num(t_lst *stack)
{
	int	max;

	max = stack->index;
	stack = stack->next;
	while (stack != NULL)
	{
		if (max < stack->index)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	find_position(t_lst *stack)
{
	int	pos;
	int	lenght;
	int	max;

	pos = -1;
	lenght = 0;
	max = stack->index;
	stack = stack->next;
	while (stack != NULL)
	{
		if (max < stack->index)
		{
			max = stack->index;
			pos = lenght;
		}
		stack = stack->next;
		lenght++;
	}
	if (pos < lenght / 2)
		return (0);
	else
		return (1);
}

void	sort(t_lst **stacka, t_lst **stackb)
{
	int	pos;
	int	max;

	pos = 0;
	max = 0;
	while (*stackb)
	{
		max = find_largest_num(*stackb);
		pos = find_position(*stackb);
		if (pos == 0)
		{
			if (max == (*stackb)->index && istop(*stackb, *stackb) == 1)
				pa(stacka, stackb);
			else
				rb(stackb);
		}
		else if (pos == 1)
			rrb(stackb);
	}
}

void	sort_100(t_lst **stacka, t_lst **stackb)
{
	int		i;
	int		j;

	i = 0;
	j = 19;
	while ((*stacka))
	{
		if ((*stacka)->index <= i)
		{
			pb(stacka, stackb);
			i++;
		}
		else if ((*stacka)->index <= i + j)
		{
			pb(stacka, stackb);
			rb(stackb);
			i++;
		}
		else
			ra(stacka);
	}
	sort(stacka, stackb);
}

void	sort_500(t_lst **stacka, t_lst **stackb)
{
	int		i;
	int		j;

	i = 0;
	j = 37;
	while ((*stacka))
	{
		if ((*stacka)->index <= i)
		{
			pb(stacka, stackb);
			i++;
		}
		else if ((*stacka)->index <= i + j)
		{
			pb(stacka, stackb);
			rb(stackb);
			i++;
		}
		else
			ra(stacka);
	}
	sort(stacka, stackb);
}

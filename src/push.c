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

int	push(t_lst **stacka, t_lst **stackb)
{
	t_lst	*tmp;
	t_lst	*heada;
	t_lst	*headb;

	if (ft_lstsize(*stackb) == 0)
		return (-1);
	heada = *stacka;
	headb = *stackb;
	tmp = headb;
	headb = headb->next;
	*stackb = headb;
	if (!heada)
	{
		heada = tmp;
		heada->next = NULL;
		*stacka = heada;
	}
	else
	{
		tmp->next = heada;
		*stacka = tmp;
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

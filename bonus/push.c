/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:18:01 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/22 02:26:33 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

int	push(t_lst **stacka, t_lst **stackb)
{
	t_lst	*tmp;
	t_lst	*heada;
	t_lst	*headb;

	if (ft_lstsize(*stackb) == 0)
		return (1);
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

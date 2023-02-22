/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:39:53 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/22 02:27:24 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

int	rotate(t_lst **stack)
{
	t_lst	*lsn;

	if (ft_lstsize(*stack) < 2)
		return (1);
	lsn = *stack;
	lsn = ft_lstlast(lsn);
	lsn->next = *stack;
	*stack = (*stack)->next;
	lsn->next->next = NULL;
	return (0);
}

int	rr(t_lst **stacka, t_lst **stackb)
{
	if ((ft_lstsize(*stacka) < 2) || (ft_lstsize(*stackb) < 2))
		return (1);
	rotate(stacka);
	rotate(stackb);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:12 by ataouaf           #+#    #+#             */
/*   Updated: 2023/03/01 18:56:52 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

int	swap(t_lst **stack)
{
	t_lst	*head;
	t_lst	*tmp;
	int		content;

	if (ft_lstsize(*stack) < 2)
		return (1);
	head = *stack;
	tmp = head->next;
	content = head->content;
	head->content = tmp->content;
	tmp->content = content;
	return (0);
}

int	ss(t_lst **stacka, t_lst **stackb)
{
	if (ft_lstsize(*stacka) < 2 || ft_lstsize(*stackb) < 2)
		return (1);
	swap(stacka);
	swap(stackb);
	return (0);
}

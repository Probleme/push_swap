/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:12 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/11 06:26:21 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	swap(t_lst **stack)
{
	t_lst	*head;
	t_lst	*tmp;
	int		content;
	int		index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tmp = head->next;
	if (!head && !tmp)
		ft_error("Error swapping");
	content = head->content;
	index = head->index;
	head->content = tmp->content;
	head->index = tmp->index;
	tmp->content = content;
	tmp->index = index;
	return (0);
	// content = 0;
	// content = (*stack)->next->content;
	// (*stack)->next->content = (*stack)->content;
	// (*stack)->content = content;
}

int	sa(t_lst **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_lst **stack)
{
	if (swap(stack) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_lst **stacka, t_lst **stackb)
{
	if (ft_lstsize(*stacka) < 2 || ft_lstsize(*stackb) < 2)
		return (-1);
	swap(stacka);
	swap(stackb);
	ft_putendl_fd("ss", 1);
	return (0);
}

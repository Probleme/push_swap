/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:29:36 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/12 20:59:37 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	reverserotate(t_lst **head)
{
	t_lst    *last;
    t_lst    *newlast;

    last = *head;
    newlast = *head;
    if (ft_lstsize(*head) < 2 || *head == 0)
        return (-1);
    while (last->next != NULL)
    last = last->next;
    last->next = *head;
    *head = last;
    while (newlast->next != last)
    newlast = newlast->next;
    newlast->next = NULL;
	return (0);
}

int	rra(t_lst **stack)
{
	if (reverserotate(stack) == -1)
		return (0);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_lst **stack)
{
	if (reverserotate(stack) == -1)
		return (0);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_lst **stacka, t_lst **stackb)
{
	if ((ft_lstsize(*stacka) < 2 ) || (ft_lstsize(*stackb) < 2))
		return (-1);
	reverserotate(stacka);
	reverserotate(stackb);
	ft_putendl_fd("rrr", 1);
	return (0);
}

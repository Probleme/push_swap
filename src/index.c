/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 04:29:46 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/11 04:38:20 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_lst   *get_next_min(t_lst **stack)
{
	t_lst   *head;
	t_lst   *min_lst;
	// int     min;

	if (!*stack)
		return NULL;
	// min = 0;
	min_lst = NULL;
	head = *stack;
	while(head)
	{
		if ((head->index == -1) && (min_lst == NULL || head->content < min_lst->content))
		{
			min_lst = head;
			// min = 1;
		}
		head = head->next;
	}
	return (min_lst);
}

void    index_stack(t_lst **stack)
{
	t_lst   *head;
	int     i;

	i = 0;
	head = get_next_min(stack);
	while(head)
	{
		head->index = i++;
		head = get_next_min(stack);
	}
}
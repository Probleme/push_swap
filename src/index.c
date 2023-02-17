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
	t_lst   *min;
	int     has_min;

	has_min = 0;
	min = NULL;
	head = *stack;
	if (head)
	{
		while(head)
		{
			if ((head->index == -1) && (!has_min || head->content < min->content))
			{
				min = head;
				has_min = 1;	
			}
			head = head->next;
		}
	}
	return (min);
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
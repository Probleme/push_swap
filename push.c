/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:22:38 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/04 20:19:17 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_lst **stacka, t_lst **stackb)
{
	t_lst	*tmp;

	if (!stackb)
		return ;
	tmp = (*stackb)->next;
	lst_addfront(stacka, *stackb);
	*stackb = tmp;
	if (*stackb)
		(*stackb)->prev = NULL;
}

void	pa(t_lst **stacka, t_lst **stackb)
{
	push(stacka, stackb);
	printf("pa\n");
}

void	pb(t_lst **stacka, t_lst **stackb)
{
	push(stackb, stacka);
	printf("pb\n");
}

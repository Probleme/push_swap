/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:05:15 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/04 22:48:59 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_lst **stack)
{
    
}

void	rra(t_lst **stack)
{
    reverse(stack);
    printf("rra\n");
}

void	rrb(t_lst **stack)
{
    reverse(stack);
    printf("rrb\n");
}

void	rrr(t_lst **stacka, t_lst **stackb)
{
    reverse(stacka);
    reverse(stackb);
    printf("rrr\n");
}

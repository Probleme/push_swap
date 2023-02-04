/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:05:01 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/04 21:20:08 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_lst **stack)
{
    t_lst *lst;

    if (!(*stack) || (*stack)->next)
        return ;
    lst = lst_last(*stack);
    lst->next = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    lst->next->prev = lst;
    lst->next->next = NULL;
}

void	ra(t_lst **stack)
{
    rotate(stack);
    printf("ra\n");
}

void	rb(t_lst **stack)
{
    rotate(stack);
    printf("rb");
}

void	rr(t_lst **stacka, t_lst **stackb)
{
    rotate(stacka);
    rotate(stackb);
    printf("rr\n");
}

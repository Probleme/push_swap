/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:04:44 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/04 19:29:51 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_lst **stack)
{
    int index;
    int content;

    if (!(*stack)->next)
        return ;
    content = (*stack)->next->content;
    index = (*stack)->next->index;
    (*stack)->next->content = (*stack)->content;
    (*stack)->next->index = (*stack)->index;
    (*stack)->content = content;
    (*stack)->index = index;
}

void    sa(t_lst **stack)
{
    swap(stack);
    printf("sa\n");
}

void    sb(t_lst **stack)
{
    swap(stack);
    printf("sb\n");
}

void    ss(t_lst **stacka, t_lst **stackb)
{
    swap(stacka);
    swap(stackb);
    printf("ss\n");
}
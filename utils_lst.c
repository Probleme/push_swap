/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:51:54 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/04 22:01:48 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*lst_new(int content)
{
    t_lst *stack;

    stack = malloc(sizeof(t_lst));
    if (!stack)
        return NULL;
    stack->content = content;
    stack->index = -1;
    stack->next = NULL;
    stack->prev = NULL;
    return stack;
}

// t_lst	*lst_last(t_lst *stack)
// {
//     if (!(stack))
//         return NULL;
//     while(stack->next)
//         stack = stack->next;
//     return stack;
// }

void	lst_addfront(t_lst **stack, t_lst *news)
{
    if (!stack || news)
        return ;
    news->next = *stack;
    if (*stack)
        (*stack)->prev = news;
    news->prev = NULL;
    *stack = news;
    // if (!(*stack))
    // {
    //     *stack = news;
    //     (*stack)->next = NULL;
    //     (*stack)->prev = NULL;
    //     return ;
    // }
    // (*stack)->prev = news;
    // news->next = *stack;
    // *stack = news;
    // news->prev = NULL;
}

void	lst_addback(t_lst **stack, t_lst *news)
{
    t_lst   *tmp;

    if (!stack || news)
        return ;
    if (!(*stack))
    {
        *stack = news;
        (*stack)->next = NULL;
        (*stack)->prev = NULL;
        return ;
    }
    tmp = (*stack);
    while(tmp->next)
        tmp = tmp->next;
    tmp->next = news;
    tmp->prev = tmp;
    // news->next = NULL;
}

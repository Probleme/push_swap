/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:18:01 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/13 00:20:55 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// static void	push(t_lst **stack, int content)
// {
// 	t_lst	*node;

// 	node = malloc(sizeof(t_lst));
// 	node->content = content;
// 	node->next = *stack;
// 	*stack = node;
// }

// static int	pop(t_lst **stack)
// {
// 	t_lst	*tmp;
// 	int		pop;

// 	tmp = *stack;
// 	if (ft_lstsize(*stack) == 0)
// 		return (printf("Stack is Empty\n"));
// 	pop = tmp->content;
// 	(*stack) = tmp->next;
// 	free(tmp);
// 	return (pop);
// }

// int	pa(t_lst **stacka, t_lst **stackb)
// {
// 	int	popped;

// 	// if (ft_lstsize(*stacka) < 2)
// 	// 	return (-1);
// 	popped = pop(stackb);
// 	push(stacka, popped);
// 	ft_putendl_fd("pa", 1);
// 	return (0);
// }

// int	pb(t_lst **stacka, t_lst **stackb)
// {
// 	int	popped;

// 	// if (ft_lstsize(*stacka) < 2)
// 	// 	return -1;
// 	popped = pop(stacka);
// 	push(stackb, popped);
// 	ft_putendl_fd("pb", 1);
// 	return (0);
// }

int	push(t_lst **stack_to, t_lst **stack_from)
{
	t_lst	*tmp;
	t_lst	*head_to;
	t_lst	*head_from;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int	pa(t_lst **stacka, t_lst **stackb)
{
	if (push(stacka, stackb) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_lst **stacka, t_lst **stackb)
{
	if (push(stackb, stacka) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

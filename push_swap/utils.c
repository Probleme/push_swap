/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:11:28 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/12 23:59:53 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(char *msg)
{
	ft_putendl_fd(msg, STDERR_FILENO);
	return 0;
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	while(i >= 0)
		free(str[i--]);
}

int	get_distance(t_lst **stack, int index)
{
	t_lst	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while(head)
	{
		if(head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

int	is_sorted(t_lst **stack)
{
	t_lst	*head;

	head = *stack;
	while(head && head->next)
	{
		if (head->content > head->next->content)
			return (0);
		head = head->next;
	}
	return (1);
}

// void	free_stack(t_lst **stack)
// {
// 	t_lst	*head;
// 	t_lst	*tmp;

// 	head = *stack;
// 	while(head)
// 	{
// 		tmp = head;
// 		head = head->next;
// 		free(tmp);
// 	}
// 	free(stack);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 02:30:02 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/09 00:43:51 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void insert(t_lst **stack, int data)
{
	t_lst *tmp = malloc(sizeof(t_lst));
	tmp->content = data;
	tmp->next = *stack;
	*stack = tmp;
}

void print(t_lst *stack)
{
	while(stack != NULL)
	{
		printf("%d", stack->content);
		stack = stack->next;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	t_lst *stacka = NULL;
	char	**args;
	if ((ft_check_args(argc,argv)) == 0)
		return 0;
	int i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		args = argv;
		i = 1;
	}
	while(args[i])
	{
		insert(&stacka, ft_atoi(args[i]));
		i++;
	}
	print(stacka);
	// ra(&stacka);
	// print(stacka);
	return 0;
}

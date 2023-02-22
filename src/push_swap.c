/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 02:30:02 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/22 03:55:31 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	stack_new(t_lst **stack, char **argv, int argc)
{
	t_lst	*new;
	char	**args;
	int		i;

	i = 0;
	new = *stack;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_newlst(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

void	sort_stack(t_lst **stacka, t_lst **stackb)
{
	if (ft_lstsize(*stacka) <= 5)
		simple_sort(stacka, stackb);
	else if (ft_lstsize(*stacka) <= 100)
		sort_100(stacka, stackb);
	else
		sort_500(stacka, stackb);
}

void	free_nodes(t_lst *stack)
{
	t_lst	*tmp;

	tmp = stack;
	while (stack)
	{
		tmp = stack;
		free(tmp);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_lst	*stacka;
	t_lst	*stackb;
	t_lst	*tmp;

	if (argc < 2)
		return (0);
	if ((ft_check_args(argc, argv)) == 0)
		return (0);
	stacka = NULL;
	stackb = NULL;
	stack_new(&stacka, argv, argc);
	if (is_sorted(&stacka))
	{
		free_nodes(stacka);
		return (0);
	}
	sort_stack(&stacka, &stackb);
	tmp = stacka;
	free_nodes(tmp);
	return (0);
}

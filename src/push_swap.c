/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 02:30:02 by ataouaf           #+#    #+#             */
/*   Updated: 2023/03/01 19:06:27 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	stack_new(t_lst **stack, char **argv)
{
	t_lst	*new;
	char	**args;
	int		i;

	i = 0;
	new = *stack;
	args = argv;
	while (args[i])
	{
		new = ft_newlst(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
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
		stack = stack->next;
		free(tmp);
	}
}

int	main(int argc, char **argv)
{
	t_lst	*stacka;
	t_lst	*stackb;
	char	**args;

	if (argc < 2)
		return (0);
	args = join_args(argc, argv);
	if ((!check_error(args)))
		return (0);
	stacka = NULL;
	stackb = NULL;
	stack_new(&stacka, args);
	ft_free(args);
	if (is_sorted(&stacka))
	{
		free_nodes(stacka);
		return (0);
	}
	sort_stack(&stacka, &stackb);
	free_nodes(stacka);
	return (0);
}

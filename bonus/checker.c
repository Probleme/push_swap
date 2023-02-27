/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:18:50 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/27 03:12:21 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap_bonus.h"

#include<string.h>

int	check(t_lst **stacka, t_lst **stackb, char *line)
{
	if (!ft_strcmp(line, "pa\n"))
		push(stacka, stackb);
	else if (!ft_strcmp(line, "pb\n"))
		push(stackb, stacka);
	else if (!ft_strcmp(line, "sa\n"))
		swap(stacka);
	else if (!ft_strcmp(line, "sb\n"))
		swap(stackb);
	else if (!ft_strcmp(line, "ss\n"))
		ss(stacka, stackb);
	else if (!ft_strcmp(line, "ra\n"))
		rotate(stacka);
	else if (!ft_strcmp(line, "rb\n"))
		rotate(stackb);
	else if (!ft_strcmp(line, "rr\n"))
		rr(stacka, stackb);
	else if (!ft_strcmp(line, "rra\n"))
		reverserotate(stacka);
	else if (!ft_strcmp(line, "rrb\n"))
		reverserotate(stackb);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(stacka, stackb);
	else
		exit(ft_error("Error"));
	return (0);
}

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

void	check_print(t_lst **stacka, t_lst **stackb)
{
	t_lst	*tmp;
	int		size;

	tmp = *stacka;
	size = ft_lstsize(*stacka);
	if (is_sorted(stacka) && ft_lstsize(*stacka) == size)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	free_nodes(*stacka);
	if (stackb)
		free_nodes(*stackb);
}

int	main(int argc, char **argv)
{
	t_lst	*stacka;
	t_lst	*stackb;
	char	*line;
	char	**args;

	if (argc < 2)
		return (0);
	args = join_args(argc, argv);
	if (!check_error(args))
		return (0);
	stacka = NULL;
	stackb = NULL;
	stack_new(&stacka, args);
	ft_free(args);
	while (get_next_line(0, &line))
	{
		check(&stacka, &stackb, line);
		free(line);
	}
	check_print(&stacka, &stackb);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 00:18:50 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/22 02:37:34 by ataouaf          ###   ########.fr       */
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
		exit(write(1, "Error!", 6));
	return (0);
}

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
	if (argc == 2)
		ft_free(args);
}

int	main(int argc, char **argv)
{
	t_lst	*stacka;
	t_lst	*stackb;
	char	*line;
	int		size;

	if (argc == 2)
		return (0);
	stacka = NULL;
	stackb = NULL;
	if (ft_check_args(argc, argv) == 0)
		return (0);
	stack_new(&stacka, argv, argc);
	size = ft_lstsize(stacka);
	while (get_next_line(0, &line))
	{
		check(&stacka, &stackb, line);
		free(line);
	}
	if (is_sorted(&stacka) && ft_lstsize(stacka) == size)
		ft_putendl_fd("OK\n", 1);
	else
		ft_putendl_fd("KO\n", 1);
	while (stacka)
	{
		printf("%d ", stacka->content);
		stacka = stacka->next;
	}
	return (0);
}

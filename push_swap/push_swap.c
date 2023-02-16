/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 02:30:02 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/13 01:21:40 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initstack(t_lst **stack, char **argv, int argc)
{
	t_lst	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while(args[i])
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
	else
		sort(stacka, stackb);
}
int main(int argc, char **argv)
{
	t_lst 	*stacka;
	t_lst	*stackb;

	if (argc < 2)
		return (0);
	if ((ft_check_args(argc,argv)) == 0)
		return 0;
	stacka = NULL;
	stackb = NULL;
	initstack(&stacka, argv, argc);
	if (is_sorted(&stacka))
		return (0);
	sort_stack(&stacka, &stackb);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:35:24 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/22 06:18:17 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	ft_doubles(char **argv, int tmp, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == tmp)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	while(num[i])
		i++;
	while (num[i])
	{
		// if (num[i] == '-')
		// 	i++;
		if (num[i] >= '0' && num[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}

int	check_error(int argc, char **argv, int i)
{
	long	tmp;
	char	**args;

	args = argv;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (ft_doubles(args, tmp, i))
			return (ft_error("Error"));
		if (tmp < -2147483648 || tmp > 2147483647)
			return (ft_error("Error"));
		if (!ft_isnum(args[i]))
			return (ft_error("Error"));
		i++;
	}
	if (argc == 2)
		ft_free(args);
	return (1);
}

int	ft_check_args(int argc, char **argv)
{
	int		i;
	char	**args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		i = 0;
	}
	else
	{
		args = argv;
		i = 1;
	}
	if (check_error(argc, args, i))
		return (1);
	return (0);
}

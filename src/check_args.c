/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:35:24 by ataouaf           #+#    #+#             */
/*   Updated: 2023/03/07 21:12:40 by ataouaf          ###   ########.fr       */
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
	while (num[i])
	{
		if (ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_error(char **argv)
{
	long	tmp;
	char	**args;
	int		i;

	args = argv;
	i = 0;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (ft_doubles(args, tmp, i))
			return (ft_error("Error"));
		if (tmp < -2147483648 || tmp > 2147483647)
			return (ft_error("Error"));
		if (ft_isnum(args[i]))
			return (ft_error("Error"));
		i++;
	}
	return (1);
}

void	check_str_error(char **argv)
{
	int	i;
	int	j;
	int	num_spc;
	int	len;

	i = 1;
	while (argv[i])
	{
		j = 0;
		num_spc = 0;
		len = ft_strlen(argv[i]);
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				num_spc++;
			j++;
		}
		if (len == num_spc || argv[i][0] == 0)
		{
			ft_error("Error");
			exit(1);
		}
		i++;
	}
}

char	**join_args(int argc, char **argv)
{
	int		i;
	char	**args;
	char	*join;
	char	*str;

	i = 1;
	str = NULL;
	if (argc > 1)
	{
		while (argv[i])
		{
			join = ft_strjoin(argv[i], " ");
			str = ft_strjoin1(str, join);
			free(join);
			i++;
		}
	}
	check_str_error(argv);
	args = ft_split(str, ' ');
	free(str);
	return (args);
}

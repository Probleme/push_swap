/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 02:08:15 by ataouaf           #+#    #+#             */
/*   Updated: 2023/03/06 15:57:08 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	check_str(char *str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			ft_error("Error");
			exit(1);
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			ft_error("Error");
			exit(1);
		}
		i++;
	}
}

long	ft_atoi(char *str)
{
	int					i;
	unsigned long long	r;
	int					s;

	i = 0;
	r = 0;
	s = 1;
	check_str(str);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (r * s);
}

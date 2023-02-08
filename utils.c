/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:11:28 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/08 23:14:04 by ataouaf          ###   ########.fr       */
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
	// free(str);
}

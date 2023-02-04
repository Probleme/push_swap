/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:50:39 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/04 20:28:18 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

typedef struct s_lst
{
	int				content;
	int				index;
	struct s_lst	*next;
	struct s_lst	*prev;
}               t_lst;	

//UTILS_LST_C
void	lst_addfront(t_lst **stack, t_lst *news);
void	lst_addback(t_lst **stack, t_lst *news);
t_lst	*lst_new(int content);
t_lst	*lst_last(t_lst *stack);

//SWAP_C
void	sa(t_lst **stack);
void	sb(t_lst **stack);
void	ss(t_lst **stacka, t_lst **stackb);

//PUSH_C
void	pa(t_lst **stacka, t_lst **stackb);
void	pb(t_lst **stacka, t_lst **stackb);

//ROTATE_C
void	rotate(t_lst **stack);
void	ra(t_lst **stack);
void	rb(t_lst **stack);
void	rr(t_lst **stacka, t_lst **stackb);

//REVERSE_C
void	reverse(t_lst **stack);
void	rra(t_lst **stack);
void	rrb(t_lst **stack);
void	rrr(t_lst **stacka, t_lst **stackb);

#endif

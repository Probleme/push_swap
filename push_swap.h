/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:24 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/08 23:57:28 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}					t_lst;
// LIBFT
int				ft_isdigit(int c);
long				ft_atoi(const char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
// *INSTRUCTIONS*
// SWAP
static void		swap(t_lst **stack);
void			sa(t_lst **stack);
void			sb(t_lst **stack);
void			ss(t_lst **stacka, t_lst **stackb);
//PUSH
static void		push(t_lst **stack, int content);
static int		pop(t_lst **stack);
void			pa(t_lst **stacka, t_lst **stackb);
void			pb(t_lst **stacka, t_lst **stackb);
// ROTATE
static void		rotate(t_lst **stack);
void			ra(t_lst **stack);
void			rb(t_lst **stack);
void			rr(t_lst **stacka, t_lst **stackb);
// REVERSE
static void		reverse(t_lst **stack);
void			rra(t_lst **stack);
void			rrb(t_lst **stack);
void			rrr(t_lst **stacka, t_lst **stackb);
// UTILS
int			ft_error(char *msg);
void			ft_free(char **str);

// CHECKS ARGS
int	ft_check_args(int argc, char **argv);

#endif
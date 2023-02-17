/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:24 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/13 01:09:58 by ataouaf          ###   ########.fr       */
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
	int				index;
	struct s_lst	*next;
}					t_lst;

// T_LST
t_lst   		*ft_newlst(int content);
void			ft_lstadd_front(t_lst **stack,t_lst *list);
t_lst			*ft_lstlast(t_lst *stack);
void			ft_lstadd_back(t_lst **stack, t_lst *liist);
int				ft_lstsize(t_lst *stack);
void			printtlst(t_lst *stack);
void			index_stack(t_lst **stack);

void			simple_sort(t_lst **stacka, t_lst **stackb);
void			sort_5(t_lst **stacka, t_lst **stackb);
void			sort(t_lst **stacka, t_lst **stackb);

// LIBFT
int				ft_isdigit(int c);
long			ft_atoi(const char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			**ft_split(char const *s, char c);
// *INSTRUCTIONS*
// SWAP
int				swap(t_lst **stack);
int				sa(t_lst **stack);
int				sb(t_lst **stack);
int				ss(t_lst **stacka, t_lst **stackb);
//PUSH
// int				push(t_lst **stack, int content);
int				pa(t_lst **stacka, t_lst **stackb);
int				pb(t_lst **stacka, t_lst **stackb);
// ROTATE
int				reverserotate(t_lst **stack);
int				ra(t_lst **stack);
int				rb(t_lst **stack);
int				rr(t_lst **stacka, t_lst **stackb);
// REVERSE
int				reverse(t_lst **stack);
int				rra(t_lst **stack);
int				rrb(t_lst **stack);
int				rrr(t_lst **stacka, t_lst **stackb);
// UTILS
int				ft_error(char *msg);
void			ft_free(char **str);
int				is_sorted(t_lst **stack);
int				get_distance(t_lst **stack, int index);
void			free_stack(t_lst **stack);

// CHECKS ARGS
int				ft_check_args(int argc, char **argv);

#endif
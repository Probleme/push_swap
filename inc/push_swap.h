/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:24 by ataouaf           #+#    #+#             */
/*   Updated: 2023/02/27 20:31:12 by ataouaf          ###   ########.fr       */
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

t_lst			*ft_newlst(int content);
void			ft_lstadd_front(t_lst **stack, t_lst *list);
t_lst			*ft_lstlast(t_lst *stack);
void			ft_lstadd_back(t_lst **stack, t_lst *liist);
int				ft_lstsize(t_lst *stack);
void			index_stack(t_lst **stack);
int				istop(t_lst *head, t_lst *node);
int				check_error(char **argv);

void			simple_sort(t_lst **stacka, t_lst **stackb);
void			sort_5(t_lst **stacka, t_lst **stackb);
void			sort_100(t_lst **stacka, t_lst **stackb);
void			sort_500(t_lst **stacka, t_lst **stackb);

long			ft_atoi(char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strjoin1(char *s1, char *s2);
char			**ft_split(char const *s, char c);
size_t			ft_strlen(const char *s);

int				sa(t_lst **stack);
int				sb(t_lst **stack);
int				ss(t_lst **stacka, t_lst **stackb);

int				pa(t_lst **stacka, t_lst **stackb);
int				pb(t_lst **stacka, t_lst **stackb);

int				ra(t_lst **stack);
int				rb(t_lst **stack);
int				rr(t_lst **stacka, t_lst **stackb);

int				rra(t_lst **stack);
int				rrb(t_lst **stack);
int				rrr(t_lst **stacka, t_lst **stackb);

int				ft_error(char *msg);
void			ft_free(char **str);
int				is_sorted(t_lst **stack);
int				get_distance(t_lst **stack, int index);

char			**join_args(int argc, char **argv);

#endif
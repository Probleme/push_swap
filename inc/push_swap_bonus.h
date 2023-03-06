/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:39:32 by ataouaf           #+#    #+#             */
/*   Updated: 2023/03/06 22:59:57 by ataouaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}					t_lst;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int				ft_strcmp(const char *s1, const char *s2);
char			*get_next_line(int fd, char **line);
char			*ft_read_and_save(int fd, char *save);
char			*ft_save(char *save);
char			*ft_get_line(char *save);
size_t			ft_strlen(char *str);
char			*ft_strchr(char *s, int c);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strjoin1(char *s1, char *s2);

int				push(t_lst **stacka, t_lst **stackb);

int				rotate(t_lst **stack);
int				rr(t_lst **stacka, t_lst **stackb);

int				reverserotate(t_lst **head);
int				rrr(t_lst **stacka, t_lst **stackb);

int				swap(t_lst **stack);
int				ss(t_lst **stacka, t_lst **stackb);

t_lst			*ft_newlst(int content);
int				ft_lstsize(t_lst *stack);
t_lst			*ft_lstlast(t_lst *stack);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
int				ft_error(char *msg);
long			ft_atoi(const char *str);
int				is_sorted(t_lst **stack);
void			ft_free(char **str);
void			ft_lstadd_back(t_lst **stack, t_lst *new_l);
char			**ft_split(char const *s, char c);
char			**join_args(int argc, char **argv);
int				check_error(char **argv);
int				ft_isdigit(int c);
#endif 
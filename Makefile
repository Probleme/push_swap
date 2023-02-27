# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataouaf <ataouaf@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/21 00:17:57 by ataouaf           #+#    #+#              #
#    Updated: 2023/02/27 03:13:02 by ataouaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJECTS = ./obj
OBJECTSBONUS = ./obj_bonus
SOURCESBONUS = ./bonus
INCLUDES = ./inc
SOURCES = ./src

NAME = push_swap
CHECKER = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = $(wildcard $(SOURCES)/*.c)
SRCS_CHECKER = $(wildcard $(SOURCESBONUS)/*.c)

OBJS = 	$(addprefix $(OBJECTS)/, $(notdir $(SRCS:.c=.o)))
OBJS_CHECKER = $(addprefix $(OBJECTSBONUS)/, $(notdir $(SRCS_CHECKER:.c=.o)))

all : $(NAME)

bonus : $(CHECKER)

${OBJECTS}/%.o : ${SOURCES}/%.c ${INCLUDES}/push_swap.h
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

${OBJECTSBONUS}/%.o : ${SOURCESBONUS}/%.c ${INCLUDES}/push_swap_bonus.h
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(CHECKER) : $(OBJS_CHECKER)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	$(RM) $(OBJECTS) $(OBJECTSBONUS)

fclean : clean
	$(RM) $(NAME) $(CHECKER)

re: fclean all

.PHONY : all clean fclean re
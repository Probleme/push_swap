OBJECTS = ./obj
INCLUDES = ./inc
SOURCES = ./src

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = 	push_swap.c index.c check_args.c\
		ft_atoi.c ft_isdigit.c ft_putchar_fd.c ft_split.c t_list.c utils.c\
		simple_sort.c sort.c\
		push.c rotate.c reverse.c swap.c\

OBJS = 	$(addprefix $(OBJECTS)/, $(SRCS:.c=.o))

all : $(NAME)

${OBJECTS}/%.o : ${SOURCES}/%.c ${INCLUDES}/push_swap.h
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	$(RM) $(OBJECTS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
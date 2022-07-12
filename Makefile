# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abartell <abartell@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 15:29:58 by abartell          #+#    #+#              #
#    Updated: 2022/07/12 15:30:37 by abartell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	= libftprinft.a

#dir to the srcs for the programm
SRC_DIR	= ./srcs

#srcs for printf
SRCS	=	ft_putchar.c \


#RM is a reference to a "make" variable
RM		= rm -f

#compiler
CC		= gcc

#using different flags for the compiler gcc
FLAGS	= -Wall -Wextra -Werror

#targeting all files
#% used as rule definitions
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

#implictig rules for compiling a c programm
#compiling with flags
#CFLAGS = extra flags for c compiler
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

#deleting all executable files and objects
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#targets that do not refer to files but are just actions
.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 04:44:07 by yrhiba            #+#    #+#              #
#    Updated: 2024/03/20 05:40:28 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####### yrhiba ##########
#########################

NAME = RPN

SRCS = main.cpp RPN.cpp

INCS = RPN.hpp

ODIR = objs/

OBJS = $(addprefix $(ODIR), $(SRCS:.cpp=.o))

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(ODIR)%.o : %.cpp $(INCS)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 15:02:15 by yrhiba            #+#    #+#              #
#    Updated: 2023/06/25 17:47:18 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRCS = main.cpp

INC = header.hpp

OBJS = $(addprefix objs/, $(SRCS:.cpp=.o))

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

CC = c++

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME)

objs/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf objs

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

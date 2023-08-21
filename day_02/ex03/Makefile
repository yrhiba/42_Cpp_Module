# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/26 22:57:39 by yrhiba            #+#    #+#              #
#    Updated: 2023/08/21 02:58:20 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRCS = Fixed.cpp Point.cpp bsp.cpp main.cpp

INC = Fixed.hpp Point.hpp

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

OBJS = $(addprefix objs/, $(SRCS:.cpp=.o))

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(STD) $(OBJS) -o $(NAME)

objs/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	c++ $(FLAGS) $(STD) -c $< -o $@

all : $(NAME)

clean :
	rm -rf objs

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re

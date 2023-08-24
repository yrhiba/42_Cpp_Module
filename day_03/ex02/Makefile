# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 01:34:20 by yrhiba            #+#    #+#              #
#    Updated: 2023/08/24 14:14:55 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

INC = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

$(NAME) : $(OBJS)
	g++ $(STD) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(INC)
	g++ $(STD) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

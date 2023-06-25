# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 07:02:09 by yrhiba            #+#    #+#              #
#    Updated: 2023/06/25 07:07:54 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

FLAGS = -Wall -Wextra -Werror

CC = c++

STD = -std=c++98

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp 

INC = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = $(addprefix objs/, $(SRC:.cpp=.o))

all : $(NAME) 

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(STD) $(OBJS) -o $(NAME) 

objs/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@ 

clean :
	rm -rf objs 

fclean : clean
	rm -rf $(NAME) 

re : fclean all 

.PHONY : all clean fclean re

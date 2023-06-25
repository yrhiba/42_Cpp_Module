# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 01:36:31 by yrhiba            #+#    #+#              #
#    Updated: 2023/06/25 01:46:46 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

INC = Zombie.hpp

OBJS = $(addprefix objs/, $(SRCS:.cpp=.o))

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJS)
	g++ $(FLAGS) $(OBJS) -o $(NAME)

objs/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	g++ $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf objs

fclean : clean
	rm -rf objs

re : fclean all

.PHONY : all clean fclean re

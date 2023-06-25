# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 17:49:08 by yrhiba            #+#    #+#              #
#    Updated: 2023/06/25 17:56:45 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main.cpp Harl.cpp

OBJS = $(addprefix objs/, $(SRCS:.cpp=.o))

INC = Harl.hpp

FLAGS = -Wall -Werror -Wextra

STD = -std=c++98

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(STD) $(OBJS) -o $(NAME)

objs/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
	g++ $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf objs

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

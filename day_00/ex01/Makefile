# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 23:19:45 by yrhiba            #+#    #+#              #
#    Updated: 2023/06/22 23:55:22 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = main.cpp $(addprefix class/, Phonebook.cpp Contact.cpp)

INCS = $(addprefix incs/, Phonebook.hpp Contact.hpp header.hpp)

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(addprefix objs/, $(SRCS:.cpp=.o))

$(NAME) : $(OBJS)
	g++	$(FLAGS) $(OBJS) -o $(NAME)

objs/%.o : %.cpp $(INCS)
	@mkdir -p $(dir $@)
	g++ $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf objs

fclean : clean
	rm -rf $(NAME)

.PHONY : all clean fclean re

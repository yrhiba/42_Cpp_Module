# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 13:20:40 by yrhiba            #+#    #+#              #
#    Updated: 2023/08/28 14:35:36 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS =	main.cpp Animal.cpp Dog.cpp Cat.cpp \
		WrongAnimal.cpp WrongCat.cpp

INCS =	header.hpp Animal.hpp Dog.hpp Cat.hpp \
		WrongAnimal.hpp WrongCat.hpp

ODIR = objs/

OBJS = $(addprefix $(ODIR), $(SRCS:.cpp=.o))

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

$(NAME) : $(OBJS)
	g++ $(STD) $(FLAGS) $(OBJS) -o $(NAME)

$(ODIR)%.o : %.cpp $(INCS)
	@mkdir -p $(dir $@)
	g++ $(STD) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

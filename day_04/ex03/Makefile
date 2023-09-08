# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 16:02:22 by yrhiba            #+#    #+#              #
#    Updated: 2023/09/08 20:26:22 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS =	main.cpp AMateria.cpp \
		Cure.cpp Ice.cpp \
		Character.cpp

INCS =	AMateria.hpp \
		Cure.hpp Ice.hpp \
		ICharacter.hpp Character.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

ODIR = objs/

OBJS = $(addprefix $(ODIR), $(SRCS:.cpp=.o))

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

$(ODIR)%.o : %.cpp $(INCS)
	@mkdir -p $(dir $@)
	c++ $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

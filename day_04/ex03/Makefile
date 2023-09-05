# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 16:02:22 by yrhiba            #+#    #+#              #
#    Updated: 2023/08/30 16:19:13 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS = main.cpp

INCS = header.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

ODIR = objs/

OBJS = $(addprefix $(ODIR), $(SRCS:.cpp=.o))

$(NAME) : $(OBJS)
	g++ $(FLAGS) $(OBJS) -o $(NAME)

$(ODIR)%.o : %.cpp $(INCS)
	@mkdir -p $(dir $@)
	g++ $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

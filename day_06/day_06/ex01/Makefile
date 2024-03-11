# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 03:16:13 by yrhiba            #+#    #+#              #
#    Updated: 2024/03/11 03:18:48 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####### yrhiba ##########
#########################

NAME = serialize

SRCS =	main.cpp Serializer.cpp

INCS =	Data.hpp \
		Serializer.hpp

ODIR = objs/

OBJS = $(addprefix $(ODIR), $(SRCS:.cpp=.o))

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(ODIR)%.o : %.cpp $(INCS)
	mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(ODIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
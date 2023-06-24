# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 23:19:45 by yrhiba            #+#    #+#              #
#    Updated: 2023/06/23 02:45:21 by yrhiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = main.cpp $(addprefix class/, PhoneBook.cpp Contact.cpp)

INCS = $(addprefix incs/, PhoneBook.hpp Contact.hpp header.hpp)

FLAGS = -Wall -Wextra -Werror -std=c++98

DOBJS = objs/

OBJS = $(addprefix $(DOBJS), $(SRCS:.cpp=.o))

$(NAME) : $(OBJS)
	g++ $(FLAGS) $(OBJS) -o $(NAME)

$(DOBJS)%.o : %.cpp $(INCS)
	@mkdir -p $(dir $@)
	g++ $(FLAGS) -c $< -o $@ -I . -I incs

all : $(NAME)

clean :
	rm -rf objs

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

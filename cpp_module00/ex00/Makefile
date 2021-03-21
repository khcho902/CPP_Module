# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 02:09:13 by kycho             #+#    #+#              #
#    Updated: 2021/03/22 02:24:09 by kycho            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror

RM = rm -rf

.SUFFIXES: .cpp.o
.PHONY : all clean fclean re

.cpp.o :
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

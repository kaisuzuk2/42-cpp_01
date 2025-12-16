# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaisuzuk <kaisuzuk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 08:12:46 by kaisuzuk          #+#    #+#              #
#    Updated: 2025/12/17 08:19:37 by kaisuzuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie
CXX		=	c++
FLAG	=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

SRCS	=	Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp 
OBJS	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) -o $(NAME) $(FLAG) main.cpp $(OBJS)
	
%.o: %.cpp
	$(CXX) $(FLAG) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re 

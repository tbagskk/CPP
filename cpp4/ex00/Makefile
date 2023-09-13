# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcherqui <gcherqui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 13:08:46 by gcherqui          #+#    #+#              #
#    Updated: 2023/09/13 20:58:48 by gcherqui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




#//= Colors =//#
BOLD			:=	\033[1m
BLACK			:=	\033[30;1m
RED				:=	\033[31;1m
GREEN			:=	\033[32;1m
YELLOW			:=	\033[33;1m
BLUE			:=	\033[34;1m
MAGENTA			:=	\033[35;1m
CYAN			:=	\033[36;1m
WHITE			:=	\033[37;1m
RESET			:=	\033[0m

#//= Variables =//#
CC				:=	c++
NAME			:=	Animal
PROJECT_NAME	:=	CPP04
SRCS			:=	main.cpp \
					Animal.cpp \
					Cat.cpp \
					Dog.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp




INCLUDES		:=	-I includes
FLAGS			:=	-Wall -Wextra -Werror -std=c++98
OBJS			:=	${SRCS:.cpp=.o}
SOMETHING		:=	0

#//= Main compiling rules =//#

all: startall ${NAME} endall

${NAME}: ${OBJS}
	@$(CC) -o $(NAME) $(OBJS) $(INCLUDES)

.cpp.o:
	@${CC} ${FLAGS} -c $< -o ${<:.cpp=.o} ${INCLUDES} &&  printf "$(MAGENTA)$(PROJECT_NAME)$(RESET)$(BOLD) Compiling: $(notdir $<) \n$(RESET)"
	@$(eval SOMETHING = 1)

#//= Cleaning rules =//#

clean:
	@rm -f ${OBJS} && printf "$(GREEN)Cleaning $(PROJECT_NAME) OBJS...\n$(RESET)"
	@printf "$(YELLOW)Finished cleaning !\n$(RESET)"
	@printf "$(YELLOW)--------------------\n$(RESET)"

fclean: clean # cleaning rule
	@rm -f ${NAME} && printf "$(GREEN)Cleaning $(PROJECT_NAME) $(NAME)...\n$(RESET)"
	@printf "$(YELLOW)Finished cleaning everything !\n$(RESET)"
	@printf "$(YELLOW)--------------------\n$(RESET)"

#//= Beautification rules =//#

startall:
	@printf "$(BOLD)--------------------\n$(RESET)"
	@printf "$(MAGENTA)Starting doing everything\n$(RESET)"
	@printf "$(BOLD)--------------------\n$(RESET)"

endall:
	@if [ $(SOMETHING) = 1 ]; then printf "$(BOLD)Done compiling $(MAGENTA)e$(CYAN)v$(GREEN)e$(YELLOW)r$(BLUE)y$(RED)t$(MAGENTA)h$(CYAN)i$(GREEN)n$(YELLOW)g !\n$(RESET)$(BOLD)--------------------\n$(RESET)$(MAGENTA)Done making $(PROJECT_NAME)!\n$(RESET)"; fi
	@if [ $(SOMETHING) = 0 ]; then printf "$(MAGENTA)Nothing to do !\n$(RESET)"; fi

re:	fclean all

.PHONY: all clean fclean re start end startall endall

NAME = megaphone

SRCS =	main.cpp \
		newZombie.cpp \
		randomChumpk.cpp \
		Zombie.cpp
		
		
OBJS =	${SRCS:.c=.o}

GCC = g++ -Wall -Wextra -Werror -std=c++98 -pedantic

$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME) 

all: $(NAME)

clean:
	rm -rf ${OBJS}

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
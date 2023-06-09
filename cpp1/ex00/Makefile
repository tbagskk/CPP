NAME = zombie

SRCS =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp
		
		
OBJS =	${SRCS:.c=.o}

GCC = g++ -Wall -Wextra -Werror -std=c++98 -pedantic

$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME) 

all: $(NAME)

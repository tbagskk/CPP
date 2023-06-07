NAME = megaphone

SRCS =	megaphone.cpp 
		
		
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
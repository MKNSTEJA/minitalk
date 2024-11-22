CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: 
	@$(CC) $(CFLAGS) server.c ft_putnbr.c ft_putstr.c ft_atoi.c -o server
	@$(CC) $(CFLAGS) client.c ft_putnbr.c ft_putstr.c ft_atoi.c -o client

clean:
	@rm -f server.out client.out

fclean: clean

re: fclean all
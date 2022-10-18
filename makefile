NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strtrim.c
OBJ = ${SRC:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: compile
	@ar cr $(NAME) $(OBJ)
compile :
	@$(CC) -c $(SRC) $(FLAGS) 
clean:
	@rm -rf *.o
fclean:	clean
	@rm $(NAME)
re: clean all
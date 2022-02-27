CFLAGS	+=		-Wall -Wextra -Werror
CFLAGS	+=		-I./includes/

NAME = ft_printf.a

SRCS = ./libft/ft_memset.c\
		./libft/ft_bzero.c\
		./libft/ft_memcpy.c\
		./libft/ft_memccpy.c\
		./libft/ft_memmove.c\
		./libft/ft_memchr.c\
		./libft/ft_memcmp.c\
		./libft/ft_strlen.c\
		./libft/ft_strdup.c\
		./libft/ft_strchr.c\
		./libft/ft_strrchr.c\
		./libft/ft_strnstr.c\
		./libft/ft_strncmp.c\
		./libft/ft_atoi.c\
		./libft/ft_isalpha.c\
		./libft/ft_isdigit.c\
		./libft/ft_isalnum.c\
		./libft/ft_isascii.c\
		./libft/ft_isprint.c\
		./libft/ft_toupper.c\
		./libft/ft_tolower.c\
		./libft/ft_strmapi.c\
		./libft/ft_strjoin.c\
		./libft/ft_strtrim.c\
		./libft/ft_itoa.c\
		./libft/ft_putchar_fd.c\
		./libft/ft_putstr_fd.c\
		./libft/ft_putnbr_fd.c\
		./libft/ft_lstnew.c\
		./libft/ft_lstdelone.c\
		./libft/ft_lstiter.c\
		./libft/ft_lstmap.c\


OBJS = 	./libft/ft_memset.o\
		./libft/ft_bzero.o\
		./libft/ft_memcpy.o\
		./libft/ft_memmove.o\
		./libft/ft_memccpy.o\
		./libft/ft_memchr.o\
		./libft/ft_memcmp.o\
		./libft/ft_strlen.o\
		./libft/ft_strdup.o\
		./libft/ft_strchr.o\
		./libft/ft_strrchr.o\
		./libft/ft_strnstr.o\
		./libft/ft_strncmp.o\
		./libft/ft_atoi.o\
		./libft/ft_isalpha.o\
		./libft/ft_isdigit.o\
		./libft/ft_isalnum.o\
		./libft/ft_isascii.o\
		./libft/ft_isprint.o\
		./libft/ft_toupper.o\
		./libft/ft_tolower.o\
		./libft/ft_strmapi.o\
		./libft/ft_strjoin.o\
		./libft/ft_strtrim.o\
		./libft/ft_itoa.o\
		./libft/ft_putnbr_fd.o\
		./libft/ft_putchar_fd.o\
		./libft/ft_putstr_fd.o\
		./libft/ft_lstnew.o\
		./libft/ft_lstdelone.o\
		./libft/ft_lstiter.o\
		./libft/ft_lstmap.o\

all: $(NAME)

$(NAME): $(SRCS)
	gcc -c $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY	:				all clean fclean re

NAME		=	libftprintf.a

INCLUDE		=	ft_print.h

SRCS		=	ft_printf.c \
				helpers.c   \

OBJS		=	$(SRCS:.c=.o)
LIBC		=	ar rcs
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDE)

$(NAME):	 $(OBJS) 
			$(LIBC) $(NAME) $(OBJS)

all:		$(NAME)

bonus:		all

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all


.PHONY:		all clean fclean norm re bonus

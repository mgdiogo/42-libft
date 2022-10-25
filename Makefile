NAME	=		libft.a

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror

RM		=		rm -f

SRC 	=		ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_strchr.c ft_strlen.c ft_strlcpy.c ft_tolower.c ft_toupper.c

BONUS	=		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ		=		$(SRC:.c=.o)

BOBJ	=		$(BONUS:.c=.o)

all:			$(NAME)

bonus:			$(BOBJ)
		ar rcs	$(NAME) $(BOBJ)

$(NAME):		$(OBJ)
		ar rcs	$(NAME) $(OBJ)

clean:
				$(RM) $(OBJ) $(BOBJ)

fclean: clean
				$(RM) $(NAME)

re:		fclean	$(NAME)

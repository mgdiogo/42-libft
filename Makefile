NAME	=		libft.a

CC		=		cc

CFLAGS	=		-Wall -Wextra -Werror

RM		=		rm -f

SRC 	=		ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_strchr.c ft_strlen.c ft_strlcpy.c ft_tolower.c ft_toupper.c ft_strlcat.c\
ft_strnstr.c ft_strrchr.c ft_memset.c ft_strncmp.c ft_bzero.c ft_memcpy.c ft_memmove.c\
ft_strdup.c ft_memcmp.c ft_memchr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c

BONUS	=		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ		=		$(SRC:.c=.o)

BOBJ	=		$(BONUS:.c=.o)

all:			$(NAME)

bonus:			$(BOBJ)
		ar rcs	$(NAME) $(BOBJ)

so:
		$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
		gcc -nostartfiles -shared -o libft.so $(OBJ)

$(NAME):		$(OBJ)
		ar rcs	$(NAME) $(OBJ)

clean:
				$(RM) $(OBJ) $(BOBJ)

fclean: clean
				$(RM) $(NAME)

re:		fclean	$(NAME)

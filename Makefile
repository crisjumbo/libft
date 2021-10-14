SRC =ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_split.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c
SRCBONUS = ft_lstnew.c \
		   ft_lstadd_front.c \
		   ft_lstsize.c \
		   ft_lstlast.c \
		   ft_lstadd_back.c \
		   ft_lstdelone.c \
		   ft_lstclear.c \
		   ft_lstiter.c \
		   ft_lstmap.c
CFLAGS = -Wall -Werror -Wextra
OBJECTS = $(SRC:.c=.o) 
OBJECTSBONUS = $(SRCBONUS:.c=.o)
NAME = libft.a
DEPS = libft.h
AR = ar rcs
RM = rm -f
CC = gcc

all: $(NAME)

$(NAME): $(OBJECTS) $(DEPS) 
	@$(AR) $(NAME) $(OBJECTS)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

bonus: $(OBJECTSBONUS)
	@$(AR) $(NAME) $(OBJECTSBONUS)

re: fclean all

.PHONY = all clean fclean re

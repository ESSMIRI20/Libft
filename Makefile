GREEN := \33[0;32m
END_COLOR := \033[0m

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

files = ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c \
	ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
	ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c \
	ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c \
	ft_isalpha.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c \
	ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c

f_bonus = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
	ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c \
	ft_lstnew_bonus.c

TOUT_FILES = ${files} ${f_bonus}

OBJCT = $(files:.c=.o)

OBJBONUS = $(TOUT_FILES:.c=.o)

all: $(NAME)

$(NAME) : ${OBJCT}
	ar -rsc $(NAME) ${OBJCT}

bonus : ${OBJBONUS}
	ar -rsc $(NAME) ${OBJBONUS}

%.o: %.c
	@echo "$(GREEN)****>>>Compiling<<<****$(END_COLOR) $@"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJBONUS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus

NAME = libft.a

SRC_FOLDER = srcs

INCLUDE_DIR = includes

SRC_FILES =  ft_atoi.c\
                ft_split.c\
                ft_bzero.c\
                ft_strchr.c\
                ft_calloc.c\
                ft_strdup.c\
                ft_isdigit.c\
                ft_strjoin.c\
                ft_isalpha.c\
                ft_memccpy.c\
                ft_strlcat.c\
                ft_isascii.c\
                ft_memchr.c\
                ft_strlcpy.c \
                ft_isalnum.c\
                ft_memcmp.c\
                ft_strlen.c\
                ft_isprint.c\
                ft_memcpy.c\
                ft_strmapi.c\
                ft_itoa.c\
                ft_memmove.c\
                ft_strncmp.c\
                ft_memset.c\
                ft_strnstr.c\
                ft_putchar_fd.c\
                ft_strtrim.c\
                ft_putendl_fd.c\
                ft_substr.c\
                ft_putnbr_fd.c\
                ft_tolower.c\
                ft_putstr_fd.c\
                ft_toupper.c\
                ft_strrchr.c\
				ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c\
				ft_strnew.c\
				ft_memalloc.c\
				ft_realloc.c\
				ft_split2.c\
				ft_strcmp.c\
				ft_strndup.c\
				divergents/ft_strlen2.c\
				divergents/ft_putstr2.c\
				divergents/ft_putstr_fd2.c\
				divergents/ft_index.c\
				divergents/ft_strendswithc.c\
				divergents/ft_strjoin2.c\
				divergents/ft_freestrarr.c\

SRC = $(addprefix $(SRC_FOLDER)/, $(SRC_FILES))

FLAGS = -Wall -Werror -Wextra

CC = gcc

SRC_O = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_O)
		ar rcs $(NAME) $(SRC_O)

%.o: %.c
	$(CC) ${FLAGS} -I ${INCLUDE_DIR} -o $@ -c $<

clean:
	rm -rf  $(SRC_O)

fclean: clean
		rm -rf $(NAME)

re: 	fclean all clean

cleanall: 
	rm *.o *.a a.out

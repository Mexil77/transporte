SRCS	= main.c ft_substr.c ft_strlen.c ft_strjoin.c ft_strnstr.c ft_split.c
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean
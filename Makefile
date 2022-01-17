#-------------------------------#
#        Regarding Path			#
#-------------------------------#
TARGET_EXEC := libft.a

SRC_DIR := ./

BUILD_DIR := ./.build

SRCS := ${shell find ${SRC_DIR} -iname '*.c' ! -iname '*lst*' }

OBJS := ${SRCS:%=$(BUILD_DIR)/%.o}

RM := rm -rf

NAME := ${BUILD_DIR}/${TARGET_EXEC}
#-------------------------------#
#     Regarding compilation	    #
#-------------------------------#
CC := gcc
CFLAGS := -Wextra -Wall -Werror

${NAME} : ${OBJS}
	${CC} ${OBJS} -o $@
	ar rcs $@ $^

${BUILD_DIR}/%.c.o : %.c
	mkdir -p ${dir $@}
	${CC} ${CFLAGS} -c $< -o $@

all : ${NAME}

clean :
	${RM} ${BUILD_DIR}

fclean : clean

re : fclean all

.PHONY : all clean fclean re

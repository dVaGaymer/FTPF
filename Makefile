# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/07 17:46:30 by alopez-g          #+#    #+#              #
#    Updated: 2020/07/28 05:02:34 by alopez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTPF_DIR	=	srcs/
LIBFT_DIR	=	srcs/Libft/

FTPF_INC	=	includes/
LIBFT_INC	=	srcs/Libft/includes/

SRCS		=	${FTPF_DIR}ft_printf.c ${FTPF_DIR}struct_utils.c ${FTPF_DIR}ft_printf_utils.c \
				${FTPF_DIR}c_flags.c ${FTPF_DIR}d_flags.c ${FTPF_DIR}u_flags.c ${FTPF_DIR}s_flags.c ${FTPF_DIR}p_flags.c \
				${FTPF_DIR}apply_utils.c
OBJS		= 	$(patsubst %.c, %.o, ${SRCS})

MAKE	=	make

LIBFT_A		=	${LIBFT_DIR}libft.a
NAME		=	libftprintf.a

%.o : %.c
				clang -Wall -Werror -Wextra -I $(FTPF_INC) -I $(LIBFT_INC) -c $< -o $@

${NAME}:		${OBJS} ${LIBFT_A}
				make -s -C ${LIBFT_DIR}
				cp ${LIBFT_A} ${NAME}
				ar -rc ${NAME} ${OBJS}
				ar -s ${NAME}
				echo "\033[1;32mCOMPILED\033[0m"

${LIBFT_A}:
				cd ${LIBFT_DIR} && $(MAKE)
				
all:			${NAME}
clean:
				make -s -C ${LIBFT_DIR} clean
				rm -f ${OBJS} ${OBJS_BONUS}
fclean:			clean
				make -s -C ${LIBFT_DIR} fclean
				rm -f ${NAME}
re:				fclean all
.PHONY:			all clean fclean re bonus
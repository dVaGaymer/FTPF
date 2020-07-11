# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/07 17:46:30 by alopez-g          #+#    #+#              #
#    Updated: 2020/07/11 18:10:15 by alopez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTPF_DIR	=	srcs/
LIBFT_DIR	=	srcs/Libft/

SRCS		=	${FTPF_DIR}ft_printf.c ${FTPF_DIR}struct_utils.c ${FTPF_DIR}ft_printf_utils.c \
				${FTPF_DIR}c_flags.c ${FTPF_DIR}d_flags.c ${FTPF_DIR}s_flags.c ${FTPF_DIR}p_flags.c \
				${FTPF_DIR}apply_utils.c
OBJS		= 	$(patsubst %.c, %.o, ${SRCS})

MAKE	=	make

LIBFT_A		=	${LIBFT_DIR}libft.a
NAME		=	ft_printf.a

${NAME}:		${OBJS} ${LIBFT_A}
				make -s -C ${LIBFT_DIR}
				cp ${LIBFT_A} ${NAME}
				ar -rc ${NAME} ${OBJS}
				ar -s ${NAME}
				echo "\033[1;32mCOMPILED"

${LIBFT_A}:
				cd ${LIBFT_DIR} && $(MAKE)
				
all:			${NAME}
clean:
				make -s -C ${LIBFT_DIR} clean
				rm -f ${OBJS} ${OBJS_BONUS}
fclean:			clean
				make -s -C ${LIBFT_DIR} clean
				rm -f ${NAME}
re:				fclean all
.PHONY:			all clean fclean re bonus
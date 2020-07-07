# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/07 17:46:30 by alopez-g          #+#    #+#              #
#    Updated: 2020/07/08 00:29:44 by alopez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FTPF_DIR	=	srcs/
LIBFT_DIR	=	srcs/Libft/

SRCS		=	${FTPF_DIR}ft_printf.c ${FTPF_DIR}flag_struct_utils.c ${FTPF_DIR}ft_printf_utils.c \
				${FTPF_DIR}c_flags.c ${FTPF_DIR}d_flags.c ${FTPF_DIR}s_flags.c
OBJS		= 	$(patsubst %.c, %.o, ${SRCS})

MAKE	=	make

LIBFT_A		=	${LIBFT_DIR}libft.a
NAME		=	ft_printf.a

${NAME}:		${OBJS} ${LIBFT_A}
				ar -rc ${NAME} ${OBJS} ${LIBFT_A}
				ar -s ${NAME}

${LIBFT_A}:
				cd ${LIBFT_DIR} && $(MAKE)
				
all:			${NAME}
clean:
				rm -f ${OBJS} ${OBJS_BONUS}
fclean:			clean
				rm -f ${NAME}
re:				fclean bonus
.PHONY:			all clean fclean re bonus
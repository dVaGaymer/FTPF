LIB		=	libftprintf.a

all:	main.o
		@make -s -C ../
		@cp ../${LIB} .
		@gcc -w main.o ${LIB} -o a.out
clean:
				@make -s -C ../ clean
				@rm -f main.o
fclean:			clean
				@make -s -C ../ fclean
				@rm -f a.out
				@rm -f ${LIB}
re:				fclean all
%.o:			%.c
				@gcc -c $< -o $@

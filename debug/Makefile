all:	main.o
		@make -s -C ../
		@cp ../ft_printf.a .
		@gcc -w main.o ft_printf.a -o a.out
clean:
				@make -s -C ../ clean
				@rm -f main.o
fclean:			clean
				@make -s -C ../ clean
				@rm -f a.out
re:				fclean
				@make -s -C ../ re
%.o:			%.c
				@gcc -c $< -o $@
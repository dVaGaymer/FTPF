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
				@rm -f ft_printf.a
re:				fclean all
%.o:			%.c
				@gcc -c $< -o $@

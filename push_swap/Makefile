
NAME = push_swap

CHECKER_NAME = checker

LIST = ./main.c ./src/error_msg.c ./src/sort_func.c ./src/switch_funcs.c \
		./src/min_max.c ./src/sort_to_five.c ./src/new_str.c \
		./src/sort_six_plus.c ./src/free_list.c \
		./src/set_order.c ./src/parsing.c  ./src/norm.c\


FLAGS = -Wall -Wextra -Werror -I./includes -g


OBJ	= $(patsubst %.c,%.o,$(LIST))

all :
	@make -C ./bonus/
	@mv ./bonus/checker .
	@make bonus -C ./libft/
	@make -C ./libft/
	@make $(NAME)

$(NAME) : $(OBJ) ./libft/libft.a
	@gcc -o $(NAME) $(OBJ) ./libft/libft.a
	@echo "\033[90m[\033[32mSuccess\033[90m]"

%.o : %.c
	@gcc $(FLAGS)  -c $< -o $@

bonus : $(NAME)

clean :
	@make clean -C ./bonus/
	@make clean -C ./libft/
	@rm -f $(OBJ) $(OBJ_B)
	@echo "\033[90m[\033[33mClean\033[90m]"

fclean : clean
	@make fclean -C ./bonus/
	@make fclean -C ./libft/
	@rm -f checker
	@rm -f $(NAME)
	@echo "\033[90m[\033[31mDelete\033[90m]"

re : fclean all
	@echo "\033[90m[\033[35mRebuilded\033[90m]"

.PHONY : all clean fclean re

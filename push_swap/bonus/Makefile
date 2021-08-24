
NAME = checker

LIST = check_main.c ../src/parsing.c  ../src/switch_funcs.c ../src/min_max.c \
		../src/free_list.c ../src/error_msg.c ../gnl/get_next_line.c \
		 ../gnl/get_next_line_utils.c ../src/new_str.c	if_case.c\

FLAGS = -Wall -Wextra -Werror -I./includes -g

OBJ	= $(patsubst %.c,%.o,$(LIST))

all :
	@make bonus -C ../libft/
	@make -C ../libft/
	@make $(NAME)

$(NAME) : $(OBJ) ../libft/libft.a
	@gcc -o $(NAME) $(OBJ) ../libft/libft.a
	@echo "\033[90m[\033[32mChecker was created\033[90m]"

%.o : %.c
	@gcc $(FLAGS)  -c $< -o $@

bonus : $(NAME)

clean :
	@make clean -C ../libft/
	@rm -f $(OBJ)

fclean : clean
	@make fclean -C ../libft/
	@rm -f $(NAME)
	@echo "\033[90m[\033[31mChecker was Deleted\033[90m]"

re : fclean all

.PHONY : all clean fclean re

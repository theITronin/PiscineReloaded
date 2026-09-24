
NAME = ft_display_file

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_display_file.c

OBJS = $(SOURCES:.c=.o)


# RULE TO CREATE A LIBRARY
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	@echo "********************************"
	@echo "Compilation $(NAME) completed"
	@echo "********************************"

# $(NAME) is the dependence.
all: $(NAME)

# CREATOR OBJS RULE
%.o : %.c $(HEADERS)
	@echo "Compiling..."
	$(CC) $(CFLAGS) -c $< -o $@

# RULE: DELETE OBJECT FILES
clean:
	@echo "Deleting objects files (*.o)..."
	@rm -rf $(OBJS)

# RULE: DELETE OBJECT FILES AND LIBRARY
fclean: clean
	@echo "Deleting object files and library..."
	@rm -rf $(NAME)

# RULE: RECOMPILES ALL
re: fclean all
	@echo "Recompiling project..."

# PHONY TARGETS
.PHONY: all clean fclean re 
# Compilation phases:
# 1. Preprocessed
# 2. Compilation
# 3. Link

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

HEADERS = $(wildcard includes/*.h)

SOURCES = $(wildcard srcs/*.c ) 

OBJS = $(SOURCES:.c=.o)

# A ".a" is a static library, a file that resolves object dependencies.
# This file is used during the linking phase of compilation.
# RULE TO CREATE A LIBRARY
$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "********************************"
	@echo "Compilation $(NAME) completed"
	@echo "********************************"


# This is a rule, in this rule "all" is the objective.
# $(NAME) is the dependence.
all: $(NAME)

# An object file ".o" is the binary compiled from a ".c" file.
# It is created during the compilation phase.
# CREATOR OBJS RULE
%.o : %.c $(HEADERS)
	@echo "Compiling..."
	$(CC) $(CFLAGS) -c $< -o $@

# RULE: DELETE OBJECT FILES
clean:
	@echo "Deleting objects files (*.o)..."
	@rm -rf $(wildcard srcs/*.o)

# RULE: DELETE OBJECT FILES AND LIBRARY
fclean: clean
	@echo "Deleting object files and library..."
	@rm -rf $(NAME)

# RULE: RECOMPILES ALL
re: fclean all
	@echo "Recompiling project..."

# PHONY TARGETS
.PHONY: all clean fclean re 
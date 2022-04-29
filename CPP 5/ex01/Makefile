# COLORS #
GREEN = @echo "\033[0;32m"
BLUE = @echo "\033[0;34m" 
PURPLE = @echo "\033[0;35m"
CYAN = @echo "\033[0;36m"
RESET = "\033[1;0m"

# VARIABLES #
NAME = test
CC = clang++
INCLUDE = -std=c++98
CFLAGS = -Wall -Werror -Wextra

# PATHs #
SRC_PATH    = srcs
OBJ_PATH    = objects

# SOURCES #
SRC =  main.cpp Bureaucrat.cpp Form.cpp

# RULES #
all: $(NAME)

OBJ_NAME = $(SRC:%.cpp=%.o)

SRCS = $(addprefix $(SRC_PATH)/, $(SRC))

OBJS =  $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH) 2> /dev/null

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp | $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
            
$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

##RULES
$(MAKE): make

norminette:
	norminette $(SRCS)

clean:
	$(PURPLE) CLEANING OBJECTS $(RESET)
	rm -rf $(OBJ_PATH)
	
fclean: clean
	$(PURPLE) CLEANING DIRECTORY AND EXEC $(RESET)
	rm -rf $(NAME)
	rm -rf $(OBJ_PATH)

re: fclean all

PHONY.: all clean fclean re norminette
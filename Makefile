CC = cc -Wall -Werror -Wextra -pthread

NAME = codexian

SRC_DIR = ./src
CFILES = $(shell find $(SRC_DIR) -name "*.c")

OBJ_DIR = ./obj
OFILES = $(CFILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_SUB = $(sort $(dir $(OFILES)))

INCLUDE = ./include

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(OFILES) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_SUB)
	$(CC) -I$(INCLUDE) -c $< -o $@

$(OBJ_SUB):
	mkdir -p $(OBJ_SUB)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: clean all
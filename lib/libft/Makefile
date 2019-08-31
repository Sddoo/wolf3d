# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eloren-l <eloren-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/15 17:48:22 by eloren-l          #+#    #+#              #
#    Updated: 2019/08/31 15:24:08 by eloren-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# BASIC DIRECTORIES
SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj

# PATHS TO SRC SUBDIRECTORIES & NAMES OF SUBDIRECTORIES
SRC_SUBDIR = $(wildcard $(SRC_DIR)/*)
SUBDIR = $(SRC_SUBDIR:$(SRC_DIR)/%=%)

# PATHS TO C SOURCE FILES
SRC_PATH = $(foreach subdir,$(SRC_SUBDIR),$(wildcard $(subdir)/*.c))

# PATHS TO OBJ SUBDIRECTRIES, PATHS TO & NAMES OF OBJECTS
OBJ_SUBDIR = $(addprefix $(OBJ_DIR)/,$(SUBDIR))
OBJ_PATH = $(SRC_PATH:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# NAME OF LIBRARY TO COMPILE
NAME = libft.a

# COMPILATION RULES
CC = gcc
FLAGS = -Wall -Wextra -Werror


.PHONY: all clean fclean re

all: $(OBJ_SUBDIR) $(NAME)

$(NAME): $(OBJ_PATH)
	ar rc $@ $^
	ranlib $@

$(OBJ_SUBDIR):
	mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(FLAGS) -o $@ -c $< -I$(INC_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
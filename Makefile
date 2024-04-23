# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thopgood <thopgood@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 19:15:34 by thopgood          #+#    #+#              #
#    Updated: 2024/04/18 17:49:07 by thopgood         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libftprintf.a
CC 			= 	cc
CFLAGS 		= 	-Wall -Werror -Wextra
HEADER 		= 	ft_printf.h
LIBFT_DIR 	= 	./libft
QUIET_OUT	=	> /dev/null

SRC 		= 	ft_printf.c \
				ft_printf_utils.c \
				ft_printf_utils2.c

OBJ 		= 	$(SRC:.c=.o)

all: $(NAME)	

$(NAME): $(OBJ)
	@make --directory=$(LIBFT_DIR) $(QUIET_OUT)
	@cp $(LIBFT_DIR)/libft.a ./
	@mv libft.a $(NAME)
	@echo ""${BLUE}libft.a""${NC}Copied ""${GREEN}OK""$(NC)""
	@ar -rcs $(NAME) $(OBJ)
	@echo ""${BLUE}$(NAME)""${NC}Archived" "${GREEN}OK""$(NC)""

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@cd $(LIBFT_DIR) && make clean $(QUIET_OUT)
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFT_DIR) && make fclean $(QUIET_OUT)
	
re: fclean all

# Colours
WHITE	=	'\033[0;37m'
YELLOW	=	'\033[0;33m'
BLUE	=	'\033[0;34m'
GREEN	=	'\033[0;32m'
RED		=	'\033[0;31m'
NC		=	'\033[0m' # no colour

# 2>&1 # sends stderror to null too
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 17:19:17 by nmota-bu          #+#    #+#              #
#    Updated: 2023/12/23 20:53:11 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --silent	# Silence makefile [Commented by default]\n

# ═══ NAMES ═══════════════════════════════════════════════════════════════════#

NAME	=	harl

# ═══ COMPILATE ═══════════════════════════════════════════════════════════════#

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic-errors -fsanitize=address
CC		= c++
INC		= -I inc
RM		= rm -rf

# ═══ DIRECTORIES ═════════════════════════════════════════════════════════════#

SRC	=	$(wildcard src/*.cpp)
OBJS_D	=	objs
OBJ	=	$(SRC:src/%.cpp=$(OBJS_D)/%.o)

UNAME	:=	$(shell uname)

$(OBJS_D)/%.o:src/%.cpp
			@mkdir -p $(OBJS_D)
			$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(NAME):	$(OBJ)
			@printf "$(CYAN)Compiling $(MAGENTA)$(NAME)...$(RESET)\n"
			$(CC) $(CFLAGS) $(FSANIT) $(OBJ) -o $(NAME)
			@printf "$(DONE)DONE$(RESET)\n"

# test:		re
# 			@printf "$(CYAN)Testing $(MAGENTA)$(NAME)$(RESET)\n"
# 			@printf "$(CYAN)░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░$(RESET)\n\n"
# 			@./$(NAME) "ohhh Yeah, this is uppercase!!!"
# 			@printf "\n$(CYAN)░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░$(RESET)\n"
# 			@printf "$(CYAN)Finished Test...$(RESET)\n\n"
# 			@$(MAKE) show
# 			@$(MAKE) fclean

all:		$(NAME)

clean:
			$(RM) $(OBJS_D)
			@printf "$(DEL)Cleaning objs$(RESET)\n"

fclean: 	clean
			$(RM) $(NAME)
			@printf "$(DEL)Deleted Everything$(RESET)\n"

re: fclean all

show:
	@printf "$(GREEN)"
	@printf "UNAME	: $(MAGENTA)$(UNAME)$(GREEN)\n"
	@printf "NAME  	: $(MAGENTA)$(NAME)$(GREEN)\n"
	@printf "CC	: $(MAGENTA)$(CC)$(GREEN)\n"
	@printf "CFLAGS	: $(MAGENTA)$(CFLAGS)$(GREEN)\n"
	@printf "INCLUDES: $(MAGENTA)$(INC)$(GREEN)\n"
	@printf "SRC	: $(MAGENTA)$(SRC)$(GREEN)\n"
	@printf "OBJ	: $(MAGENTA)[$(OBJS_D)] ➟ $(OBJ)$(RESET)\n\n"

.PHONY: all test re

# ═══ COLORS ══════════════════════════════════════════════════════════════════#

RED			=\033[0;31m
GREEN		=\033[0;32m
YELLOW		=\033[0;33m
BLUE 		=\033[0;34m
MAGENTA		=\033[0;35m
ORANGE		=\033[38;5;214m
WHITE		=\033[0;37m
CYAN		=\033[1;36m
RESET		=\x1B[0m

DONE		=\x1B[42m\x1B[1;30m
DEL			=\x1B[41m\x1B[1m\x1B[37m
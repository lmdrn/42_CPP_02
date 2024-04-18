# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmedrano <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 17:47:44 by lmedrano          #+#    #+#              #
#    Updated: 2024/04/18 13:58:32 by lmedrano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLUE 		= \033[38;5;69m
ORANGE 		= \033[38;5;215m
GREEN 		= \033[38;5;82m
RESET 		= \033[0m

SRCS 		= Fixed.cpp main.cpp

OBJS 		= ${SRCS:.c=.o}

NAME		= fixed

CC 			= c++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

CFLAGS		+= -fsanitize=thread -g3 

RM		= rm -rf

all:		header $(NAME)

${NAME}:	${OBJS}
			@echo "$(RESET)$(ORANGE)ASSEMBLING $(NAME)$(RESET)"
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			@echo "$(RESET)$(GREEN)$(NAME) HAS ASSEMBLED ✓$(RESET)"

header:	
			@echo "$(BLUE)                           $(RESET)"
			@echo "$(BLUE)       Welcome mon p'tit ! $(RESET)"
			@echo "$(BLUE)        ___  _____ ___  ___      _        $(RESET)"
			@echo "$(BLUE)       /   |/ __  \|  \/  |     | |        $(RESET)"
			@echo "$(BLUE)      / /| |\`' / /'| .  . | __ _| | _____  $(RESET)"
			@echo "$(BLUE)     / /_| |  / /  | |\/| |/ _\` | |/ / _ \\ $(RESET)"
			@echo "$(BLUE)     \___  |./ /___| |  | | (_| |   <  __/ $(RESET)"
			@echo "$(BLUE)         |_/\_____/\_|  |_/\__,_|_|\_\___|......I'm so badass wesh $(RESET)"
			@echo "$(BLUE)                           $(RESET)"

clean:		
			@echo "$(RESET)$(ORANGE)I'M CLEANING OUT MY CLOSET...$(RESET)"
			@echo "$(RESET)$(GREEN)CLEANED ✓$(RESET)"

fclean:		clean
			@echo "$(RESET)$(ORANGE)ONE MORE TIME...$(RESET)"
			${RM} ${NAME}
			# ${RM} ${OBJS} ${NAME}
			@echo "$(RESET)$(GREEN)ALL CLEANED ✓✓$(RESET)"

re:			fclean all

.PHONY:		all clean fclean re


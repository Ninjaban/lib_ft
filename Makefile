#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcarra <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 13:41:38 by jcarra            #+#    #+#              #
#    Updated: 2016/11/07 08:52:50 by jcarra           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME			=	libft.a

SRC_PART1		=	ft_bzero.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_memcmp.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strlen.c \
					ft_strdup.c \
					ft_strcat.c \
					ft_strncat.c \
					ft_strlcat.c \
					ft_strcpy.c \
					ft_atoi.c \
					ft_strncpy.c \
					ft_strstr.c \
					ft_strnstr.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isprint.c \
					ft_isascii.c

SRC_PART2		=	ft_memalloc.c \
					ft_memdel.c \
					ft_strclr.c \
					ft_strdel.c \
					ft_strequ.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strnequ.c \
					ft_strnew.c \
					ft_strsub.c \
					ft_strtrim.c \
					ft_putchar.c \
					ft_putstr.c \
					ft_putnbr.c \
					ft_putendl.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putnbr_fd.c \
					ft_putendl_fd.c \
					ft_strsplit.c \
					ft_itoa.c \
					ft_revnbr.c \
					ft_revstr.c

SRC_BONUS		=	ft_lstadd.c \
					ft_lstdel.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstmap.c \
					ft_lstnew.c

DIRSRC_PART1	=	Part\ 1/
DIRSRC_PART2	=	Part\ 2/
DIRSRC_BONUS	=	Bonus/
DIRINC			=	include/

PART1			=	$(SRC_PART1:%=$(DIRSRC_PART1)%)
PART2			=	$(SRC_PART2:%=$(DIRSRC_PART2)%)
BONUS			=	$(SRC_BONUS:%=$(DIRSRC_BONUS)%)
OBJS_PART1		=	$(SRC_PART1:.c=.o)
OBJS_PART2		=	$(SRC_PART2:.c=.o)
OBJS_BONUS		=	$(SRC_BONUS:.c=.o)

CFLAGS			=	-Wall -Wextra -Werror -I./$(DIRINC)

CC				=	gcc
LIB				=	ar rc
RM				=	rm -f
ECHO			=	printf


all		:		$(NAME)

$(NAME)	:
				@$(CC) $(CFLAGS) -c $(PART1) $(PART2) $(BONUS)
				@$(LIB) $(NAME) $(OBJS_PART1) $(OBJS_PART2) $(OBJS_BONUS)
				@$(ECHO) '\033[32m> Compiled\n\033[0m'

clean	:
				@$(RM) $(OBJS_PART1) $(OBJS_PART2) $(OBJS_BONUS)
				@$(ECHO) '\033[31m> Directory cleaned\n\033[0m'

fclean	:		clean
				@$(RM) $(NAME)
				@$(ECHO) '\033[31m> Remove executable\n\033[0m'

re		:		fclean all

.PHONY	:		all clean fclean re

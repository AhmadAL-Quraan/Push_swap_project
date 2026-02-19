
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 13:07:48 by aqoraan           #+#    #+#              #
#    Updated: 2025/12/17 00:14:22 by aqoraan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#Makefile, comments are made so when explain, it would be easy on me to remember things 
#It's not judged by norminette so it's fine
#.a is archive libraries that are statically linked. I'm define the name of my lib
#These are variables

# In make file --> it expand first --> then in SHell So $(CC) --> make file expand this var to "cc" then the shell execute it if it was a command
#
# target: prerequisite(dependecy)
# 		command
# 		command
# Make search in the current directory for the specified files (dependecies) or (targets)



NAME = libft.a
# * c, means create the archive.
# The specified archive is always created if it did not exist, when you request an
#update. * r, insert the files member into the archive (with replacement).
# This operation delete the previosly existing members if their names match those
#being added * Write an object-file index into the archive, or update an existing
#one, even if noother change is made to the archive.
#ar s on an archive is equivalent to running ranlib on it.
# r is for replace --> if files libft.a is alread exists it replaces the old object file with the new one 
# c for creating the lib
# s for sort/ index to search faster 
AR = ar rcs
#CC is my compiler, that are called macro
CC = cc
# RM is remove forced
RM = rm -f
#The flags for the compiler
CFLAGS = -Wall -Wextra -Werror 
#I include the sources, i.e. the functions
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c 

SRCS_B=ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
			 ft_lstlast.c ft_lstmap.c ft_lstnew.c  ft_lstsize.c
#OBJS will change .c in .o
OBJS = $(SRCS:.c=.o)

OBJS_B=$(SRCS_B:.c=.o)

# To use with libft test cases saved in ~/Documents/programs/42_helping_tools/ on my personal machine

#these are commands, $< when used in the "recipe",
#means "the first prerequisite" - the first thing after the : in the line above.
# $@ --> the target file
# This is called a rule target which is executed when needed
# So when the target $(NAME) is executed, make file will search for .o file for any 
#specifc file, then it gonna generate it from this rule if it's not exists or old
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
#this command mean take the OBJS and put into the NAME with the commands of AR
# This the first target that make file starts when you write "make"
$(NAME): $(OBJS) $(OBJS_B)
		$(AR) $(NAME) $(OBJS) $(OBJS_B)

# But when we say make all --> it start builds from here (first target)
all: $(NAME)
#for the bonus part
#The clean will remove all .o files
clean:
	$(RM) $(OBJS) $(OBJS_B)
#The fclean (full clean) will do the clean + remove the .a file
fclean: clean
	$(RM) $(NAME)

	#re will do fclean and he will do the make again
re : fclean all
# so: $(OBJS)
# 	$(CC) -shared -o libft.so $(OBJS) $(OBJS_B)


# declare the .PHONY is to tell make that (fclean, re, all, info..) are not real files
#Because make assumes that those are real files by defualt (because make assumes that any target is a real file)
# Also those can't be execute until called explicitly 
.PHONY :so all clean fclean re  info

info:
	@echo "	 libft: make [info , all , bonus , clean , fclean , re]"
	@echo "	libft build targets"
	@echo "		all: compile the library"
	@echo "		bonus: compile the library with bonus"
	@echo "		clean: remove object files"
	@echo "		fclean: remove object files and archive library"
	@echo "		re: fclean and all						"

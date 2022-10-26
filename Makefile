SRC = IsFonction.c MallocFct.c MemFonction.c StrFonction.c ToFunctions.c atoi.c libft.h

OBJ = $(SRC:.c=.o)

NAME = 	libft.a

all : $(NAME)

$(NAME) :	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)
$(OBJ) :
			gcc -Wall -Wextra -Werror -c $(SRC)
clean :
			/bin/rm -f $(OBJ)
fclean :
			clean
			rm -f $(NAME)
re :
			clean
			fclean
.PHONY :
			all
			clean
			fclean
			re


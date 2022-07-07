SERVER			=	server
SERVER_SRC		=	utils.c	server.c
SERVER_OBJ		=	$(SERVER_SRC:.c=.o)

CLIENT			=	client
CLIENT_SRC		=	client.c utils.c
CLIENT_OBJ		=	$(CLIENT_SRC:.c=.o)


CC				=   gcc
CFLAGS			=	-Wall -Werror -Wextra

all : $(SERVER) $(CLIENT)

$(SERVER) : $(SERVER_OBJ)
	$(CC) $(CFLAGS) $(SERVER_OBJ) -o $@

$(CLIENT) : $(CLIENT_OBJ)
	$(CC) $(CFLAGS) $(CLIENT_OBJ) -o $@

fclean : clean
	$(RM) $(SERVER) $(CLIENT)
clean :
	$(RM) $(SERVER_OBJ) $(CLIENT_OBJ)

re : fclean all

.PHONY : all fclean re

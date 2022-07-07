SERVER          =   server
SERVER_SRC      =   server.c utils.c

CLIENT          =   client
CLIENT_SRC      =   client.c utils.c


CC              =   gcc
RM              =   rm -f
FLAGS           =   -Wall -Werror -Wextra

all : $(SERVER) $(CLIENT)

$(SERVER) : $(SERVER_OBJ) $(UTILS_OBJ)
	$(CC) $(FLAGS) $(SERVER_SRC) $(UTILS_SRC) -o $(SERVER)

$(CLIENT) : $(CLIENT_OBJ) $(UTILS_OBJ)
	$(CC) $(FLAGS) $(CLIENT_SRC) $(UTILS_SRC) -o $(CLIENT)

fclean : clean

clean :
	rm -rf server client

re : fclean all

.PHONY : all fclean re
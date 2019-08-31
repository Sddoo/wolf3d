NAME = wolf3d

# directories
SRCDIR = ./src
INCDIR = ./include
OBJDIR = ./obj

SRC	=	main.c \
		event_loop.c \
		rendering.c \
		termination_event.c

OBJ = $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

# compiler
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
#CFLAGS	+=	-Ofast 
CFLAGS	+=	-g

#LIBFT
LIBFT_DIR 	= ./lib/libft 
LIBFT		= ./lib/libft/libft.a
LIBFT_INC	= -I ./lib/libft
LIBFT_LNK	= -L ./lib/libft -lft

#SDL
SDL		=	~/lib/libSDL2-2.0.0.dylib
SDL_INC	=	-I ./include/SDL2
SDL_LNK	=	-L ~/lib -lSDL2-2.0.0

LNK	+=	$(LIBFT_LNK)
LNK	+=	$(SDL_LNK)

INC =	-I ./include
INC	+=	$(LIBFT_INC)
INC	+=	$(SDL_INC)


all: obj $(LIBFT) $(SDL) $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o:$(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

$(LIBFT):
	make -C $(LIBFT_DIR)

$(SDL):
	install_sdl2

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LNK) -lm -o $@

clean:
	rm -rf $(OBJDIR)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT_DIR) fclean

cleanobj:
	rm -rf $(OBJDIR)

resdl:
	install_sdl2

repair: cleanobj all

re: fclean all
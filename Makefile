prog:levels.o collision.o move.o level.o exit.o settings.o menu.o fonctions.o main.o
	gcc levels.o collision.o move.o level.o exit.o settings.o menu.o fonctions.o main.o -o prog -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g

main.o:files.c/main.c
	gcc -c files.c/main.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
fonctions.o:files.c/fonctions.c
	gcc -c files.c/fonctions.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
menu.o:files.c/menu.c
	gcc -c files.c/menu.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
settings.o:files.c/settings.c
	gcc -c files.c/settings.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
exit.o:files.c/exit.c
	gcc -c files.c/exit.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
level.o:files.c/level.c
	gcc -c files.c/level.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
move.o:files.c/move.c
	gcc -c files.c/move.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
collision.o:files.c/collision.c
	gcc -c files.c/collision.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g
levels.o:files.c/levels.c
	gcc -c files.c/levels.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf -g

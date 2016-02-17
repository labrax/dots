
all: main.cpp graphics.cpp
	g++ main.cpp graphics.cpp -lGL -lglut -lSDL2 -Wall

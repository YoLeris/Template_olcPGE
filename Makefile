#DIRSDL=/usr
CFLAGS= -g -Wall -Wextra -DUBUNTU #-DOS_$(OS) #-I$(DIRSDL)/include -Wall  -I/usr/include/SDL2 -I/usr/local/include -I/usr/local/include/SDL2
#LDFLAGS=  -lm `sdl2-config --cflags --libs` -L$(DIRSDL)/lib -lSDL2 -lSDL2_gfx -lSDL2_ttf -lSDL2_image
LDFLAGS= -lX11 -lGL -lpthread -lpng -lstdc++fs -std=c++14

TARGET = template

OBJ = GameEngine.o Main.o
#SRC=$(wildcard *.cpp)
#OBJ=$(SRC:.cpp=.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	g++ $^ $(LDFLAGS) -o $@

#Main.o : Main.cpp
	#g++ $< -g -Wall -Wextra -DUBUNTU=1 -c

%.o: %.cpp
	g++  $< $(CFLAGS) -c

clean :
	rm -f *.o $(EXEC)

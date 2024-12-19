RAYLIB ?= ./raylib/src/

qrCode:main.cpp
	g++ main.cpp -I ${RAYLIB} -L ${RAYLIB} -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o qrGenerator

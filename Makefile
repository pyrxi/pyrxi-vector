CC=g++
CFLAGS=-c -Wall

OBJ=main.o
SRC=src/main.cc
EXE=build/test

all: ${EXE}

${EXE}: ${OBJ}
	${CC} ${OBJ} -o ${EXE}

${OBJ}: ${SRC}
	${CC} ${SRC} ${CFLAGS}

clean:
	rm ${OBJ}

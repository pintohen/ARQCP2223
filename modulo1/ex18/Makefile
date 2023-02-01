# A Makefile with variables and suffix rules
# variaveis
INCLUDES = compress_shorts.h
SOURCES = main.c compress_shorts.c
OBJFILES = main.o compress_shorts.o
EXEC = compress_shorts

# Suffix rules
.SUFFIXES : .c .o

# How to build an object .o from a code file .c ; $< -- file name
.c.o:
	gcc -Wall -g -c $<

${EXEC}: ${OBJFILES}
	gcc -Wall -g -o ${EXEC} ${OBJFILES}

${OBJFILES}: ${SOURCES} ${INCLUDES}

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}

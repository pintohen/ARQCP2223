# A Makefile with variables and suffix rules
# variaveis
INCLUDES = upper2.h
SOURCES = main.c upper2.c
OBJFILES = main.o upper2.o
EXEC = upper_char

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

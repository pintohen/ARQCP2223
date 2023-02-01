# A Makefile with variables and suffix rules
# variaveis
INCLUDES = string_to_int.h average.h
SOURCES = main.c string_to_int.c average.c
OBJFILES = main.o string_to_int.o average.o
EXEC = prog_avg

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
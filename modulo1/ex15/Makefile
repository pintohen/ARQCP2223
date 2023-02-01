# A Makefile with variables and suffix rules
# variaveis
INCLUDES = sets.h populate.h check.h
SOURCES = main.c sets.c populate.c check.c
OBJFILES = main.o sets.o populate.o check.o
EXEC = number_sets

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

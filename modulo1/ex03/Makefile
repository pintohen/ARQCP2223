# A Makefile with variables and suffix rules
# variaveis
INCLUDES = fill_array.h sum_even.h
SOURCES = main.c fill_array.c sum_even.c
OBJFILES = main.o fill_array.o sum_even.o
EXEC = sum_even

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

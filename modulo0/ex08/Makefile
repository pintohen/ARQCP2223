# A Makefile with variables and suffix rules
# variaveis
INCLUDES = integer_part.h fractional_part.h
SOURCES = main.c integer_part.c fractional_part.c
OBJFILES = main.o integer_part.o fractional_part.o
EXEC = integer_float_part

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


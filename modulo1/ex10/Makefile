# A Makefile with variables and suffix rules
# variaveis
INCLUDES = odd_sum.h
SOURCES = main.c odd_sum.c
OBJFILES = main.o odd_sum.o
EXEC = odd_sum

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
# A Makefile with variables and suffix rules
# variaveis
INCLUDES = power_ref.h
SOURCES = main.c power_ref.c
OBJFILES = main.o power_ref.o
EXEC = power_ref

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
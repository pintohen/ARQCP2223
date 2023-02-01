# A Makefile with variables and suffix rules
# variaveis
INCLUDES = sum.h subtract.h mult.h divide.h modulus.h square.h cube.h
SOURCES = main.c sum.s subtract.s mult.s divide.s modulus.s square.s cube.s
OBJFILES = main.o sum.o subtract.o mult.o divide.o modulus.o square.o cube.o
EXEC = prog

# Suffix rules
.SUFFIXES : .c .o .s

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

debug: ${EXEC}
	gdb -tui ${EXEC}
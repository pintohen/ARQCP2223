# A Makefile with variables and suffix rules
# variaveis
INCLUDES = copy_vec.h
SOURCES = main.c copy_vec.c
OBJFILES = main.o copy_vec.o
EXEC = copy_vec

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
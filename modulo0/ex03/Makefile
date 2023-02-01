# A Makefile with variables and suffix rules
# variaveis
INCLUDES = average.h fill_array.h
SOURCES = main.c average.c fill_array.c
OBJFILES = main.o average.o fill_array.o
EXEC = average

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
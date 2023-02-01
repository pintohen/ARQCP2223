# A Makefile with variables and suffix rules
# variaveis
INCLUDES = line.h multiplication_table.h multiplication_table_n.h
SOURCES = line.c main.c multiplication_table.c multiplication_table_n.c
OBJFILES = line.o main.o multiplication_table.o multiplication_table_n.o
EXEC = multiplication_table

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
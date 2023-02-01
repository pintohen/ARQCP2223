# A Makefile with variables and suffix rules
# variaveis
INCLUDES = find_word.h find_all_words.h
SOURCES = main.c find_word.c find_all_words.c
OBJFILES = main.o find_word.o find_all_words.o
EXEC = find_all_words
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

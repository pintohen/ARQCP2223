#include <stdio.h>
#include <string.h>
#include "count_words.h"
extern char str[1000];

int main() {
	
	int numberWords;
	printf("Input the string:\n");
	fgets(str, sizeof str, stdin);
	numberWords = count_words(str);
	printf("The String has %d words\n", numberWords -1);
	return 0;

}

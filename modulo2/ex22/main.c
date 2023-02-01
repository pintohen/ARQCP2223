#include <stdio.h>
#include "asm.h"

int result = 0, i = 5, j = 3, h, g, r;

int fC () {
	if (i == j)
		h = i - j + 1;
	else
		h = i + j -1;
	
	return h;
}

int f2C () {
	if (i > j)
		i = i - 1;
	else
		j = j + 1;
	
	h = j * i;
	
	return h;
}

int f3C () {
	if (i >= j) {
		h = i * j;
		g = i + 1;
	} else {
		h = i + j;
		g = i + j + 2;
	}
	
	r = g / h;
	
	return r;
}

int f4C () {
	if (i + j < 10)
		h = 4 * i * i;
	else
		h = j * j / 3;
	
	return h;
}

int main() {
    result = f4C();
    printf("f in c language: %d\n", result);
	i = 5, j = 3;
    result = f4();
    printf("f in assembly: %d\n", result);
    return 0;
}
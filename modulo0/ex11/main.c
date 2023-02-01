
#include <stdio.h>
#include "average_array.h"

int main() {
	int g_n = 5;
	int g_v[100];
	
	g_v[0] = 1;
	g_v[1] = 2;
	g_v[2] = 3;
	g_v[3] = 4;
	g_v[4] = 5;
	
	int globalResult;
	globalResult = average_global_array(g_v, g_n);
	printf("\nGlobal Result: %d\n", globalResult);
	
	return 0;
}

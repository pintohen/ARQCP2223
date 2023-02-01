
extern int g_n;
extern int g_v[100];

int average_global_array(int g_v[], int g_n) {
	int sumGlobal = 0;
	for(int i = 0; i < g_n; i++){
		sumGlobal = sumGlobal + g_v[i];
	}
	return sumGlobal / g_n;
}

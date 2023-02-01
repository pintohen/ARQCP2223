typedef struct {
    char c; // 1 byte (starts at 0)
    int i; // 4 bytes (starts at 4)
    char d; // 1 byte (starts at 8)
    int j; // 4 bytes (starts at 12)
} s1;

void fill_s1(s1 *s, int vi, char vc, int vj, char vd);

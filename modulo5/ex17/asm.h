typedef union {
    int a; // 4 bytes
    char b; // 1 byte
    short c; // 2 bytes
    long int d; // 8 bytes (union takes the size of the biggest element (long int))
}unionB;

typedef struct {
    short int a[3]; // 6 bytes (starts at byte 0)
    char b; // 1 byte (starts at byte 6)
    long long int c; // 8 bytes (starts at byte 8 (memory alignment)))
    short d; // 2 bytes (starts at byte 16)
    char e; // 1 byte (starts at byte 18)
    unionB ub; // 8 bytes (starts at byte 24 (memory alignment))
}structA; // sizeof(structA) = 32 bytes

char return_unionB_b(structA **matrix, int i, int j);

void fill_unionA(structA *sA, short int a[3], char b, long long int c, short d, char e, unionB ub);

structA ** matrixCreate(int i, int j);

void freeMatrix(structA **matrix, int i);

typedef struct {
    short number; // 2 bytes
    char age; // 1 byte 
    int grades[5]; // 20 bytes 
    char name[60]; // 60 bytes 
    char address[100]; // 100 bytes 
} Student;

void update_address(Student * s, char * new_address);
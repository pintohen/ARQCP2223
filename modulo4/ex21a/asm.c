#include <string.h>

int distance(char *a, char *b) {
    int i = 0;
    int count = 0;

    if (strlen(a) != strlen(b)) {
        return -1;
    }

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            count++;
        }
        i++;
    }

    if (count == 0) {
        return 0;
    } else {
        return count;
    }
}
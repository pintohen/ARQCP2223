#include <stdio.h>

int main() {
int x = 5;
int* xPtr = &x;
float y = *xPtr + 3;
int vec[] = {10, 11, 12, 13};

printf("\nValue of x:\n ");
printf("x = %d\n ", x);

printf("\nValue of y:\n ");
printf("y = %f\n ", y);

printf("\nThe address (in Hexadecimal) of x and xptr:\n ");
printf("x = %x\n ", &x);
printf("xptr = %x\n ", &xPtr);

printf("\nThe value pointed by xptr:\n ");
printf("xptr = %d\n ", *xPtr);

printf("\nThe address of vec:\n ");
printf("vec = %d\n ", &vec);

printf("\nThe values of vec[0], vec[1], vec[2] and vec[3]:\n ");
printf("vec[0] = %d\n ", vec[0]);
printf("vec[1] = %d\n ", vec[1]);
printf("vec[2] = %d\n ", vec[2]);
printf("vec[3] = %d\n ", vec[3]);

printf("\nThe adresses of vec[0], vec[1], vec[2] and vec[3]:\n ");
printf("vec[0] = %d\n ", &vec[0]);
printf("vec[1] = %d\n ", &vec[1]);
printf("vec[2] = %d\n ", &vec[2]);
printf("vec[3] = %d\n ", &vec[3]);

printf("\nO elemento vec[0] está a 4 bytes do elemento vec[1] e assim por diante, pois cada int ocupa 4 bytes.\n");
printf("\nEspera-se que as variáveis sejam armazenadas em diferentes locais da memória, apresentando, então, um endereço de memória diferente em cada computador e dependendo da arquitetura de memória utilizada.\n");

return 0;
}

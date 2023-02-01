#include "asm.h"
#include <stdio.h>
int op1, op2;

int main(){
    char ativou_flag;
    op1 = 0x00000001;
    op2 = 0xFFFFFFFF;
    ativou_flag = test_flags();

    printf("\nAtivou flag? valor: %d\n(Overflow)\n", ativou_flag);

    op1 = 0x00000001;
    op2 = 0xFFFFFFFF;
    ativou_flag = test_flags();

    printf("\nAtivou flag? valor: %d\n(Carry)\n", ativou_flag);
      
    op1 = 0x00000001;
    op2 = 0x000000000;
    ativou_flag = test_flags();

    printf("\nAtivou flag? valor: %d\n(Zero/Nenhuma)\n", ativou_flag);

    return 0;
}
#include "sum.h"
#include "subtract.h"
#include "mult.h"
#include "divide.h"
#include "square.h"
#include "cube.h"
#include "modulus.h"
#include <stdio.h>

int val1, val2;

int main(){
    printf("\nOperations:\n1. Sum\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Cube\n7. Modulus\n");
    printf("Choose operation to perform:\n");
    int choice;
    scanf("%d", &choice);

    //switch case for choice
    switch(choice){
        case 1:
            printf("\nEnter two numbers:");
            scanf("%d", &val1);
            scanf("%d", &val2);
            printf("\nSum of %d and %d is %d\n", val1, val2, sum());
            break;
        case 2:
            printf("\nEnter two numbers:");
            scanf("%d", &val1);
            scanf("%d", &val2);
            printf("\nSubtraction of %d and %d is %d\n", val1, val2, subtract());
            break;
        case 3:
            printf("\nEnter two numbers:");
            scanf("%d", &val1);
            scanf("%d", &val2);
            printf("\nMultiplication of %d and %d is %d\n", val1, val2, mult());
            break;
        case 4:
            printf("\nEnter two numbers:");
            scanf("%d", &val1);
            scanf("%d", &val2);
            printf("\nDivision of %d and %d is %d\n", val1, val2, divide());
            break;
        case 5:
            printf("\nEnter a number:");
            scanf("%d", &val1);
            printf("\nSquare of %d is %d\n", val1, square());
            break;
        case 6:
            printf("\nEnter a number:");
            scanf("%d", &val1);
            printf("\nCube of %d is %d\n", val1, cube());
            break;
        case 7:
            printf("\nEnter two numbers:");
            scanf("%d", &val1);
            scanf("%d", &val2);
            printf("\nModulus of %d and %d is %d\n", val1, val2, modulus());
            break;
        default:
            printf("\nInvalid choice\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* int main() {
    int* iPtr = 0;
    char* cPtr = 0;
    float* fFloat = 0;
    int iNumber = 123;
    float fNumber = 12.32;
    char cCharacter = 'a';

    iPtr = &iNumber;
    cPtr = &cCharacter;
    fFloat = &fNumber;

    printf("\nValue in nonPointer: %d, %c, %f", iNumber, cCharacter, fNumber);
    printf("\nValue in Pointer: %p, %p, %p", iPtr, cPtr, fFloat);
    printf("\naddress of non pointer: %p, %p, %p", &iNumber, &cCharacter, &fNumber);
    printf("\naddress of pointers: %p, %p, %p\n", &iPtr, &cPtr, &fFloat);

    return 0;
} */
/* 
int main() {
    int x;
    int* iPtr;
    iPtr = &x;

    printf("\nEnter New Integer Value: ");
    scanf("%d", iPtr);

    printf("\nPointer Address: %p", &iPtr);
    printf("\nInteger Address: %p", &x);
    printf("\nInteger Value: %d\n", *iPtr);
} */

void TossDie(int []);

int main() {
    int dieToss[6] = {0};
    TossDie(dieToss);

    for (int i = 0; i < 6; i++)
        printf("%d, ", dieToss[i]);
    printf("\n");

    return 0;
} //end main function

void TossDie(int dieToss[]) {
    int x = 0;
    srand(time(NULL));
    while ( x < 6 )
    {
        dieToss[x] = (rand() % 6) + 1;
        x++;
    } //end loop
} //end TossDie funtion
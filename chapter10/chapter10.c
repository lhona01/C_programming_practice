#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//chapter Program Math Quiz
int main() {
    int response;
    int* answer;
    int* op1;
    int* op2;
    char* result;
    int x;
    srand(time(NULL));

    printf("\nMath Quiz\n\n");
    printf("Enter # of problems: ");
    scanf("%d", &response);

    /* Based on the number of questions the user wished to take, allocate enough memory to hold question data. */
    op1 = (int*) calloc(response, sizeof(int));
    op2 = (int*) calloc(response, sizeof(int));
    answer = (int*) calloc(response, sizeof(int));
    result = (char*) calloc(response, sizeof(char));

    if ( op1 == NULL || op2 == NULL || answer == NULL || result == NULL) {
        printf("\nOut of Memory!\n");
        return 1;
    } //end if

    //display random addition problems
    for ( x = 0; x < response; x++ ) {
        op1[x] = rand() % 100;
        op2[x] = rand() % 100;
        printf("\n%d + %d = ", op1[x], op2[x]);
        scanf("%d", &answer[x]);
        if ( answer[x] == op1[x] + op2[x] )
            result[x] = 'c';
        else
            result[x] = 'i';
    } //end for loop

    printf("\nQuiz Results\n");
    printf("\nQuestion\tYour Answer\tCorrect\n");

    //print the result of the quiz
    for ( x = 0; x < response; x++ ) {
        if ( result[x] == 'c' )
            printf("%d + %d\t\t%d\t\tYes\n", op1[x], op2[x], answer[x]);
        else
            printf("%d + %d\t\t%d\t\tNo\n", op1[x], op2[x], answer[x]);
    } //end for loop

    //free memory
    free(op1);
    free(op2);
    free(answer);
    free(result);

    return 0;
} //end main

/* int main() {
    int x;
    float f;
    double d;
    char c;
    typedef struct employee {
        int id;
        char* name;
        float salary;
    } e;

    printf("\nSize of integer: %d bytes\n", sizeof(x));
    printf("\nSize of float: %d bytes\n", sizeof(f));
    printf("\nSize of double: %d bytes\n", sizeof(d));
    printf("\nSize of char: %d bytes\n", sizeof(c));
    printf("\nSize of employee Structure: %ld bytes\n", sizeof(e));
    return 0;
} //end main */

//check if malloc returns type NULL
/* int main() {
    char* name;
    name = (char*) malloc(80*sizeof(char));

    if ( name == NULL ) {
        printf("\nOut of memory!\n");
        return 1;
    } else {
        printf("\nMemory allocated.\n");
        return 0;
    }
} //end main */

/* int main() {
    char* name;
    name = (char*) malloc(80*sizeof(char));

    if ( name!= NULL ) {
        printf("\nEnter your name: ");
        gets(name);
        printf("\nHi %s\n", name);
        free(name);
    }
    return 0;
} //end main */

/* int main() {
    int* numbers;
    int x;
    numbers = (int*) malloc(5 * sizeof(int));

    if (numbers == NULL)
        return 1; //return nonzero value if malloc is not successful
    
    numbers[0] = 100;
    *(numbers+1) = 200;
    numbers[2] = 300;
    numbers[3] = 400;
    numbers[4] = 500;

    printf("\nIndivisual memory segments initialized to: ");
    for ( x = 0; x < 5; x++)
        printf("numbers[%d] = %d\n", x, numbers[x]); //end loop

    return 0;
} //end main */

/* int main() {
    int* number;
    int *newNumber;
    int x;

    number = (int*) malloc(sizeof(int) * 5);

    if ( number == NULL ) {
        printf("\nOut of memory!\n");
        return 1;
    } //end if

    printf("\nOriginal memory:\n");

    for ( x = 0; x < 5; x++ ) {
        number[x] = x * 100;
        printf("number[%d] = %d\n", x, number[x]);
    } //end for loop

    newNumber = (int*) realloc(number, 10 * sizeof(int));

    if ( newNumber == NULL ) {
        printf("\nOut of memory!\n");
        return 1;
    } else
        number = newNumber;
    //initialize new memory only

    for ( x = 5; x < 10; x++ )
        number[x] = x * 100;
    
    printf("\nExpanded memory:\n");

    for ( x = 0; x < 10; x++ )
        printf("number[%d] = %d\n", x, number[x]);
    
    //free memory
    free(number);
    return 0;
} //end main */
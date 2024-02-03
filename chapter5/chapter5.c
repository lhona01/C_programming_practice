#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* int addTwoNumbers(int, int);
int substractTwoNumbers(int, int);

int main() {
    int iResult;
    iResult = addTwoNumber(5,5);
    return 0;
}

int addTwoNumbers(int operand1, int operand2) {
    return operand1 + operand2;
}

int substractTwoNumbers(int operand1, int operand2) {
    return operand1 - operand2;
} */

int sportsQuestion(void);
int geographyQuestion(void);
void pause(int);

int giResponse = 0;

int main() {
    do {
        system("clear");
        printf("\n\tTHE TRIVIA GAME\n\n");
        printf("1\tSports\n");
        printf("2\tGeography\n");
        printf("3\tQuit\n");
        printf("\n\nEnter your selection: ");
        scanf("%d", &giResponse);

        switch(giResponse) {
            case 1:
                if (sportsQuestion() == 4)
                    printf("\nCorrect!");
                else
                    printf("\nIncorrect!");
                pause(2);
                break;
            case 2:
                if (geographyQuestion() == 2)
                    printf("\nCorrect!\n");
                else
                    printf("\nIncorrect\n");
                break;
        }
    } while(giResponse != 3);
    return 0;
}

int sportsQuestion(void) {
    int iAnswer = 0;
    system("clear");
    printf("\tSports Questions\n");
    printf("\nWhat university did NFL star Deion Sanders attend? ");
    printf("\n\n1\tUniversity of Miami\n");
    printf("2\tCalifornia State University\n");
    printf("3\tIndiana University\n");
    printf("4\tFLorida State University\n");
    printf("\nEnter your selection: " );
    scanf("%d", &iAnswer);
    return iAnswer;
}

int geographyQuestion(void) {
    int iAnswer = 0;
    system("clear");
    printf("\tGeography Question\n");
    printf("\nWhat is the state capital of Florida? ");
    printf("\n\n1\tPensacola\n");
    printf("2\tTallahassee\n");
    printf("3\tJacksonville\n");
    printf("4\tMiami\n");
    printf("\nEnter your selection: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

void pause(int inNum) {
    int iCurrentTime = 0;
    int iElapsedTime = 0;
    iCurrentTime = time(NULL);
    do {
        iElapsedTime = time(NULL);
    } while((iElapsedTime - iCurrentTime) < inNum);
}
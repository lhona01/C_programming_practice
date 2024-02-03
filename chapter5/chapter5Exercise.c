#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* int divisionRemainder(int, int);
int largerNumber(int, int);
void atmMenu(void);

int main() {

    return 0;
}

int divisionRemainder(int num1, int num2) {
    return num1 % num2;
}

int largeNumber(int num1, int num2) {
    if (num1 > num2)
        return num1; 
    else
        return num2;
}

void atmMenu(void) {
    printf("\n1\tDisplay balance");
    printf("\n2\tDeposit funds");
    printf("\n3\tTransfer funds");
    printf("\n4\tWithdraw funds");
} */

int sportsQuestion(void);
int geographyQuestion(void);
int carQuestion(void);
void pause(int);

int giResponse = 0;

int main() {
    int iCorrect = 0;
    int iIncorrect = 0;

    do {
        system("clear");
        printf("\n\tTHE TRIVIA GAME\n\n");
        printf("1\tSports\n");
        printf("2\tGeography\n");
        printf("3\tCars\n");
        printf("4\tQuit\n");
        printf("\n\nEnter your selection: ");
        scanf("%d", &giResponse);

        switch(giResponse) {
            case 1:
                if (sportsQuestion() == 4) {
                    printf("\nCorrect!");
                    iCorrect += 1;
                }
                else {
                    printf("\nIncorrect!");
                    iIncorrect += 1;
                }
                pause(2);
                break;
            case 2:
                if (geographyQuestion() == 2) {
                    printf("\nCorrect!\n");
                    iCorrect += 1;
                }
                else {
                    printf("\nIncorrect\n");
                    iIncorrect += 1;
                }
                break;
            case 3:
                if (carQuestion() == 1) {
                    printf("\nCorrect Answer!");
                    iCorrect += 1;
                }
                else {
                    printf("\nIncorrect Answer!");
                    iIncorrect += 1;
                }
                break;
        }
    } while(giResponse != 4);

    printf("\nYou got %d Correct and %d Incorrect Answers\n", iCorrect, iIncorrect);
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

int carQuestion(void) {
    int iAnswer = 0;
    system("clear");
    printf("\tCar Question\n");
    printf("\nwhich own of these is a car brand? ");
    printf("\n\n1\tFord\n");
    printf("2\tApple\n");
    printf("3\tKroger\n");
    printf("4\tMacys\n");
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
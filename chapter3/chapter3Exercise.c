#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//number guessing game
/* int main() {
    int iRandomNum = 0;
    int iResponse;
    srand(time(NULL));
    iRandomNum = ((rand() % 10) + 1);

    printf("\nNumber Guessing game\n");
    printf("\nEnter a number between 1 and 10: ");
    scanf("%d", &iResponse);

    if((iResponse < 11 && iResponse > 0)) {
        if(iResponse == iRandomNum) {
            printf("\nYou guessed correct!\n");
        }
        else {
            printf("\nIncorrect guess!");
            printf("\nCorrect number is %d\n", iRandomNum);
        }
    } 
    else {
        printf("\nInvalid Input!\n");
    }
    return 0;
} */

int main() {
    int iDice1, iDice2, iSum;
    srand(time(NULL));
    iDice1 = ((rand() % 6) + 1);
    iDice2 = ((rand() % 6) + 1);
    iSum = iDice1 + iDice2;

    if (iSum == 7 || iSum == 11) {
        printf("\nPlayer wins!");
        printf("\nSum of Dice is %d\n", iSum);
    }
    else {
        printf("\nPlayer Lose!");
        printf("\nSum of Dice is %d\n", iSum);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* int main() {
    for (int i = 0; i <= 100; i += 5) {
        if(i != 0)
            printf("%d ", i);
    }
    return 0;
} */

/* int main() {
    for (int i = 100; i > 0; i -= 10) {
            printf("%d ", i);
    }
    return 0;
} */

/* int main() {
    int iStartCount, iEndCount, iIncrementValue;
    
    printf("Enter start value: ");
    scanf("%d", &iStartCount);
    printf("\nEnter end value: ");
    scanf("%d", &iEndCount);
    printf("\nEnter increment value: ");
    scanf("%d", &iIncrementValue);

    for (int i = iStartCount; i < iEndCount + 1; i += iIncrementValue) {
        printf("%d ", i);
    }
    return 0;
} */

/* int main() {
    int randNum1, randNum2;
    int iQuestions = 0;
    int iAnswer = 0;
    int iCorrectAnswer = 0;
    int iIncorrectAnswer = 0;

    srand(time(NULL));

    printf("\tMath Quiz!");
    printf("\n\n\tEnter the number of question you would like to be asked: ");
    scanf("%d", &iQuestions);

    for (int i = 0; i < iQuestions; i++) {
        system("clear");

        randNum1 = (rand() % 10);
        randNum2 = (rand() % 100);

        printf("\n\tQuestion %d of %d", (i+1), iQuestions);
        printf("\n\n\t What is %d * %d? :", randNum1, randNum2);
        scanf("%d", &iAnswer);
        
        if (iAnswer == (randNum1 * randNum2)) {
            printf("\n\n\tCorrect Answer!");
            iCorrectAnswer = iCorrectAnswer + 1;
        } 
        else
        {
            printf("\n\n\tIncorrect Answer!");
            iIncorrectAnswer = iIncorrectAnswer + 1;
        }
    }

    printf("\n\n\tYou got %d correct and %d incorrect.\n", iCorrectAnswer, iIncorrectAnswer);
    return 0;
} */

int main() {
    char cYesNo = '\0';
    int iResp1 = 0;
    int iResp2 = 0;
    int iResp3 = 0;
    int iElapsedTime = 0;
    int iCurrentTime = 0;
    int iRandomNum = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;
    int i5 = 0;
    int iCounter = 0;
    int iDifficulty = 0;
    int iDelayConcentration = 0;

    srand(time(NULL));

    do {
        i1 = rand() % 100;
        i2 = rand() % 100;
        i3 = rand() % 100;
        i4 = rand() % 100;
        i5 = rand() % 100;

        printf("\n\tDifficulty: ");
        printf("\n\n1\tEasy");
        printf("\n2\tIntermediate");
        printf("\n3\tDifficult");
        printf("\n4\tQuit");
        printf("\n\n Select Difficulty or '4' to quit: ");
        scanf("%d", &iDifficulty);

        system("clear");

        switch(iDifficulty) {
            case 1:
                iDelayConcentration = 5;   
                printf("\nConcentrate on the next three number\n");
                printf("\n%d\t%d\t%d\n", i1, i2, i3);             
                break;
            case 2:
                iDelayConcentration = 5;
                printf("\nConcentrate on the next five number\n");
                printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
                break;
            case 3:
                iDelayConcentration = 2;
                printf("\nConcentrate on the next three number\n");
                printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
                break;
            case 4:
                return 0;
                break;
        }

        iCurrentTime = time(NULL);
        do {
            iElapsedTime = time(NULL);
        } while ((iElapsedTime - iCurrentTime) < iDelayConcentration);
            
        system("clear");
        
        printf("\nEnter each # seperated with one space: ");
        scanf("%d%d%d", &iResp1, &iResp2, &iResp3);

        if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3) {
            printf("\nCongratulations!\n");
        }
        else {
            printf("\nSorry, correct numbers were %d %d %d\n", i1, i2, i3);
        }
    } while(iDifficulty != 4);
    return 0;   
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* int main() {
    int x = 0;

    while (x < 10) {
        printf("The value of x is %d\n", x);
        x++;
    }
    return 0;
} */

/* int main() {
    int iSelection = 0;

    while (iSelection != 4) {
        printf("1\tDeposit funds\n");
        printf("2\tWithdraw funds\n");
        printf("3\tPrint Balance\n");
        printf("4\tQuit");
        printf("\nEnter your selection (1-4): ");
        scanf("%d", &iSelection);
    }
    printf("\nThank you\n");
    return 0;
} */

/* int main() {
    int x, iNumQuestions, iResponse, iRndNum1, iRndNum2;
    srand(time(NULL));

    printf("\nEnter number of questions to ask: ");
    scanf("%d", &iNumQuestions);

    for (x = 0; x < iNumQuestions; x++) {
        iRndNum1 = rand() % 10 + 1;
        iRndNum2 = rand() % 10 + 1;
        printf("\nWhat is %d x %d: ", iRndNum1, iRndNum2);
        scanf("%d", &iResponse);
        if(iResponse == iRndNum1 * iRndNum2) {
            printf("\nCorrect!\n");
        } 
        else {
            printf("\nThe correct andwer was %d \n", iRndNum1 * iRndNum2);
        }
    }
    return 0;
} */

/* int main() {
    system("clear");
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
    int iCounter = 0;
    srand(time(NULL));

    printf("\nPlay a game of Concentration? (y or n): ");
    scanf("%c", &cYesNo);

    if (cYesNo == 'y' || cYesNo == 'Y') {
        i1 = rand() % 100;
        i2 = rand() % 100;
        i3 = rand() % 100;
        
        printf("\nConcentrate on the next three number\n");
        printf("\n%d\t%d\t%d\n", i1, i2, i3);

        iCurrentTime = time(NULL);
        do {
            iElapsedTime = time(NULL);
        } while ((iElapsedTime - iCurrentTime) < 3);
            
        system("clear");
        
        printf("\nEnter each # seperated with one space: ");
        scanf("%d%d%d", &iResp1, &iResp2, &iResp3);

        if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3) {
            printf("\nCongratulations!\n");
        }
        else {
            printf("\nSorry, correct numbers were %d %d %d\n", i1, i2, i3);
        }
        return 0;
    }    
}
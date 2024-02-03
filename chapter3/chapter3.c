#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/* int main() {
    int iResponse = 0;

    printf("\n\tIn-Battle Healing\n");
    printf("\n1\tDrink Health Potion\n");
    printf("2\tResume Battle\n");

    printf("\n Enter your selection: ");
    scanf("%d", &iResponse);

    if (iResponse == 1) {
        printf("\nDrinking health potion!\n");
    }

    if (iResponse == 2) {
        printf("\nResuming battle!\n");
    }

    return 0;
} */

/* int main() {
    int iSelection = 0;
    float fTransAmount = 0.0;
    float fBalance = 100.25;

    printf("\n\tYe Olde Bank\n");
    printf("\n1\tDeposit Gold");
    printf("\n2\tWithdraw Gold\n");

    printf("\nEnter your selection: ");
    scanf("%d", &iSelection);

    if (iSelection == 1) {
        printf("\nEnter amount of gold to deposit: ");
        scanf("%f", &fTransAmount);
        printf("\nYour new balance is: %.2f gold\n", fBalance + fTransAmount);
    }

    if (iSelection == 2) {
        printf("\nEnter amount of gold to withdraw: ");
        scanf("%f", &fTransAmount);
        if (fTransAmount > fBalance) {
            printf("\nInsufficient funds\n");
        } else
            printf("\nYour new balance is $%.2f gold\n", fBalance - fTransAmount);
    }
    return 0;
} */

/* int main() {
    char cResponse = '\0';

    printf("\nPlease enter a letter: ");
    scanf("%c", &cResponse);

    if(isdigit(cResponse) == 0) {
        printf("\nThank you\n");
    }
    else {
        printf("\nYou did not enter a letter\n");
    }
    return 0;
} */

/* int main() {
    int iResponse = 0;

    printf("\n1\tSports\n");
    printf("\n2\tGeography\n");
    printf("\n3\tMusic\n");
    printf("\n4\tWorld Events\n");
    printf("\nPlease select a catagory (1-4): ");
    scanf("%d", &iResponse);

    switch(iResponse) {
        case 1:
            printf("\nYou selected sports question\n");
            break;
        case 2:
            printf("\nYou selected Geography");
            break;
        case 3:
            printf("\nYou selected Music");
            break;
        case 4:
            printf("\nYou selected World Events");
            break;
        default:
            printf("\nInvalid selection!\n");
    }
    return 0;
} */

/* int main() {
    int iRandomNum = 0;
    int iResponse = 0;
    srand(time(NULL));
    iRandomNum = (rand() % 10) + 1;

    printf("\nGuess a number between 1 and 10: ");
    scanf("%d", &iResponse);

    if (iResponse == iRandomNum) {
        printf("\nYou guessed right!\n");
    }
    else {
        printf("\nYou guessed wrong!\n");
        printf("\nCorrect guess was %d\n", iRandomNum);
    }
    return 0;
} */

//fortune cookie program
int main() {
    int iRandomNum = 0;
    srand(time(NULL));
    iRandomNum = (rand() % 4) + 1;

    printf("\nFortune Cookie - Chapter 3\n");

    switch(iRandomNum) {
        case 1:
            printf("\nYou will meet a new friend today.\n");
        break;
        case 2:
            printf("\nYou will enjoy a long and happy life.\n");
        break;
        case 3:
            printf("\nOpportunity knocks softly.\n");
        break;
        case 4:
            printf("\nYou'll be financially rewarded for good deeds.\n");
        break;
    }
    
    printf("\nLucky lotto numbers: ");
    printf("\n%d", (rand() % 49) + 1);
    printf(" %d", (rand() % 49) + 1);
    printf(" %d", (rand() % 49) + 1);
    printf(" %d", (rand() % 49) + 1);
    printf(" %d", (rand() % 49) + 1);
    printf(" %d\n", (rand() % 49) + 1);
    return 0;
}
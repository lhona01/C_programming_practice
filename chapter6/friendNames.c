#include <stdio.h>
#include <stdlib.h>

/***************
 * begin main function
*****************/
int main() {
    int iOptionSelected = 0;
    int iUsedSpace = 0;
    char cName[5][20] = {0};

    do {
        system("clear");
        printf("\nYou have inserted %d / 5 friends inserted.", iUsedSpace);
        printf("\n\tMenu");
        printf("\n1\tEnter a friends name.");
        printf("\n2\tPrint all friends name.");
        printf("\nSelect option (1 or 2): ");
        scanf("%d", &iOptionSelected);

        if ( iOptionSelected == 1 )
        {
            printf("\nEnter name: ");
            scanf("%s", &cName[iUsedSpace]);
            iUsedSpace += 1;
        }
        else if ( iOptionSelected == 2 )
        {
            for ( int i = 0; i < iUsedSpace; i++ )
            {
                printf("%s, ", cName[i]);
            }//end for loop
            printf("\n");
        }//end if
    } while ( iOptionSelected != 2 );//end loop

    return 0;
}
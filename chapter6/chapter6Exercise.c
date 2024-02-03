#include <stdio.h>
#include <stdlib.h>

/******************
 * function prototype
******************/
void displayMenu(void);
void sortNumbers(void);

/*****************
 * global variables
*******************/
int iNumber[] = {0};
int iSort;

/*****************
 * begin main function
*******************/
int main() {
    int x = 0;

    while (x < 10)
    {
        printf("\nEnter number here: ");
        scanf("%d", &iNumber[x]);
        x++;
    }

    do {
        displayMenu();
    } while ( iSort != 1 && iSort != 2 );
    sortNumbers();

    for ( int i = 0; i < 10; i++ )
    {
        printf("%d ", iNumber[i]);
    }
    return 0;
}

/******************
 * begin function definition
***********************/
void displayMenu() {
    system("clear");
    printf("\nSort data");
    printf("\n1\tAscending");
    printf("\n2\tDescending");
    printf("\nEnter (1 or 2): ");
    scanf("%d", &iSort);
}//end function

/********************
 * begin function definition
************************/
void sortNumbers() {
    //sort in assending order
    if ( iSort == 1 )
    {
        printf("\nNumbers sorted in Ascending order: ");
        for ( int i = 0; i < 10; i++ )
        {
            for ( int j = 0; j < 10; j++ )
            {
                if ( iNumber[j] > iNumber[i] )
                {
                    int temp = iNumber[i];
                    iNumber[i] = iNumber[j];
                    iNumber[j] = temp;
                }//endif
            }//end inner loop
        }//end loop
    }
    //sort in descending order
    else if ( iSort == 2 )
    {
        printf("\nNumbers sorted in Descending order: ");
        for ( int i = 0; i < 10; i++ )
        {
            for ( int j = 0; j < 10; j++ )
            {
                if ( iNumber[j] < iNumber[i] )
                {
                    int temp = iNumber[i];
                    iNumber[i] = iNumber[j];
                    iNumber[j] = temp;
                }//endif
            }//end inner loop
        }//end loop
    }
}//end funtion
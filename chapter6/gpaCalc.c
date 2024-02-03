#include <stdio.h>
#include <stdlib.h>

/*********************
 * function prototype
**********************/
float avgGpaCalc(int);
void getGpa(int);

/******************
 * global variable
******************/
float iGpa[30] = {0};

/***********
 * begin main funtion
******************/
int main() {
    int iOption;
    int iGpaSpaceAvailable = 30;
    float iAvgGpa;
    int iGpaSpaceUsed = 0;

    do {
        system("clear");
        printf("\n\tYou can insert %d more GPA's", iGpaSpaceAvailable);
        printf("\n1\tEnter GPA.");
        printf("\n2\tCalculate average GPA.");
        printf("\nEnter (1 or 2): ");
        scanf("%d", &iOption);

        if ( iOption == 1 )
        {
            getGpa(iGpaSpaceUsed);
            iGpaSpaceUsed += 1;
            iGpaSpaceAvailable -= 1;
        }
        else if ( iOption == 2 )
            iAvgGpa = avgGpaCalc(iGpaSpaceUsed);

    } while ( iOption != 2 );//end loop

    printf("\nThe Average GPA for %d inserted GPA is %.2f.\n", iGpaSpaceUsed, iAvgGpa);
    return 0;
}


/***************
 * begin funtion definition
******************/
float avgGpaCalc(int iGpaInserted) {
    float iSum = 0;
    for ( int i = 0; i < iGpaInserted; i++ )
    {
        iSum += iGpa[i];
    }//end loop

    if ( iGpaInserted == 0 )
        return 0;
    else
        return iSum / iGpaInserted;
}//end function

/*****************
 * begin function definition
********************/
void getGpa(int iArrElement) {
    float iTemp;
    system("clear");
    printf("\nEnter GPA here: ");
    scanf("%f", &iTemp);
    iGpa[iArrElement] = iTemp; 
}//end function
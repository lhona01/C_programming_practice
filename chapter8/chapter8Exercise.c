#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* int main() {
    char sName[20] = {'\0'};
    int x;

    printf("\nEnter you name: ");
    scanf("%s", sName);

    printf("\nThere are %ld character in your name ", strlen(sName));

    for ( x = 0; x < strlen(sName); x++ )
        printf("%c", toupper(sName[x]));
    printf("\n");
    return 0;
} //end main */

/* int main() {
    char* strState[5] = {
            "Florida",
            "Oregon",
            "California",
            "Georgia",
            "Conneticut"
    };

    int iArrLen = sizeof(strState) / sizeof(strState[0]);
    printf("\n%d", iArrLen);

    for ( int i = 0; i < iArrLen; i++ )
    {
        for ( int j = 0; j < iArrLen; j++ )
        {
            if ( strcmp(strState[i], strState[j]) < 0 )
            {
                char* temp = strState[i];
                strState[i] = strState[j];
                strState[j] = temp; 
            } // end if
        } //end inner loop
    } //end for loop

    for ( int i = 0; i < iArrLen; i++ )
        printf("\n%s", strState[i]);
    
    printf("\n");
    return 0;
} // end main */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

//function prototypes
void checkAnswer(char*, char [], int*);

int main() {
    char* strGame[5] = {
        "ADeAPPLEFERVZOPIBMOU",
        "ZBPOINTBALLERSKLMLOOPMNOCOT",
        "PODSTRINGGDCATIWHIEEICERLS",
        "YVCPROGRAMMDOGERWQKNULTHMD",
        "UKUNIXFIMWELEPHANTXIZEQZINPUTEX"
    };
    char* strAnswers[5] = {
        "APPLE",
        "BALL",
        "CAT",
        "DOG",
        "ELEPHANT"
    };
    char answer[80] = {0};
    int displayed = 0;
    int x;
    int difficulty = 0;
    int startTime = 0;
    int iTime[3] = {4,3,2};
    int iPoints = 0;

    do {
        printf("\n\n\tWord FInd\n");
        printf("\n\tSelect dificulty:");
        printf("\n1\tBeginner");
        printf("\n2\tIntermediate");
        printf("\n3\tAdvance");
        printf("\nEnter difficulty (1-3): ");
        scanf("%d", &difficulty);
    } while ( (0 <= difficulty && difficulty >= 4 ) || (0 >= difficulty && difficulty <= 4) );
    
    difficulty -= 1;
    startTime = time(NULL);

    for ( x = 0; x < 5; x++ )
    {
        /* DISPLAY TEXT FOR A FEW SECONDS */
        while ( (startTime + iTime[difficulty]) > time(NULL) )
        {
            if ( displayed == 0 )
            {
                printf("\nFind a word in: \n\n");
                printf("%s\n\n", strGame[x]);
                displayed = 1;
            } //end if
        } //end while loop

        system("clear");
        printf("\nEnter word found: ");

        scanf("%s", answer);
        checkAnswer(strAnswers[x], answer, &iPoints);

        printf("\nYou got %d points out of 5\n", iPoints);

        displayed = 0;
        startTime = time(NULL);
    } //end for loop
    return 0;
} //end main

void checkAnswer(char* string1, char string2[], int* iPoints) {
    int x;
    /* convert answer to UPPER CASE to perform a valid comparison */
    for ( x = 0; x <= strlen(string2); x++ )
        string2[x] = toupper(string2[x]);
        if ( strcmp(string1, string2) == 0 )
        {
            printf("\nGreat job!\n");
            *iPoints += 1;
        }
        else
        {
            printf("\nSorry, word not found!\n");
            *iPoints -= 1;
        }
} //end checkAnswer

/* int main() {
    char color[12] = {'\0'};

    printf("Enter your favorite color: ");
    scanf("%s", color);
    printf("\nYor Entered %s", color);

    return 0;
} */

/* int main() {
    char *strName[5] = {0};
    char answer[80] = {0};
    int x;
    strName[0] = "Michael";
    strName[1] = "Sheila";
    strName[2] = "Lomus";
    strName[3] = "Nelson";
    strName[4] = "Emma";

    printf("\nNames in pointer array of type char:\n\n");
    for ( x = 0; x < 5; x++ )
        printf("\n%s", strName[x]);

    return 0;
} */

/* int main() {
    char* colors[3][10] = {'\0'};

    printf("\nEnter 3 colors seperated by spaces: ");
    scanf("%s %s %s", colors[0], colors[1], colors[2]);

    printf("\nYou entered: ");
    printf("%s %s %s\n", colors[0], colors[1], colors[2]);

    return 0;
} */
/*
int main() {
     char* str1 = "123.79";
    char* str2 = "55";
    float x;
    int y;

    printf("\nString 1 is \"%s\"\n", str1);
    printf("\nString 2 is \"%s\"\n", str2);

    x = atof(str1);
    y = atoi(str2);

    printf("\nString 1 converted to float is %.2f", x);
    printf("\nString 2 converted to integer is %d\n", y);
    return 0;
} */

/* int main() {
    char *str1 = "Michael";
    char str2[] = "Vine";

    printf("\nThe length of string 1 is %d", strlen(str1));
    printf("\nThe length of string 2 is %d\n", strlen(str2));
    return 0;
} // end main */

//function prototypes
/* void convertL(char*);
void convertU(char*);

int main() {
    char name1[] = "Michael";
    char name2[] = "Vine";

    convertL(name1);
    convertU(name2);
    return 0;
} //end main

void convertL(char* str) {
    for (int i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
    
    printf("\nFirst name converted to lower case is %s\n", str);
} //end convertL

void convertU(char* str) {
    for ( int i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
    
    printf("\nLast name converted to upper case is %s\n", str);
} //end convertU
 */

/* int main() {
    char str1[11] = "1";
    char* str2 = "C Language";

    printf("\nString 1 now contains %s", strcpy(str1, str2));
    return 0;
} //end main */

/* int main() {
    char str1[40] = "Computer Science ";
    char str2[] = "is applied mathematics";

    printf("\n%s\n", strcat(str1, str2));
    return 0;
} //end main */

/* int main() {
    char* str1 = "A";
    char* str2 = "A";
    char* str3 = "!";

    printf("\nstr1 = %s\n", str1);
    printf("\nstr2 = %s\n", str2);
    printf("\nstr3 = %s\n", str3);
    printf("\nstrcmp(str1, str2) = %d\n", strcmp(str1, str2));
    printf("\nstrcmp(str1, str3) = %d\n", strcmp(str1, str3));
    printf("\nstrcmp(str3, str1) = %d\n", strcmp(str3, str1));

    if ( strcmp(str1, str2) == 0 )
        printf("\nLetter A is equal to letter A\n");
    if ( strcmp(str1, str3) > 0 )
        printf("Letter A is greater than character !\n");
    if ( strcmp(str3, str1) < 0 )
        printf("Character ! is less than letter A\n");

    return 0;
} //end main */

/* int main() {
    char* str1 = "Analyzing strings with the strstr() function";
    char* str2 = "ing";
    char* str3 = "xyz";

    printf("\nstr1 = %s\n", str1);
    printf("\nstr2 = %s\n", str2);
    printf("\nstr3 = %s\n", str3);

    if ( strstr(str2, str1) != NULL )
        printf("\nstr2 was found in str1\n");
    else
        printf("\nstr2 was not found\n");
    return 0;
} */
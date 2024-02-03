#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Chapter Program (Character Roster)
int main() {
    int response;
    char quit;
    char lName[20];
    char fName[20];
    char level[3];
    FILE* pWrite;
    FILE* pRead;

    printf("\n\tCharacter Roster\n");
    printf("\n1\tAdd New CHaracter\n");
    printf("2\tList Characters\n\n");
    printf("Select an option: ");

    scanf("%d", &response);

    if ( response == 1 )
    {
        /* user is adding a new character */
        while ( tolower(quit) != 'q')
        {
            printf("\nEnter character's first name: ");
            scanf("%s", fName);

            printf("\nENter character's last name: ");
            scanf("%s", lName);

            printf("\nEnter character level: ");
            scanf("%s", level);

            pWrite = fopen("characterRoster.dat", "a");

            if ( pWrite != NULL )
            {
               fprintf(pWrite, "%s\t%s\t%s\n", fName, lName, level);
               fclose(pWrite); 
            } else goto ErrorHandler; //there is a file i/o error

            getchar();
            printf("\nEnter 'q' to quit anything else to continue: ");
            scanf("%c", &quit);
        } //end loop
    }
    else if ( response == 2 )
    {
        /* user wants to list all characters */
        pRead = fopen("characterRoster.dat", "r");

        if ( pRead != NULL )
        {
            printf("\nCharacter Roster\n");

            while ( !feof(pRead) )
            {
                fscanf(pRead, "%s%s%s", fName, lName, level);
                if ( feof(pRead) )
                    break;
                printf("\n%s %s\t%s", fName, lName, level);
            } //end loop
            
            printf("\n");
        } else goto ErrorHandler;
    } //end if

    exit(EXIT_SUCCESS); //exit program normally
    ErrorHandler:
        perror("The following error occured");
        exit(EXIT_FAILURE);

} //end main

// reading from the file

/* int main() {
    //create 3 file pointers
    FILE* pRead;
    FILE* pWrite;
    FILE* pAppend;
    return 0;
} //end main */

/* int main() {
    FILE* pRead;
    char name[10];
    pRead = fopen("file1.dat", "r");

    if ( pRead == NULL ) {
        printf("\nFile cannot be opened\n");
    }
    else
        printf("\nFile opened for reading\n");
    while ( !feof(pRead) ) {
        printf("%s\n", name);
        fscanf(pRead, "%s", name);
    } //end loop
    return 0;
} //end main */

/* #include <stdio.h>

int main() {
    FILE* pRead;
    char name[10];
    char hobby[15];
    pRead = fopen("hobbies.dat", "r");
    if ( pRead == NULL )
    {
        printf("\nFile cannot be opened!\n");
        return 1;
    }
    else
        printf("\nName\tHobby\n\n");
        fscanf(pRead, "%s%s", name, hobby); //read from file
    
        while ( !feof(pRead) ) {
            printf("%s\t%s\n", name, hobby);
            fscanf(pRead, "%s%s", name, hobby);
        } //end loop
    return 0;
} //end main */

// writing to the file

/* int main() {
    FILE* pWrite;
    char fName[20];
    char lName[20];
    char game[15];
    int score;
    pWrite = fopen("highscore.dat", "w");

    if ( pWrite == NULL )
    {
        printf("\nFile not opened!\n");
        return 1;
    } 
    else
    {
        printf("\nEnter first name, last name, game name, and game score\n\n");
        printf("Enter data seperated by spaced: ");
        //store data entered by user into variables
        scanf("%s%s%s%d", fName, lName, game, &score);
        //write variable contents seperated by tabs
        fprintf(pWrite, "%s\t%s\t%s\t%d\n", fName, lName, game, score);
        fclose(pWrite);
    } //end if

    return 0;
} //end main */
/* 
void readData(void);

int main() {
    FILE* pWrite;
    char name[10] = "John";
    char hobby[15] = "Doe";

    printf("\nCurrent file contents:\n");
    readData();

    //open file for append
    pWrite = fopen("hobbies.dat", "a");
    if ( pWrite == NULL )
        printf("\nFile not found!\n");
    else
    {
        //append record information to data file
        fprintf(pWrite, "%s\t%s\n", name, hobby);
        fclose(pWrite);
        readData();
    }
    return 0;
} //end line

void readData() {
    FILE* pRead;
    char name[10];
    char hobby[15];
    
    //open data file for read access only
    pRead = fopen("hobbies.dat","r");
    if ( pRead == NULL )
        printf("\nFile not found!\n");
    else
    {
        printf("\nName\tHobby\n\n");
        fscanf(pRead, "%s%s", name, hobby);

        while ( !feof(pRead) )
        {
            printf("%s\t%s\n", name, hobby);
            fscanf(pRead, "%s%s", name, hobby);
        } //end loop
    } //end if
    fclose(pRead);
} //end function readData */

/* #include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* pRead;
    char name[10];
    char hobby[15];
    pRead = fopen("hobies.dat", "r");
    if ( pRead == NULL )
        goto ErrorHandler;
    else
    {
        printf("\nName\tHobby\n\n");
        fscanf(pRead, "%s%s", name, hobby);
        while ( !feof(pRead) )
        {
            printf("%s\t%s\n", name, hobby);
            fscanf(pRead, "%s%s", name, hobby);
        } //end loop
    } //end if
    
    ErrorHandler:
        perror("The following error occurred");
        exit(EXIT_FAILURE); //exit program with error
    return 0;
} //end main */
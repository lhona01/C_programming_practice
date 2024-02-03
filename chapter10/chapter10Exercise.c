#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* int main() {
    char* movieName;
    movieName = (char*) calloc( 80, sizeof(char));

    if ( movieName == NULL ) {
        printf("\nOut of Memory!\n");
        return 1;
    } //end if

    printf("\nEnter your favorite movie name: ");
    scanf("%[^\n]", movieName);

    printf("\nMovie name: %s\n", movieName);
    free(movieName);
    return 0;
} //end main */

// read users name from stdin fgets

//Use loop to iterate through the memory allocated, counting the number of charactes in username
//loop should stop when a memory segment is reached that was not used for reading and storing username

//print the username to stdout

/* int main() {
    char* userName;
    int x;
    int numOfChar = 0;
    userName = (char*) calloc(80, sizeof(char));

    if ( userName == NULL )
    {
        printf("\nOut of memory!\n");
        return 1;
    }; //end if

    printf("\nEnter userName: ");
    gets(userName);

    for ( x = 0; x < strlen(userName); x++ );

    printf("\nThe number of characters in userName is: %d\n", x);
    return 0;
} //end main */

typedef struct phoneBook {
    char name[30];
    char number[10];
} phone; //end struct phoneBook

// function prototype
void addContact( phone* , int);
void printContacts( phone*, int );

int main() {
    phone* contact;
    int response;
    int iContactLength = 1;
    char cCompareName[30] = {0};

    do {
        printf("\n\tSelect an Option\n");
        printf("1. Add Contact\n");
        printf("2. Modify contact\n");
        printf("3. Quit program\n");
        printf("\n\tSelect Task: ");
        scanf("%d", &response);


        if ( response == 1) {
            if ( iContactLength == 1 )
                contact = (phone*) calloc(iContactLength, sizeof(phone));
            else if (iContactLength > 1)
                contact = (phone*) realloc(contact, iContactLength * sizeof(phone)); //end if
            
            if ( contact == NULL ) {
                printf("\nOut of memory!\n");
                return 1;
            }; //end if

            addContact(contact, iContactLength);
            iContactLength += 1;
        }
        else if ( response == 2 ) {
            // printf("length: %d\n", iContactLength);
            printContacts(contact, iContactLength);

            printf("Enter the name as displayed that you want to modify: ");
            gets(cCompareName);

            system("clear");

            for ( int i = 0; i < iContactLength; i++ ) {
                if ( strcmp(contact[i].name, cCompareName) == 0 ) {
                    printf("\nEnter new name: ");
                    gets(contact[i].name);
                    printf("new number: ");
                    gets(contact[i].number);
                    break;
                }
                else
                    continue; //end if
            } //end for loop
        } //end if
    } while ( response != 3 && sizeof(response) == sizeof(int)); //end while loop

    return 0;
}; //end main

void addContact(phone* contact, int length) {
    system("clear");
    getchar();
    
    printf("\nContact Name: ");
    gets(contact[length - 1].name);
    printf("Number: ");
    gets(contact[length - 1].number);
    system("clear");
    printf("\n%s added to contact!", contact[length - 1].name);
}; //end function addContact

void printContacts( phone* contact, int length ) {
    system("clear");
    printf("List of Contact to modify:\n");
    for ( int i = 0; i < length; i++ ) {
        printf("%s\n", contact[i].name);
    }; //end for loop
    getchar();
} //end function printContact
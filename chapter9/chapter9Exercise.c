#include <stdio.h>
#include <stdlib.h>

typedef struct phoneBook {
    char name[30];
    char address[100];
    char number[10];
} contact;

void addContact( contact* );
void printContact( contact[] , int );

int main() {
    int selectedOption = 0;
    contact myContact[5];
    int numContacts = 0;

    do {
        printf("\n\tSelect Option\n");
        printf("1\tAdd Contact.\n");
        printf("2\tPrint Contacts.\n");
        printf("\nEnter you selection (1 or 2): ");
        scanf("%d", &selectedOption);
        getchar();

        if ( selectedOption == 1 )
        {
            addContact( &myContact[numContacts] );
            numContacts += 1;
        }
       else if ( selectedOption == 2 )
            printContact( myContact, numContacts); //end if

    } while ( (selectedOption != 1 || selectedOption != 2) && numContacts < 5 ); //end loop

    printf("\nProgram reached its capacity to hold contact.\n");
    return 0;
}; //end main

void addContact( contact* myContacts ) {
    system("clear");
    printf("\nName: \n");
    fgets(myContacts->name, sizeof(myContacts->name), stdin);
    printf("Address: \n");
    fgets(myContacts->address, sizeof(myContacts->address), stdin);
    printf("Phone Number: \n");
    fgets(myContacts->number, sizeof(myContacts->number), stdin);

    system("clear");
    printf("Added %s to Contact!\n", myContacts->name);
}; //end function addContact

void printContact( contact contacts[], int numContacts ) {
    system("clear");

    int i = 0;
    if ( numContacts!= 0 )
    {
        printf("\n\tYour Contacts \n");
        for ( i; i < numContacts; i++ )
        {
            printf("\nName: %s", contacts[i].name);
            printf("Address: %s", contacts[i].address);
            printf("Number: %s\n", contacts[i].number);
        }; //end for loop
    } else
        printf("\nYour Contacts is empty!\n");
}; //end function printContacts

/* typedef struct veichle{
    char* make;
    char* model;
    int year;
    int miles;
} car;

int main() {
    car myCar[3] = {
        {"Chevrolet","Cruze",2016,80000},
        {"Mclaren", "Senna", 2018, 1000},
        {"Ford", "GT", 2017, 50000}
    };

    for ( int i = 0; i < sizeof(myCar)/sizeof(int); i++ ){
        printf("\nCar make: %s\n", myCar[i].make);
        printf("model: %s\n",myCar[i].model);
        printf("year: %d\n",myCar[i].year);
        printf("miles: %d\n\n", myCar[i].miles);
    }; //end for loop
    return 0;
}; */
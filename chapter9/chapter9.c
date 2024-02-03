#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//define new data type
typedef struct deck {
    char type[10];
    char used;
    int value;
} aDeck;

//function prototype
void shuffle(aDeck*);

int main() {
    int x, y;
    aDeck myDeck[52];
    srand(time(NULL));

    //initialize structure array
    for ( x = 0; x < 4; x++ )
    {
        for ( y = 0; y < 13; y++ )
        {
           switch(x)
           {
                case 0:
                    strcpy(myDeck[y].type, "Diamond");
                    myDeck[y].value = y;
                    myDeck[y].used = 'n';
                    break;
                case 1:
                    strcpy(myDeck[y + 13].type, "Clubs");
                    myDeck[y + 13].value = y;
                    myDeck[y + 13].used = 'n';
                    break;
                case 2:
                    strcpy(myDeck[y + 26].type, "Hearts");
                    myDeck[y + 26].value = y;
                    myDeck[y + 26].used = 'n';
                    break;
                case 3:
                    strcpy(myDeck[y + 39].type, "Spades");
                    myDeck[y + 39].value = y;
                    myDeck[y + 39].used = 'n';
                    break;
           } //end switch 
        } //end inner loop
    } //end outer loop

    shuffle(&myDeck);
    return 0;
} //end main

void shuffle(aDeck* thisDeck) {
    int x;
    int iRnd;
    int found = 0;
    system("clear");

    printf("\nYour five cards are: \n\n");
    while ( found < 5 )
    {
        iRnd = rand() % 51;
        if ( thisDeck[iRnd].used == 'n' )
        {
            switch ( thisDeck[iRnd].value )
            {
                case 12:
                    printf("Ace of %s\n", thisDeck[iRnd].type);
                    break;
                case 11:
                    printf("King of %s\n", thisDeck[iRnd].type);
                    break;
                case 10:
                    printf("Queen of %s\n", thisDeck[iRnd].type);
                    break;
                case 9:
                    printf("Jack of %s\n", thisDeck[iRnd].type);
                    break;
                default:
                    printf("%d of %s\n", thisDeck[iRnd].value + 2, thisDeck[iRnd].type);
                    break;
            } //end switch
            
            thisDeck[iRnd].used = 'y';
            found = found + 1;
        } //end if
    } //end while loop
} //end shuffle

/* typedef struct employee {
    char fname[10];
    char lname[10];
    int id;
    float salary;
} emp;

int main() {
    //create an istance of an employee structure
    emp emp1;

    //assign values to members
    strcpy(emp1.fname, "Keith");
    strcpy(emp1.lname, "Davenpont");
    emp1.id = 123;
    emp1.salary = 50000.00;

    //print member contents
    printf("\nFirst Name: %s", emp1.fname);
    printf("\nLast Name: %s", emp1.lname);
    printf("\nEmployee Id: %d", emp1.id);
    printf("\nSalary: %.2f\n", emp1.salary);

    return 0;
} //end main */

/* typedef struct scores {
    char name[10];
    int score;
} s;

int main() {
    s highScores[3];
    int x;

    //assign values to members
    strcpy(highScores[0].name, "Hunter");
    highScores[0].score = 40768;
    strcpy(highScores[1].name, "Kenya");
    highScores[1].score = 38565;
    strcpy(highScores[2].name, "Apollo");
    highScores[2].score = 35985;

    //print array contents
    for ( x = 0; x < 3; x++ )
        printf("\n%s\t%d\n", highScores[x].name, highScores[x].score);
    
    return 0;
} //end main */

/* typedef struct employee {
    int id;
    char name[10];
    float salary;
} e;

void processEmp(e); //supply prototype with structure alias name

int main() {
    e emp1 = {0, 0, 0};
    processEmp(emp1);

    printf("\nID: %d", emp1.id);
    printf("\nName: %s", emp1.name);
    printf("\nSalary: %.2f\n", emp1.salary);
    return 0;
} //end main

void processEmp(e emp) {
    emp.id = 123;
    strcpy(emp.name, "Emma");
    emp.salary = 12345.12;
} //end processEmp */

/* int main() {
    typedef struct player {
        char name[15];
        float score;
    } p;

    p aPlayer = {0, 0};
    p* ptrPlayer;
    ptrPlayer = &aPlayer;

    strcpy(ptrPlayer->name, "Pinball Wizard");
    ptrPlayer->score = 100000.00;

    printf("\nPlayer: %s\n", ptrPlayer->name);
    printf("Score: %.2f\n", ptrPlayer->score);

    return 0;
} //end main */

/* typedef struct employee {
    int id;
    char name[10];
    float salary;
} emp;

void processEmp(emp*);

int main() {
    emp emp1[3] = {0, 0, 0};
    int x;
    processEmp(&emp1);

    for ( x = 0; x < 3; x++ ) {
        printf("\nID: %d\n", emp1[x].id);
        printf("\nName: %s\n", emp1[x].name);
        printf("\nSalary: %.2f\n", emp1[x].salary);
    }

    return 0;
} //end main

void processEmp(emp* e) {
    e[0].id = 123;
    strcpy(e[0].name, "Sheila");
    e[0].salary = 65000.00;
    e[1].id = 234;
    strcpy(e[1].name, "Hunter");
    e[1].salary = 456;
} */

/* union phoneBook {
    char *name;
    char *number;
    char *address;
};

struct magazine {
    char *name;
    char *author;
    int isbn;
};

int main() {
    union phoneBook aBook;
    struct magazine aMagazine;

    printf("\nUnion Details\n");
    printf("Size of aBook: %d\n", sizeof(aBook));
    printf("Address of aBook.name: %p\n", &aBook.name);
    printf("Address of aBook.number: %p\n", &aBook.number);
    printf("Address of aBook.address: %p\n", &aBook.address);

    printf("\nStructure Details\n");
    printf("Size of aMagazine: %d\n", sizeof(aMagazine));
    printf("Address of aMagazine.name: %p\n", &aMagazine.name);
    printf("Address of aMagazine.number: %p\n", &aMagazine.author);
    printf("Address of aMagazine.isbn: %p\n", &aMagazine.isbn);

    return 0;
} //end main */

/* int main() {
    int x = 12;
    int y = 5;

    printf("\nWithout Typecasting\n");
    printf("12 \\ 5 = %.2f\n", x/y);
    printf("\nWith Typecasting\n");
    printf("12 \\ 5 = %.2f\n", (float)x / (float)y);
    return 0;
} //end main */
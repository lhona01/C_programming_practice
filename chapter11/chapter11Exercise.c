/* #include <stdio.h>
#include <stdlib.h>

void readFile(char*, char*);

int main() {
    int iResponse = 0;
    char superName[30];
    char superPower[30];
    int x;

    FILE* pWrite;
    pWrite = fopen("superheroes.dat", "a");

    char cResponse;
    printf("\nDo You want to read File (y/n): ");
    scanf("%c", &cResponse);

    if ( cResponse == 'y' )
        readFile(superName, superPower);

    if ( pWrite != NULL )
    {
        printf("\n\tHow many SuperHeroes do you want to Enter:");
        scanf("%d", &iResponse);

        for ( x = 0; x < iResponse; x++ )
        {
            printf("Enter SuperHero Name: ");
            scanf("%s", superName);

            printf("Enter his/her SuperPower: ");
            scanf("%s", superPower);

            fprintf(pWrite, "%s,%s\n", superName, superPower);
            printf("\n");
        } //end loop
    } else goto ErrorHandler;

    fclose(pWrite);
    exit(EXIT_SUCCESS);
    ErrorHandler: perror("The following program has error!");
    exit(EXIT_FAILURE);
} //end main

void readFile(char* name, char* power) {
    FILE* pRead;
    pRead = fopen("superheroes.dat", "r");

    if ( pRead == NULL )
        goto ErrorHandler;
    else
    {
        printf("\nSuperHero\tSuperPower\n");
        while ( !feof(pRead) )
        {
            fscanf(pRead, "%s%s", name, power);
            if ( feof(pRead) )
                break;
            printf("%s\t\t%s\n", name, power);
        } //end loop
    } //end if

    fclose(pRead);
    exit(EXIT_SUCCESS);
    ErrorHandler: perror("error!");
    exit(EXIT_FAILURE);
} //end function readFile */

//-------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void enterMonster(char*, char*, char*);
void printMonster(char*, char*, char*);

int main() {
    char monsterType[30];
    char specialAbility[30];
    char weakness[30];
    char cResponse;

    while ( tolower(cResponse) != 'q' ) 
    {
        printf("\n\tMenu\n\n");
        printf("1\tEnter a monster.\n");
        printf("2\tList all monsters.\n");
        printf("Enter (q/Q) to Quit.\n");
        printf("\nEnter yout selection: ");
        scanf("%c", &cResponse);

        if ( cResponse == '1' )
        {
            enterMonster(monsterType, specialAbility, weakness);
            system("clear");
            getchar();
        }
        else if ( cResponse == '2' )
        {
            printMonster(monsterType, specialAbility, weakness);
            getchar();
        } //end if

    } //end loop
} //end main

void enterMonster(char* type, char* ability, char* weakness)
{
    system("clear");
    FILE* pWrite;
    pWrite = fopen("monster.dat", "a");
    if ( pWrite == NULL )
        printf("\nFile couldn't be opened\n");
    else
    {
        printf("\nEnter monster type: ");
        scanf("%s", type);
        printf("Monsters Ability: ");
        scanf("%s", ability);
        printf("Monsters Weakness: ");
        scanf("%s", weakness);
    } //end if

    fprintf(pWrite, "%s\t%s\t%s\n", type, ability, weakness);
    fclose(pWrite);
} //end function enterMonster

void printMonster(char* type, char* ability, char* weakness)
{
    system("clear");
    FILE* pRead;
    pRead = fopen("monster.dat", "r");
    if ( pRead == NULL )
        printf("\nFile couldn't be opened\n");
    else
    {   
        printf("\nMonseter Type\tAbility\tWeakness\n\n");
        while ( !feof(pRead) )
        {
            fscanf(pRead, "%s%s%s", type, ability, weakness);
            if ( feof(pRead) )
                break;
            printf("\t%s\t%s\t%s\n", type, ability, weakness);
        } //end loop
    } //end if
    fclose(pRead);
} //end function printMonster
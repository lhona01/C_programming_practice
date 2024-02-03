#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayBoard();
int verifySelection(int, int, int);
void checkForWin();

/******************
global variables
*********************/
char board[3][3];
char cWhoWon = ' ';
int iCurrentPlayer = 1;

/******************
 begin main function
 ******************/
int main() {
    int x, y;
    int iRowNum = 0;
    int iColumnNum = 0;

    for ( x = 0; x < 3; x++ ) {
        for ( y = 0; y < 3; y++)
        {
            board[x][y] = ' ';
        }//end inner loop
    }//end loop
    displayBoard();

    while ( cWhoWon == ' ') {
        srand(time(NULL));
        printf("\n%c\n", cWhoWon);
            printf("iCurrentPlayer = %d", iCurrentPlayer);
        if ( iCurrentPlayer == 1 || iCurrentPlayer == 0 ) {
            printf("\nPLAYER X\n");
            printf("Enter row (1-3): ");
            scanf("%d", &iRowNum);
            printf("Enter column (1-3): ");
            scanf("%d", &iColumnNum);
            if ( verifySelection(iRowNum, iColumnNum, iCurrentPlayer) == 1 )
                iCurrentPlayer = 1;
            else
                iCurrentPlayer = 2;
        }
        else {
            printf("\nAI PLAYER O\n");
            iRowNum = (rand() % 3 + 1);
            iColumnNum = (rand() % 3 + 1);
            if ( verifySelection(iRowNum, iColumnNum, iCurrentPlayer) == 2 )
                iCurrentPlayer == 2;
            else
                iCurrentPlayer = 1;
        } // end if
        displayBoard();
        checkForWin();
    } // end loop
    return 0;
}

/*****************
 begin funtion definition
*******************/
void displayBoard() {
    system("clear");
    printf("\n\t|\t|\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[0][0], board[0][1], board[0][2]);
    printf("--------|-------|--------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[1][0], board[1][1], board[1][2]);
    printf("--------|-------|--------\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[2][0], board[2][1], board[2][2]);
    printf("\t|\t|\n");
} //end funtion definition

/**************
 * begin funtion definition
**************/

int verifySelection(int iRowNum, int iColumnNum, int iPlayer) {
    if ( board[iRowNum - 1][iColumnNum - 1] == ' ' && (iPlayer == 1 || iPlayer == 0) ) {
        board[iRowNum - 1][iColumnNum - 1] = 'X';
        return 0;
    }
    else if ( board[iRowNum - 1][iColumnNum - 1] == ' ' && iPlayer == 2 ) {
        board[iRowNum - 1][iColumnNum - 1] = 'O';
        return 0;
    }
    else 
        return 1;
} //end funtion definition

/*************
 * begin funtion definition
******************/
void checkForWin() {
    int catTotal;
    int x, y;

    if ( board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' )
        cWhoWon = 'X';
    else if ( board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' )
        cWhoWon = 'X';
    else if ( board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' )
        cWhoWon = 'X';
    else if ( board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' )
        cWhoWon = 'X';
    else if ( board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' )
        cWhoWon = 'X';
    else if ( board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' )
        cWhoWon = 'X';
    else if ( board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' )
        cWhoWon = 'X';
    else if ( board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X' )
        cWhoWon = 'X';

    if ( board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O' )
        cWhoWon = 'O';
    else if ( board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' )
        cWhoWon = 'O';
    else if ( board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O' )
        cWhoWon = 'O';
    else if ( board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O' )
        cWhoWon = 'O';
    else if ( board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' )
        cWhoWon = 'O';
    else if ( board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O' )
        cWhoWon = 'O';
    else if ( board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' )
        cWhoWon = 'O';
    else if ( board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O' )
        cWhoWon = 'O';
    
    if ( cWhoWon == 'X' ) {
        printf("\nX Wins!\n");
        return;
    }

    if ( cWhoWon == 'O' ) {
        printf("\nO Wins!\n");
        return;
    }

    // check for draw
    for ( x = 0; x < 3; x++ ) {
        for ( y = 0; y < 3; y++ )
        {
            if ( board[x][y] != 0 )
                catTotal += 1;
        }//end inner loop
    } // end for loop
    if ( catTotal == 9 ) {
        cWhoWon = 'C';
        printf("\nCAT Game!\n");
        return;
    } // end if
} // end function definition
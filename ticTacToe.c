#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Tic Tac Toe game in between 2 players or player vs computer

int intro();
void printBoard(char state[]);
void makeTurn(int turns);
char determineXY(int turns);

int main() {

    char state [9];
    state[1] = ' ';
    state[2] = ' ';
    state[3] = ' ';
    state[4] = ' ';
    state[5] = ' ';
    state[6] = ' ';
    state[7] = ' ';
    state[8] = ' ';
    state[9] = ' ';
    int turns = 0;
    int x;
    int y;

    int choice = intro(); //Prompts user and stores game choice
    //NEED to make choice do something

    //print current status of the board
    printBoard(state);

    while (turns < 9) {
        
        makeTurn(turns);

        switch(x, y) {
        case '1, 1' :
            state[1] = determineXY(turns);
            break;
        case '1, 2' :
            state[2] = determineXY(turns);
            break;
        case '1, 3' :
            state[3] = determineXY(turns);
            break;
        case '2, 1' :
            state[4] = determineXY(turns);
            break;
        case '2, 2' :
            state[5] = determineXY(turns);
            break;
        case '2, 3' :
            state[6] = determineXY(turns);
            break;
        case '3, 1' :
            state[7] = determineXY(turns);
            break;
        case '3, 2' :
            state[8] = determineXY(turns);
            break;
        case '3, 3' :
            state[9] = determineXY(turns);
            break;
    }
    turns++;
    }
    
    //prompt player/computer to make their move

    //print out new status

    //repeat


    return 0;
}

int intro () {
    int choice; //tracks whether user wants to play vs computer or other player
    printf("===========================\n");
    printf("WELCOME TO TIC TAC TOE!\n");
    printf("1 --- person vs. person\n");
    printf("2 --- person vs. random computer\n");
    printf("Enter your choice (1 or 2):\n===========================\n");
    scanf("%d", &choice);
    printf("You have entered choice %d\n", choice);
    return choice;
}

void printBoard (char state[]) {
    printf("+-------------+\n | %c | %c | %c |\n+-------------+\n | %c | %c | %c |\n+-------------+\n | %c | %c | %c |\n+-------------+\n", state[1], state[2], state[3], state[4], state[5], state[6], state[7], state[8], state[9]);
}
char determineXY (int turns) {
     char player; //tracks whether to add an X or Y
     
     if (turns%2 == 0) {
        player = 'X';
     }
     else {
        player = 'Y';
     }

    return player;
}

void makeTurn(int turns) {
    int A = 0; //tracks row
    int B = 0; //tracks column
    int player = 0;

    if (determineXY(turns) == 'X') {
        player = 1;
    }
    else {
        player = 2;
    }
    printf("Player%d: make your move");
    scanf("%d %d", &A, &B);
}
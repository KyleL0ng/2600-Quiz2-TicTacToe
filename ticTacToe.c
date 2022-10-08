#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Tic Tac Toe game in between 2 players or player vs computer

int intro();
void printBoard(char state[]);
char determineXY(int turns);

int main()
{

    char state[9];
    state[0] = ' ';
    state[1] = ' ';
    state[2] = ' ';
    state[3] = ' ';
    state[4] = ' ';
    state[5] = ' ';
    state[6] = ' ';
    state[7] = ' ';
    state[8] = ' ';
    int turns = 0;
    int x;
    int y;

    int choice = intro(); // Prompts user and stores game choice
    // NEED to make choice do something

    // print current status of the board
    printBoard(state);

    while (turns < 9)
    {
        int A = 0; // tracks row
        int B = 0; // tracks column
        int player = 0;
        char result[2];

        if (determineXY(turns) == 'X')
        {
            player = 1;
        }
        else
        {
            player = 2;
        }
        printf("Player%d: make your move", player);
        scanf("%d %d", &A, &B);
        if (A > 3)
        {
            printf("invalid move");
            scanf("%d %d", &A, &B);
        }
        if (A < 1)
        {
            printf("invalid move");
            scanf("%d %d", &A, &B);
        }
        if (B > 3)
        {
            printf("invalid move");
            scanf("%d %d", &A, &B);
        }
        if (B < 1)
        {
            printf("invalid move");
            scanf("%d %d", &A, &B);
        }

        if (A == 1)
        {
            if (B == 1)
            {
                // if (state[0] != ' ')
                // {
                //     printf("invalid move");
                //     scanf("%d %d", &A, &B);
                // }
                // else
                // {
                    state[0] = determineXY(turns);
               // }
            }
            else if (B == 2)
            {
                state[1] = determineXY(turns);
            }
            else if (B == 3)
            {
                state[2] = determineXY(turns);
            }
        }
        else if (A == 2)
        {
            if (B == 1)
            {
                state[3] = determineXY(turns);
            }
            else if (B == 2)
            {
                state[4] = determineXY(turns);
            }
            else if (B == 3)
            {
                state[5] = determineXY(turns);
            }
        }
        else if (A == 3)
        {
            if (B == 1)
            {
                state[6] = determineXY(turns);
            }
            else if (B == 2)
            {
                state[7] = determineXY(turns);
            }
            else if (B == 3)
            {
                state[8] = determineXY(turns);
            }
        }
        printBoard(state);
        turns++;
    }

    // prompt player/computer to make their move

    // print out new status

    // repeat

    return 0;
}

int intro()
{
    int choice; // tracks whether user wants to play vs computer or other player
    printf("===========================\n");
    printf("WELCOME TO TIC TAC TOE!\n");
    printf("1 --- person vs. person\n");
    printf("2 --- person vs. random computer\n");
    printf("Enter your choice (1 or 2):\n===========================\n");
    scanf("%d", &choice);
    printf("You have entered choice %d\n", choice);
    return choice;
}

void printBoard(char state[])
{
    printf("+-------------+\n | %c | %c | %c |\n+-------------+\n | %c | %c | %c |\n+-------------+\n | %c | %c | %c |\n+-------------+\n", state[0], state[1], state[2], state[3], state[4], state[5], state[6], state[7], state[8]);
}
char determineXY(int turns)
{
    char player; // tracks whether to add an X or Y

    if (turns % 2 == 0)
    {
        player = 'X';
    }
    else
    {
        player = 'Y';
    }

    return player;
}
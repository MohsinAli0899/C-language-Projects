#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    //if char1>char2 then return 1 otherwise 0 and if char1==char2 return -1.
    if ((char1 == 'r' && char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r' && char1 == 's'))
    {
        return 0;
    }
    else if ((char1 == 'p' && char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p' && char1 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's' && char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's' && char1 == 'p'))
    {
        return 0;
    }
    else if (char1 == char2)
    {
        return -1;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar, name[20];
    char dict[] = {'r', 'p', 's'};
    printf("****Welcome to Rock, Paper, and Scissors****\n");
    printf("\nEnter your name: ");
    scanf("%s", &name);
    for (int i = 0; i < 3; i++)
    {
        printf("\nChoose 1 for Rock, 2 for Paper, and 3 for Scissors\n");
        //Take Player input
        printf("\n%s's turn: ");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("You chose: %c\n", playerchar);
        // generate Computer's input
        printf("\nComputer's turn \n");
        temp = generaterandomnumber(3) + 1;
        compchar = dict[temp - 1];
        printf("Computer chose: %c\n", compchar);
        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("\nComputer wins the round!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("\nDraw!\n");
        }
        else
        {
            playerscore += 1;
            printf("\nYou win the round!\n");
        }
        printf("\n%s's Score: %d\nComputer's Score: %d\n", name, playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("\n%s Wins!!!!!! Congratulations.");
    }

    else if (playerscore < compscore)
    {
        printf("\nComputer Wins!!!!! Better Luck next Time.");
    }
    else
    {
        printf("\nIt's a Draw!!! Well Played.");
    }
    return 0;
}
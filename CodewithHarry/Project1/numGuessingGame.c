#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{

    // Introduction to Program
    printf("Welcome to the Guess the Number Game\n");
    printf("Computer has choosen an random number, try guessing it !!'\n");
    printf("The user with minimum no of guesses wins\n");
    printf("Goodluck guessing....\n");

    bool play_Again = true; // variable for playing again

    // loop for playing again
    while (play_Again == true)
    {
        // Sets a random number every time we run the program
        srand(time(NULL));
        int rand_num = rand() % 100 + 1; // Chooses random num between 0 to 100
        int guess_num;                   // Variable for the user guess
        int no_of_guesses = 0;           // Variable for num of guesses

        printf("Guess the number :\n");

        // do-While loop
        do
        {
            printf("Try Guessing: ");
            scanf("%d", &guess_num);

            // if loop for the number to be higher or shorter
            if (rand_num > guess_num)
            {
                printf("Try guessing Higher number\n");
            }
            else if (rand_num < guess_num)
            {
                printf("Try guessing Lower number\n");
            }
            else
            {
                printf("Congrats!!\n");
            }
            no_of_guesses++;
        } while (rand_num != guess_num);

        printf("User guessed the number in %d guesses\n", no_of_guesses);
        printf("\n");

        // Asking the player if he wants to continue
        printf("Do you wish to play again!!\n");
        printf("Press for 1 to PLAY\n Press 2 to QUIT :");
        int user_choice; // variable to input from user to play again or not
        scanf("%d", &user_choice);

        // if-loop to play again
        if (user_choice != 1)
        {
            play_Again = false;
            printf("Thanks for playing!!\n");
        }
        else
        {
            printf("GAME RESTARTS\n");
        }
    }

    return 0;
}
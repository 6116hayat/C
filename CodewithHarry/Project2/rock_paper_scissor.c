#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

// Game Function
void Game() {
    printf("Welcome to the Game!!\n\n");

    // Player Choice Variable
    char player_choice[100];
    printf("Choose \n 1->Rock \n 2->Paper \n 3->Scissor\n");
    fgets(player_choice, sizeof(player_choice), stdin);
    
    // Remove the newline character from player_choice
    player_choice[strcspn(player_choice, "\n")] = 0;

    printf("Player Chose : %s\n", player_choice);

    // Computer Choice Variable
    char computer_choice[100];
    // Sets a random number every time we run the program
    srand(time(NULL));
    int rand_num = (rand() % 3) + 1; // Chooses random num between 1 to 3
    // loop
    if (rand_num == 1) {
        strcpy(computer_choice, "rock");
        printf("Computer choice is rock\n");
    } else if (rand_num == 2) {
        strcpy(computer_choice, "paper");
        printf("Computer choice is paper\n");
    } else if (rand_num == 3) {
        strcpy(computer_choice, "scissors");
        printf("Computer choice is scissors\n");
    }

    if (strcmp(player_choice, computer_choice) == 0) {
        printf("It's a tie! Both chose %s.\n", player_choice);
    } else if ((strcmp(player_choice, "rock") == 0 && strcmp(computer_choice, "scissors") == 0) ||
            (strcmp(player_choice, "paper") == 0 && strcmp(computer_choice, "rock") == 0) ||
            (strcmp(player_choice, "scissors") == 0 && strcmp(computer_choice, "paper") == 0)) {
        printf("You win! %s beats %s.\n", player_choice, computer_choice);
    } else {
        printf("You lose! %s beats %s.\n", computer_choice, player_choice);
    }
}

int main() {
    // Function called
    Game();

    return 0;
}

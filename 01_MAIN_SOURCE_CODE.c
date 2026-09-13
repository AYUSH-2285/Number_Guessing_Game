/*
 * ============================================================================
 *                    NUMBER GUESSING GAME - MAIN SOURCE CODE
 * ============================================================================
 * 
 * Project: Number Guessing Game in C Programming
 * College: Chhatrapati Shahu Ji Maharaj University, Kanpur
 * Students: Ayush Kumar Singh & Anurag Deivedi
 * Course: BCA/MCA Mini Project
 * Date: September 2026
 * 
 * Description: A console-based number guessing game with multiple difficulty
 *              levels, input validation, attempt counter, and replay option.
 * 
 * Features:
 *   - Main menu system (Start Game, Instructions, Exit)
 *   - Three difficulty levels: Easy (1-50), Medium (1-100), Hard (1-500)
 *   - Random number generation using rand() and srand()
 *   - Input validation for all user inputs
 *   - Attempt counter with performance feedback
 *   - Replay option after each game
 *   - Modular design with 9 functions
 * 
 * How to Compile:
 *   gcc number_guessing_game.c -o game
 * 
 * How to Run:
 *   Windows: game.exe
 *   Linux/Mac: ./game
 * 
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ============================================================================
 *                           FUNCTION DECLARATIONS
 * ============================================================================
 */

void displayMenu();
void displayInstructions();
void playGame();
int getDifficulty();
void setRange(int difficulty, int *min, int *max);
int getRandomNumber(int min, int max);
int getValidGuess();
void displayResult(int guess, int target, int attempts);
char askPlayAgain();

/* ============================================================================
 *                              MAIN FUNCTION
 * ============================================================================
 * Entry point of the program
 * - Seeds the random number generator
 * - Displays welcome message
 * - Contains main menu loop with switch-case
 * ============================================================================
 */

int main()
{
    int choice;
    char playAgain = 'y';
    
    /* Seed random number generator with current time */
    /* This ensures different random numbers on each run */
    srand(time(NULL));
    
    /* Display welcome message */
    printf("\n========================================\n");
    printf("   Welcome to Number Guessing Game!\n");
    printf("========================================\n\n");
    
    /* Main menu loop - continues until user exits */
    do
    {
        /* Display main menu */
        displayMenu();
        
        /* Get user's choice */
        printf("\nEnter your choice (1-3): ");
        scanf("%d", &choice);
        
        /* Process user's choice using switch statement */
        switch(choice)
        {
            case 1:
                /* Start the game */
                playGame();
                break;
                
            case 2:
                /* Display instructions */
                displayInstructions();
                break;
                
            case 3:
                /* Exit the game */
                printf("\nThank you for playing! Goodbye!\n\n");
                return 0;
                
            default:
                /* Handle invalid menu choice */
                printf("\nInvalid choice! Please enter 1, 2, or 3.\n\n");
                break;
        }
        
        /* Wait for user to press Enter before showing menu again */
        if(choice >= 1 && choice <= 3)
        {
            printf("\nPress Enter to continue...");
            while(getchar() != '\n');  /* Clear input buffer */
            getchar();  /* Wait for Enter key */
        }
        
    } while(1);  /* Loop until user chooses to exit (case 3) */
    
    return 0;
}

/* ============================================================================
 *                         FUNCTION DEFINITIONS
 * ============================================================================
 */

/* ----------------------------------------------------------------------------
 * Function: displayMenu()
 * Purpose: Display the main menu with 3 options
 * Parameters: None
 * Returns: Nothing
 * ----------------------------------------------------------------------------
 */
void displayMenu()
{
    printf("\n========================================\n");
    printf("            MAIN MENU\n");
    printf("========================================\n");
    printf("  1. Start Game\n");
    printf("  2. Instructions\n");
    printf("  3. Exit\n");
    printf("========================================\n");
}

/* ----------------------------------------------------------------------------
 * Function: displayInstructions()
 * Purpose: Display game instructions and tips
 * Parameters: None
 * Returns: Nothing
 * ----------------------------------------------------------------------------
 */
void displayInstructions()
{
    printf("\n========================================\n");
    printf("          GAME INSTRUCTIONS\n");
    printf("========================================\n\n");
    printf("How to Play:\n");
    printf("1. Select a difficulty level (Easy/Medium/Hard)\n");
    printf("2. The computer will generate a random number\n");
    printf("3. Try to guess the number\n");
    printf("4. After each guess, you'll be told if your\n");
    printf("   guess is too high or too low\n");
    printf("5. Keep guessing until you find the number!\n\n");
    
    printf("Difficulty Levels:\n");
    printf("- Easy:   Number between 1 and 50\n");
    printf("- Medium: Number between 1 and 100\n");
    printf("- Hard:   Number between 1 and 500\n\n");
    
    printf("Tips:\n");
    printf("- Use the hints (too high/too low) wisely\n");
    printf("- Try to guess in the middle of the range first\n");
    printf("- Good luck!\n\n");
    
    printf("========================================\n");
}

/* ----------------------------------------------------------------------------
 * Function: getDifficulty()
 * Purpose: Get difficulty level from user with validation
 * Parameters: None
 * Returns: int - difficulty level (1, 2, or 3)
 * ----------------------------------------------------------------------------
 */
int getDifficulty()
{
    int difficulty;
    
    printf("\n========================================\n");
    printf("       SELECT DIFFICULTY LEVEL\n");
    printf("========================================\n");
    printf("  1. Easy (1-50)\n");
    printf("  2. Medium (1-100)\n");
    printf("  3. Hard (1-500)\n");
    printf("========================================\n");
    
    /* Get and validate difficulty choice */
    do
    {
        printf("\nEnter difficulty (1-3): ");
        scanf("%d", &difficulty);
        
        if(difficulty < 1 || difficulty > 3)
        {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
    } while(difficulty < 1 || difficulty > 3);
    
    return difficulty;
}

/* ----------------------------------------------------------------------------
 * Function: setRange()
 * Purpose: Set the number range based on difficulty level
 * Parameters: 
 *   - difficulty: difficulty level (1=Easy, 2=Medium, 3=Hard)
 *   - min: pointer to store minimum range value
 *   - max: pointer to store maximum range value
 * Returns: Nothing (modifies min and max through pointers)
 * ----------------------------------------------------------------------------
 */
void setRange(int difficulty, int *min, int *max)
{
    /* Use switch to set range based on difficulty */
    switch(difficulty)
    {
        case 1:  /* Easy */
            *min = 1;
            *max = 50;
            break;
        case 2:  /* Medium */
            *min = 1;
            *max = 100;
            break;
        case 3:  /* Hard */
            *min = 1;
            *max = 500;
            break;
    }
}

/* ----------------------------------------------------------------------------
 * Function: getRandomNumber()
 * Purpose: Generate a random number within the given range
 * Parameters:
 *   - min: minimum value of range
 *   - max: maximum value of range
 * Returns: int - random number between min and max (inclusive)
 * Formula: rand() % (max - min + 1) + min
 * ----------------------------------------------------------------------------
 */
int getRandomNumber(int min, int max)
{
    /* Generate random number in range [min, max] */
    return (rand() % (max - min + 1)) + min;
}

/* ----------------------------------------------------------------------------
 * Function: getValidGuess()
 * Purpose: Get a valid integer guess from the user with input validation
 * Parameters: None
 * Returns: int - player's guess
 * Note: Handles invalid input (non-numeric) gracefully
 * ----------------------------------------------------------------------------
 */
int getValidGuess()
{
    int guess;
    int isValid = 0;
    
    /* Keep asking until we get a valid integer */
    while(!isValid)
    {
        printf("Enter your guess: ");
        
        /* Check if input is a valid integer */
        if(scanf("%d", &guess) == 1)
        {
            isValid = 1;  /* Valid input received */
        }
        else
        {
            /* Clear invalid input from buffer */
            while(getchar() != '\n');
            printf("Invalid input! Please enter a number.\n");
        }
    }
    
    return guess;
}

/* ----------------------------------------------------------------------------
 * Function: playGame()
 * Purpose: Main game logic - handles the entire guessing game
 * Parameters: None
 * Returns: Nothing
 * Process:
 *   1. Get difficulty level
 *   2. Set range based on difficulty
 *   3. Generate random target number
 *   4. Loop until player guesses correctly
 *   5. Display result and ask for replay
 * ----------------------------------------------------------------------------
 */
void playGame()
{
    int difficulty, minRange, maxRange;
    int targetNumber, playerGuess;
    int attempts = 0;
    char playAgain;
    
    /* Get difficulty level from player */
    difficulty = getDifficulty();
    
    /* Set the range based on difficulty */
    setRange(difficulty, &minRange, &maxRange);
    
    /* Generate the random target number */
    targetNumber = getRandomNumber(minRange, maxRange);
    
    printf("\n========================================\n");
    printf("         GAME STARTED!\n");
    printf("========================================\n");
    printf("I'm thinking of a number between %d and %d.\n", minRange, maxRange);
    printf("Can you guess what it is?\n\n");
    
    /* Main game loop - continues until player guesses correctly */
    do
    {
        /* Get player's guess with validation */
        playerGuess = getValidGuess();
        
        /* Increment attempt counter */
        attempts++;
        
        /* Check the guess and provide feedback */
        if(playerGuess > targetNumber)
        {
            printf("  --> Too HIGH! Try again.\n\n");
        }
        else if(playerGuess < targetNumber)
        {
            printf("  --> Too LOW! Try again.\n\n");
        }
        /* If neither too high nor too low, the guess is correct */
        /* Loop will exit after this iteration */
        
    } while(playerGuess != targetNumber);
    
    /* Display winning message with attempt count */
    displayResult(playerGuess, targetNumber, attempts);
    
    /* Ask if player wants to play again */
    playAgain = askPlayAgain();
    
    if(playAgain == 'y' || playAgain == 'Y')
    {
        /* Start a new game (recursive call) */
        playGame();
    }
    /* If 'n', return to main menu (function ends) */
}

/* ----------------------------------------------------------------------------
 * Function: displayResult()
 * Purpose: Display congratulatory message and performance feedback
 * Parameters:
 *   - guess: player's final guess
 *   - target: the target number
 *   - attempts: total attempts taken
 * Returns: Nothing
 * ----------------------------------------------------------------------------
 */
void displayResult(int guess, int target, int attempts)
{
    printf("\n========================================\n");
    printf("         CONGRATULATIONS!\n");
    printf("========================================\n");
    printf("You guessed the number correctly!\n");
    printf("The number was: %d\n", target);
    printf("Total attempts taken: %d\n", attempts);
    
    /* Provide performance feedback based on attempts */
    if(attempts <= 5)
    {
        printf("Performance: EXCELLENT! You're a natural!\n");
    }
    else if(attempts <= 10)
    {
        printf("Performance: VERY GOOD! Great job!\n");
    }
    else if(attempts <= 15)
    {
        printf("Performance: GOOD! Keep practicing!\n");
    }
    else
    {
        printf("Performance: Keep trying! You'll improve!\n");
    }
    
    printf("========================================\n");
}

/* ----------------------------------------------------------------------------
 * Function: askPlayAgain()
 * Purpose: Ask player if they want to play another round
 * Parameters: None
 * Returns: char - 'y'/'Y' for yes, 'n'/'N' for no
 * ----------------------------------------------------------------------------
 */
char askPlayAgain()
{
    char response;
    
    printf("\nDo you want to play again? (y/n): ");
    
    /* Clear input buffer and get response */
    while(getchar() != '\n');
    scanf("%c", &response);
    
    /* Validate input - must be y/Y or n/N */
    while(response != 'y' && response != 'Y' && 
          response != 'n' && response != 'N')
    {
        printf("Please enter 'y' for yes or 'n' for no: ");
        while(getchar() != '\n');
        scanf("%c", &response);
    }
    
    return response;
}

/* ============================================================================
 *                              END OF PROGRAM
 * ============================================================================
 * 
 * Project Submitted By:
 *   - Ayush Kumar Singh
 *   - Anurag Deivedi
 * 
 * College: Chhatrapati Shahu Ji Maharaj University, Kanpur
 * Department: Computer Applications (BCA/MCA)
 * Date: September 2026
 * 
 * ============================================================================
 */
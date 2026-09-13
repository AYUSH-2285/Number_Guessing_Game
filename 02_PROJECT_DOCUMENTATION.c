/*
 * ============================================================================
 *              NUMBER GUESSING GAME - PROJECT DOCUMENTATION
 * ============================================================================
 * 
 * This file contains complete project documentation in comment format.
 * You can read this file in any text editor or C compiler.
 * 
 * Project: Number Guessing Game in C Programming
 * College: Chhatrapati Shahu Ji Maharaj University, Kanpur
 * Students: Ayush Kumar Singh & Anurag Deivedi
 * Course: BCA/MCA Mini Project
 * Date: September 2026
 * 
 * ============================================================================
 */

/*
 * ============================================================================
 *                              TABLE OF CONTENTS
 * ============================================================================
 * 
 * 1.  Title
 * 2.  Introduction
 * 3.  Problem Statement
 * 4.  Objectives
 * 5.  Features
 * 6.  Technologies/Tools Used
 * 7.  Hardware Requirements
 * 8.  Software Requirements
 * 9.  Concepts of C Used
 * 10. Algorithm
 * 11. Flowchart Description
 * 12. Step-by-Step Working
 * 13. Complete C Source Code (See 01_MAIN_SOURCE_CODE.c)
 * 14. Explanation of Source Code
 * 15. Sample Input/Output
 * 16. Advantages
 * 17. Limitations
 * 18. Future Enhancements
 * 19. Conclusion
 * 20. Viva Questions and Answers
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 1: TITLE
 * ============================================================================
 * 
 * NUMBER GUESSING GAME IN C PROGRAMMING
 * 
 * A Mini Project Report
 * Submitted in partial fulfillment of BCA/MCA Degree
 * 
 * Submitted By:
 *   - Ayush Kumar Singh
 *   - Anurag Deivedi
 * 
 * Under the Guidance of:
 *   Department of Computer Applications
 *   Chhatrapati Shahu Ji Maharaj University, Kanpur
 *   September 2026
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 2: INTRODUCTION
 * ============================================================================
 * 
 * The Number Guessing Game is an interactive console-based application 
 * developed using the C programming language. In this game, the computer 
 * generates a random number within a specified range, and the player 
 * attempts to guess it. After each guess, the program provides feedback 
 * indicating whether the guess was too high, too low, or correct. 
 * The game tracks the number of attempts and offers multiple difficulty 
 * levels to enhance the gaming experience.
 * 
 * This project demonstrates fundamental C programming concepts including:
 * - Variables and data types
 * - Input/output operations
 * - Control structures (if-else, switch, loops)
 * - Functions and modular programming
 * - Random number generation
 * - Input validation techniques
 * 
 * The game is designed to be beginner-friendly while maintaining a 
 * professional, menu-driven interface suitable for college submission.
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 3: PROBLEM STATEMENT
 * ============================================================================
 * 
 * Create an engaging and educational number guessing game that:
 * 
 * 1. Generates random numbers for players to guess
 *    - Use rand() and srand() functions
 *    - Ensure different numbers on each run
 * 
 * 2. Provides immediate feedback on each guess
 *    - "Too High" if guess > target
 *    - "Too Low" if guess < target
 *    - "Correct" if guess = target
 * 
 * 3. Tracks and displays the number of attempts
 *    - Count each guess made by player
 *    - Show total attempts at the end
 * 
 * 4. Handles invalid inputs gracefully
 *    - Non-numeric input should not crash program
 *    - Display error message and ask again
 * 
 * 5. Offers replay functionality
 *    - Ask player if they want to play again
 *    - Generate new random number for new game
 * 
 * 6. Demonstrates fundamental C programming concepts
 *    - Suitable for beginner/college-level project
 *    - Well-commented and modular code
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 4: OBJECTIVES
 * ============================================================================
 * 
 * The main objectives of this project are:
 * 
 * 1. To implement a fun and interactive guessing game using C programming
 * 
 * 2. To demonstrate the use of random number generation in C
 *    - Understanding rand(), srand(), and time() functions
 *    - Generating numbers in a specific range
 * 
 * 3. To practice control structures effectively
 *    - if-else statements for game logic
 *    - switch statement for menu selection
 *    - do-while and while loops for game flow
 * 
 * 4. To implement proper input validation techniques
 *    - Checking scanf return values
 *    - Clearing input buffer
 *    - Handling invalid input gracefully
 * 
 * 5. To create a modular program using functions
 *    - Breaking code into logical, reusable functions
 *    - Each function has single responsibility
 * 
 * 6. To develop a user-friendly console interface
 *    - Clear, formatted output
 *    - Professional menu system
 *    - Helpful error messages
 * 
 * 7. To apply beginner-level C programming concepts effectively
 *    - Without using advanced concepts (pointers, structures, files)
 *    - Making code understandable for fellow students
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 5: FEATURES
 * ============================================================================
 * 
 * CORE FEATURES:
 * --------------
 * 
 * 1. Random Number Generation
 *    - Computer generates unpredictable numbers using rand() and srand()
 *    - Different numbers on each program run
 *    - Range varies based on difficulty level
 * 
 * 2. Interactive Gameplay
 *    - Real-time feedback after each guess
 *    - Clear messages: "Too HIGH!" or "Too LOW!"
 *    - Engaging console interface
 * 
 * 3. Attempt Counter
 *    - Tracks total guesses made by player
 *    - Displays count at the end of game
 *    - Used for performance evaluation
 * 
 * 4. Input Validation
 *    - Handles non-numeric input without crashing
 *    - Validates menu choices (1-3 only)
 *    - Validates difficulty selection (1-3 only)
 *    - Validates yes/no responses (y/n only)
 * 
 * 5. Replay Option
 *    - Ask player if they want to play again after winning
 *    - Generate new random number for new game
 *    - Return to main menu if player declines
 * 
 * 
 * ENHANCED FEATURES:
 * ------------------
 * 
 * 6. Main Menu System
 *    - Professional menu-driven interface
 *    - Three options: Start Game, Instructions, Exit
 *    - Loop until user chooses to exit
 * 
 * 7. Three Difficulty Levels
 *    - Easy: Range 1-50 (beginner-friendly)
 *    - Medium: Range 1-100 (standard)
 *    - Hard: Range 1-500 (challenging)
 * 
 * 8. Performance Feedback
 *    - Excellent: 5 or fewer attempts
 *    - Very Good: 6-10 attempts
 *    - Good: 11-15 attempts
 *    - Keep Trying: More than 15 attempts
 * 
 * 9. Instructions Section
 *    - Built-in help for new players
 *    - Explains how to play
 *    - Provides tips and strategies
 * 
 * 10. Clean Console Interface
 *     - Well-formatted output with separators
 *     - Clear, readable messages
 *     - Professional appearance
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 6: TECHNOLOGIES/TOOLS USED
 * ============================================================================
 * 
 * PROGRAMMING LANGUAGE:
 * ---------------------
 * - C Programming Language (Standard C, C89/C99 compatible)
 * - No advanced or platform-specific features used
 * 
 * 
 * DEVELOPMENT TOOLS:
 * ------------------
 * - Text Editor: Any C-compatible editor
 *   * Visual Studio Code
 *   * Code::Blocks IDE
 *   * Dev-C++
 *   * Notepad++
 *   * Sublime Text
 * 
 * - Compiler: GCC (GNU Compiler Collection) or any standard C compiler
 *   * GCC 4.0 or higher
 *   * Turbo C (for older systems)
 *   * Clang
 *   * Microsoft Visual C++
 * 
 * - Operating System: Cross-platform compatible
 *   * Windows 7/10/11
 *   * Linux (Ubuntu, Fedora, etc.)
 *   * macOS
 * 
 * 
 * LIBRARIES USED:
 * ---------------
 * 1. stdio.h (Standard Input/Output Header)
 *    - printf() function for output
 *    - scanf() function for input
 *    - getchar() function for buffer handling
 * 
 * 2. stdlib.h (Standard Library Header)
 *    - rand() function for random number generation
 *    - srand() function for seeding random generator
 * 
 * 3. time.h (Time Header)
 *    - time() function for getting current time
 *    - Used to seed random number generator
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 7: HARDWARE REQUIREMENTS
 * ============================================================================
 * 
 * MINIMUM REQUIREMENTS:
 * ---------------------
 * 
 * +------------------+----------------------------------+
 * | Component        | Minimum Requirement              |
 * +------------------+----------------------------------+
 * | Processor        | Intel Pentium or equivalent      |
 * | RAM              | 512 MB                           |
 * | Hard Disk Space  | 100 MB free space                |
 * | Monitor          | VGA compatible                   |
 * | Keyboard         | Standard keyboard                |
 * | Mouse            | Optional (not required)          |
 * +------------------+----------------------------------+
 * 
 * 
 * RECOMMENDED REQUIREMENTS:
 * -------------------------
 * 
 * +------------------+----------------------------------+
 * | Component        | Recommended Requirement          |
 * +------------------+----------------------------------+
 * | Processor        | Intel Core i3 or better          |
 * | RAM              | 2 GB or more                     |
 * | Hard Disk Space  | 500 MB free space                |
 * | Monitor          | SVGA or higher resolution        |
 * | Keyboard         | Standard keyboard                |
 * +------------------+----------------------------------+
 * 
 * 
 * NOTE: This is a lightweight console application that runs on virtually
 * any computer system, even with minimal hardware specifications.
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 8: SOFTWARE REQUIREMENTS
 * ============================================================================
 * 
 * OPERATING SYSTEM:
 * -----------------
 * - Windows 7/10/11 (32-bit or 64-bit)
 * - Linux (Ubuntu, Fedora, Debian, etc.)
 * - macOS (any version)
 * - Any OS with C compiler support
 * 
 * 
 * COMPILER:
 * ---------
 * - GCC 4.0 or higher (recommended)
 * - Turbo C++ (for older Windows systems)
 * - Clang compiler
 * - Microsoft Visual C++
 * - Any standard C compiler (C89/C99 compatible)
 * 
 * 
 * IDE (OPTIONAL BUT RECOMMENDED):
 * --------------------------------
 * - Code::Blocks (free, cross-platform)
 *   Download: https://www.codeblocks.org/
 * 
 * - Dev-C++ (free, Windows only)
 *   Download: https://www.bloodshed.net/devcpp/
 * 
 * - Visual Studio Code (free, cross-platform)
 *   Download: https://code.visualstudio.com/
 * 
 * - Eclipse CDT (free, cross-platform)
 *   Download: https://www.eclipse.org/cdt/
 * 
 * 
 * ADDITIONAL SOFTWARE:
 * --------------------
 * - Text editor (if not using IDE)
 * - Command prompt or terminal access
 * - PDF reader (for viewing documentation)
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 9: CONCEPTS OF C USED
 * ============================================================================
 * 
 * The following C programming concepts are demonstrated in this project:
 * 
 * 
 * 1. VARIABLES AND DATA TYPES
 *    ------------------------
 *    - int: for storing numbers, attempts, choices
 *    - char: for storing yes/no responses
 *    - Variable declaration and initialization
 *    - Scope of variables (local variables)
 * 
 *    Example:
 *      int attempts = 0;
 *      char response;
 *      int targetNumber;
 * 
 * 
 * 2. INPUT/OUTPUT FUNCTIONS
 *    ----------------------
 *    - printf(): Display formatted output to console
 *    - scanf(): Read formatted input from keyboard
 *    - getchar(): Read single character, clear buffer
 * 
 *    Example:
 *      printf("Enter your guess: ");
 *      scanf("%d", &guess);
 *      getchar();
 * 
 * 
 * 3. CONDITIONAL STATEMENTS (IF-ELSE)
 *    --------------------------------
 *    - Simple if statement
 *    - if-else statement
 *    - if-else-if ladder
 *    - Nested if statements
 * 
 *    Example:
 *      if(playerGuess > targetNumber)
 *          printf("Too HIGH!");
 *      else if(playerGuess < targetNumber)
 *          printf("Too LOW!");
 *      else
 *          printf("Correct!");
 * 
 * 
 * 4. SWITCH STATEMENT
 *    ----------------
 *    - Multi-way branch statement
 *    - Case labels for different options
 *    - Default case for invalid input
 *    - Break statement to exit switch
 * 
 *    Example:
 *      switch(choice)
 *      {
 *          case 1: playGame(); break;
 *          case 2: displayInstructions(); break;
 *          case 3: exit(); break;
 *          default: printf("Invalid!"); break;
 *      }
 * 
 * 
 * 5. LOOPS
 *    -----
 *    a) do-while loop:
 *       - Executes at least once
 *       - Checks condition at end
 *       - Used for game guessing loop
 * 
 *    b) while loop:
 *       - Checks condition at beginning
 *       - May not execute at all
 *       - Used for input validation
 * 
 *    Example:
 *      do {
 *          // game logic
 *      } while(playerGuess != targetNumber);
 * 
 *      while(!isValid) {
 *          // validation logic
 *      }
 * 
 * 
 * 6. FUNCTIONS
 *    ---------
 *    - Function declaration (prototype)
 *    - Function definition
 *    - Function call
 *    - Parameters and arguments
 *    - Return values
 *    - void functions (no return value)
 * 
 *    Functions used:
 *    - main()
 *    - displayMenu()
 *    - displayInstructions()
 *    - playGame()
 *    - getDifficulty()
 *    - setRange()
 *    - getRandomNumber()
 *    - getValidGuess()
 *    - displayResult()
 *    - askPlayAgain()
 * 
 * 
 * 7. RANDOM NUMBER GENERATION
 *    ------------------------
 *    - rand() function: generates pseudo-random number
 *    - srand() function: seeds random number generator
 *    - time() function: provides current time for seeding
 *    - Formula: rand() % (max - min + 1) + min
 * 
 *    Example:
 *      srand(time(NULL));
 *      targetNumber = rand() % 100 + 1;
 * 
 * 
 * 8. OPERATORS
 *    ---------
 *    a) Arithmetic operators: +, -, *, /, %
 *    b) Comparison operators: >, <, ==, !=, >=, <=
 *    c) Logical operators: &&, ||, !
 *    d) Assignment operators: =, +=, -=
 *    e) Increment/Decrement: ++, --
 * 
 *    Example:
 *      attempts++;  // Increment
 *      if(guess > target && attempts <= 5)
 *          printf("Excellent!");
 * 
 * 
 * 9. HEADER FILES
 *    ------------
 *    - #include <stdio.h>  - Input/output functions
 *    - #include <stdlib.h> - Random number functions
 *    - #include <time.h>   - Time function for seeding
 * 
 * 
 * 10. INPUT VALIDATION
 *     ----------------
 *     - Checking scanf() return value
 *     - Clearing input buffer with getchar()
 *     - Loop until valid input received
 *     - Display error messages for invalid input
 * 
 *     Example:
 *       if(scanf("%d", &guess) == 1)
 *           isValid = 1;
 *       else
 *           while(getchar() != '\n');
 * 
 * 
 * 11. POINTERS (BASIC USAGE)
 *     ----------------------
 *     - Used in setRange() function
 *     - Pass by reference concept
 *     - Modifying original variables through pointers
 * 
 *     Example:
 *       void setRange(int difficulty, int *min, int *max)
 *       {
 *           *min = 1;
 *           *max = 100;
 *       }
 * 
 * 
 * 12. COMMENTS
 *     --------
 *     - Single-line comments: //
 *     - Multi-line comments: /* ... */
 *     - Documenting code for readability
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 10: ALGORITHM
 * ============================================================================
 * 
 * MAIN ALGORITHM:
 * ---------------
 * 
 * Step 1: START
 * 
 * Step 2: Initialize random number generator
 *         srand(time(NULL))
 * 
 * Step 3: Display welcome message
 *         "Welcome to Number Guessing Game!"
 * 
 * Step 4: Display main menu
 *         1. Start Game
 *         2. Instructions
 *         3. Exit
 * 
 * Step 5: Get user choice (1-3)
 * 
 * Step 6: Process choice using SWITCH statement
 *         Case 1: Call playGame() function
 *         Case 2: Call displayInstructions() function
 *         Case 3: Display goodbye message, EXIT
 *         Default: Display error message
 * 
 * Step 7: If choice was 1 or 2, wait for Enter key
 * 
 * Step 8: Go back to Step 4 (loop until user exits)
 * 
 * Step 9: STOP
 * 
 * 
 * GAME PLAY ALGORITHM (playGame function):
 * ----------------------------------------
 * 
 * Step 1: START GAME
 * 
 * Step 2: Get difficulty level from player
 *         Call getDifficulty() function
 * 
 * Step 3: Set number range based on difficulty
 *         Easy:    min=1, max=50
 *         Medium:  min=1, max=100
 *         Hard:    min=1, max=500
 * 
 * Step 4: Generate random number within range
 *         target = rand() % (max-min+1) + min
 * 
 * Step 5: Initialize attempt counter
 *         attempts = 0
 * 
 * Step 6: Display game start message
 *         "I'm thinking of a number between min and max"
 * 
 * Step 7: DO-WHILE LOOP START
 * 
 * Step 8: Get player's guess
 *         Call getValidGuess() function
 * 
 * Step 9: Increment attempt counter
 *         attempts = attempts + 1
 * 
 * Step 10: IF guess > target THEN
 *              Display "Too HIGH! Try again."
 *          ELSE IF guess < target THEN
 *              Display "Too LOW! Try again."
 *          END IF
 * 
 * Step 11: WHILE guess != target (go back to Step 8 if true)
 * 
 * Step 12: Display result
 *          Call displayResult() function
 *          - Show target number
 *          - Show attempts count
 *          - Show performance rating
 * 
 * Step 13: Ask if player wants to play again
 *          Call askPlayAgain() function
 * 
 * Step 14: IF response is 'y' or 'Y' THEN
 *              Go to Step 2 (start new game)
 *          ELSE
 *              Return to main menu
 *          END IF
 * 
 * Step 15: STOP
 * 
 * 
 * INPUT VALIDATION ALGORITHM (getValidGuess function):
 * ----------------------------------------------------
 * 
 * Step 1: START
 * 
 * Step 2: Set isValid = 0 (false)
 * 
 * Step 3: WHILE isValid == 0 DO
 * 
 * Step 4:     Display prompt "Enter your guess: "
 * 
 * Step 5:     result = scanf("%d", &guess)
 * 
 * Step 6:     IF result == 1 THEN
 *                 isValid = 1 (valid integer received)
 *             ELSE
 *                 Clear input buffer
 *                 Display "Invalid input! Please enter a number."
 *             END IF
 * 
 * Step 7: END WHILE
 * 
 * Step 8: RETURN guess
 * 
 * Step 9: STOP
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 11: FLOWCHART DESCRIPTION
 * ============================================================================
 * 
 * MAIN MENU FLOWCHART:
 * --------------------
 * 
 * [START]
 *    |
 *    V
 * [Initialize: srand(time(NULL))]
 *    |
 *    V
 * [Display Welcome Message]
 *    |
 *    V
 * [Display Main Menu]
 *    |
 *    V
 * [Get User Choice (1-3)]
 *    |
 *    V
 * <Check Choice Value>
 *    |
 *    +---> [Choice = 1] ---> [Call playGame()] ---+
 *    |                                             |
 *    +---> [Choice = 2] ---> [Display Instructions]-+
 *    |                                             |
 *    +---> [Choice = 3] ---> [Display Goodbye] ---> [END]
 *    |
 *    +---> [Invalid Choice] ---> [Display Error] ---+
 *                                                    |
 *    +-----------------------------------------------+
 *    |
 *    V
 * [Wait for Enter Key]
 *    |
 *    +----------------------------------+
 *    |                                  |
 *    +----------------------------------+
 * 
 * 
 * GAME PLAY FLOWCHART:
 * --------------------
 * 
 * [playGame() START]
 *    |
 *    V
 * [Get Difficulty Level]
 *    |
 *    V
 * [Set Range (min, max)]
 *    |
 *    V
 * [Generate Random Number (target)]
 *    |
 *    V
 * [Initialize attempts = 0]
 *    |
 *    V
 * [Display Game Start Message]
 *    |
 *    V
 * +---> [DO-WHILE LOOP START] <---+
 * |    |                          |
 * |    V                          |
 * | [Get Player Guess]            |
 * |    |                          |
 * |    V                          |
 * | [attempts = attempts + 1]     |
 * |    |                          |
 * |    V                          |
 * | <Compare guess with target>   |
 * |    |                          |
 * |    +---> [guess > target]     |
 * |    |        |                 |
 * |    |        V                 |
 * |    |   [Display "Too HIGH"]   |
 * |    |        |                 |
 * |    +--------+-----------------+
 * |    |
 * |    +---> [guess < target]
 * |    |        |
 * |    |        V
 * |    |   [Display "Too LOW"]
 * |    |        |
 * |    +--------+
 * |    |
 * |    +---> [guess = target] (exit loop)
 * |    |
 * |    V
 * | [Display Result]
 * |    |
 * |    V
 * | [Ask "Play Again? (y/n)"]
 * |    |
 * |    V
 * | <Check Response>
 * |    |
 * |    +---> [Yes] --------------------+
 * |    |                               |
 * |    +---> [No] ---> [Return to Menu]|
 * |                                    |
 * +------------------------------------+
 * 
 * 
 * VISUAL FLOWCHARTS:
 * ------------------
 * Refer to the following image files for visual flowcharts:
 * 
 * 1. flowchart_main.png - Main program flow
 * 2. flowchart_game_logic.png - Detailed game logic flow
 * 
 * These flowcharts provide a visual representation of the program flow
 * and can be included in printed documentation.
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 12: STEP-BY-STEP WORKING
 * ============================================================================
 * 
 * STEP 1: PROGRAM INITIALIZATION
 * ------------------------------
 * - Program starts execution from main() function
 * - Random number generator is seeded using srand(time(NULL))
 *   * time(NULL) returns current time in seconds
 *   * srand() uses this as seed for rand()
 *   * Ensures different random numbers each run
 * - Welcome message is displayed to user
 * 
 * 
 * STEP 2: MENU DISPLAY
 * --------------------
 * - displayMenu() function is called
 * - Shows three options:
 *   1. Start Game
 *   2. Instructions
 *   3. Exit
 * - User is prompted to enter choice (1-3)
 * - Input is stored in variable 'choice'
 * 
 * 
 * STEP 3: CHOICE PROCESSING (SWITCH STATEMENT)
 * --------------------------------------------
 * - switch(choice) evaluates the user's input
 * 
 *   Case 1 (Start Game):
 *   - playGame() function is called
 *   - Control transfers to game logic
 * 
 *   Case 2 (Instructions):
 *   - displayInstructions() function is called
 *   - Shows how to play, difficulty levels, tips
 * 
 *   Case 3 (Exit):
 *   - Displays goodbye message
 *   - return 0; exits the program
 * 
 *   Default (Invalid):
 *   - Displays error message
 *   - Loops back to menu
 * 
 * 
 * STEP 4: GAME EXECUTION (When Choice = 1)
 * ----------------------------------------
 * 
 * 4a. Difficulty Selection:
 *     - getDifficulty() function is called
 *     - Shows three difficulty options
 *     - User enters 1, 2, or 3
 *     - Input is validated (must be 1-3)
 *     - Returns difficulty level
 * 
 * 4b. Range Setting:
 *     - setRange() function is called
 *     - Based on difficulty:
 *       * Easy (1):    min=1, max=50
 *       * Medium (2):  min=1, max=100
 *       * Hard (3):    min=1, max=500
 *     - Uses pointers to modify min and max
 * 
 * 4c. Random Number Generation:
 *     - getRandomNumber(min, max) is called
 *     - Formula: rand() % (max-min+1) + min
 *     - Example for Medium: rand() % 100 + 1
 *     - Result stored in targetNumber
 * 
 * 4d. Game Start Message:
 *     - Displays: "I'm thinking of a number between X and Y"
 *     - Player knows the range to guess from
 * 
 * 
 * STEP 5: GUESS PROCESSING (GAME LOOP)
 * ------------------------------------
 * - do-while loop starts (runs at least once)
 * 
 * 5a. Get Player's Guess:
 *     - getValidGuess() function is called
 *     - Prompts: "Enter your guess: "
 *     - scanf("%d", &guess) reads input
 *     - Validates input is a number
 *     - If invalid, clears buffer and asks again
 *     - Returns valid guess
 * 
 * 5b. Increment Attempt Counter:
 *     - attempts = attempts + 1
 *     - Tracks total guesses made
 * 
 * 5c. Compare Guess with Target:
 *     - if(guess > targetNumber)
 *       * Display: "Too HIGH! Try again."
 *     
 *     - else if(guess < targetNumber)
 *       * Display: "Too LOW! Try again."
 *     
 *     - else (guess == targetNumber)
 *       * Guess is correct
 *       * Loop will exit
 * 
 * 5d. Loop Condition Check:
 *     - while(playerGuess != targetNumber)
 *     - If guess != target, loop continues (go to 5a)
 *     - If guess == target, loop exits
 * 
 * 
 * STEP 6: RESULT DISPLAY
 * ----------------------
 * - displayResult() function is called
 * - Displays:
 *   * "CONGRATULATIONS!" message
 *   * Target number: "The number was: X"
 *   * Attempts count: "Total attempts: Y"
 *   * Performance rating based on attempts:
 *     - <= 5 attempts: "EXCELLENT! You're a natural!"
 *     - 6-10 attempts: "VERY GOOD! Great job!"
 *     - 11-15 attempts: "GOOD! Keep practicing!"
 *     - > 15 attempts: "Keep trying! You'll improve!"
 * 
 * 
 * STEP 7: REPLAY OPTION
 * ---------------------
 * - askPlayAgain() function is called
 * - Prompts: "Do you want to play again? (y/n): "
 * - Clears input buffer
 * - Reads response character
 * - Validates response (must be y/Y or n/N)
 * - Returns response
 * 
 * - If response is 'y' or 'Y':
 *   * playGame() is called recursively
 *   * New game starts (go to Step 4)
 * 
 * - If response is 'n' or 'N':
 *   * Function returns
 *   * Control goes back to main menu
 * 
 * 
 * STEP 8: INSTRUCTIONS DISPLAY (When Choice = 2)
 * ----------------------------------------------
 * - displayInstructions() function is called
 * - Shows:
 *   * How to Play (5 steps)
 *   * Difficulty Levels (Easy/Medium/Hard ranges)
 *   * Tips for better gameplay
 * - Returns to main menu after viewing
 * 
 * 
 * STEP 9: PROGRAM EXIT (When Choice = 3)
 * --------------------------------------
 * - Displays: "Thank you for playing! Goodbye!"
 * - return 0; in main() function
 * - Program terminates successfully
 * 
 * 
 * STEP 10: BUFFER CLEARING AND PAUSE
 * ----------------------------------
 * - After each menu option, program waits for Enter key
 * - while(getchar() != '\n'); clears input buffer
 * - getchar(); waits for user to press Enter
 * - Provides time to read output before menu reappears
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 13: COMPLETE C SOURCE CODE
 * ============================================================================
 * 
 * The complete C source code is provided in a separate file:
 * 
 * FILE: 01_MAIN_SOURCE_CODE.c
 * SIZE: ~14.5 KB
 * LINES: ~350 (including comments)
 * FUNCTIONS: 10 (including main)
 * 
 * 
 * TO VIEW THE CODE:
 * -----------------
 * 1. Open file: 01_MAIN_SOURCE_CODE.c
 * 2. Or copy the code from the file
 * 3. Paste into any C compiler/IDE
 * 4. Compile and run
 * 
 * 
 * CODE STRUCTURE:
 * ---------------
 * Lines 1-50:    Header comments and file information
 * Lines 51-62:   Function declarations (prototypes)
 * Lines 63-140:  main() function
 * Lines 141-160: displayMenu() function
 * Lines 161-195: displayInstructions() function
 * Lines 196-225: getDifficulty() function
 * Lines 226-250: setRange() function
 * Lines 251-265: getRandomNumber() function
 * Lines 266-290: getValidGuess() function
 * Lines 291-340: playGame() function
 * Lines 341-370: displayResult() function
 * Lines 371-400: askPlayAgain() function
 * Lines 401-420: Closing comments and project information
 * 
 * 
 * NOTE: The code is well-commented with explanations for each section,
 * making it easy to understand for beginners and suitable for college
 * submission with full documentation.
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 14: EXPLANATION OF SOURCE CODE
 * ============================================================================
 * 
 * HEADER FILES:
 * -------------
 * 
 * #include <stdio.h>
 * Purpose: Standard Input/Output operations
 * Functions used: printf(), scanf(), getchar()
 * 
 * #include <stdlib.h>
 * Purpose: Standard library functions
 * Functions used: rand(), srand()
 * 
 * #include <time.h>
 * Purpose: Time-related functions
 * Functions used: time()
 * 
 * 
 * FUNCTION EXPLANATIONS:
 * ----------------------
 * 
 * 1. int main()
 *    -----------
 *    Purpose: Entry point of the program
 *    
 *    What it does:
 *    - Seeds random number generator with srand(time(NULL))
 *    - Displays welcome message
 *    - Contains main menu loop (do-while)
 *    - Uses switch-case for menu options
 *    - Loops until user chooses Exit (case 3)
 *    
 *    Key statements:
 *    - srand(time(NULL)); // Seed random generator
 *    - switch(choice) { ... } // Menu processing
 *    - do { ... } while(1); // Infinite loop until exit
 *    - return 0; // Successful termination
 * 
 * 
 * 2. void displayMenu()
 *    ------------------
 *    Purpose: Display the main menu
 *    
 *    What it does:
 *    - Shows three options using printf()
 *    - Formatted output with separators
 *    
 *    No parameters, no return value
 * 
 * 
 * 3. void displayInstructions()
 *    --------------------------
 *    Purpose: Show game instructions and tips
 *    
 *    What it does:
 *    - Displays "How to Play" section
 *    - Shows difficulty level details
 *    - Provides gameplay tips
 *    
 *    No parameters, no return value
 * 
 * 
 * 4. int getDifficulty()
 *    -------------------
 *    Purpose: Get difficulty level from user
 *    
 *    What it does:
 *    - Displays difficulty options (1-3)
 *    - Gets user input with scanf()
 *    - Validates input (must be 1, 2, or 3)
 *    - Loops until valid input received
 *    - Returns difficulty level (int)
 *    
 *    Returns: int (1, 2, or 3)
 * 
 * 
 * 5. void setRange(int difficulty, int *min, int *max)
 *    -------------------------------------------------
 *    Purpose: Set number range based on difficulty
 *    
 *    What it does:
 *    - Uses switch statement on difficulty
 *    - Sets min and max values:
 *      * Case 1 (Easy): min=1, max=50
 *      * Case 2 (Medium): min=1, max=100
 *      * Case 3 (Hard): min=1, max=500
 *    - Uses pointers to modify original variables
 *    
 *    Parameters:
 *    - difficulty: int (1, 2, or 3)
 *    - min: pointer to int (output)
 *    - max: pointer to int (output)
 * 
 * 
 * 6. int getRandomNumber(int min, int max)
 *    -------------------------------------
 *    Purpose: Generate random number in range
 *    
 *    What it does:
 *    - Uses formula: rand() % (max-min+1) + min
 *    - rand() gives 0 to RAND_MAX
 *    - % (max-min+1) scales to 0 to (max-min)
 *    - + min shifts to min to max
 *    
 *    Example: min=1, max=100
 *    rand() % 100 + 1 gives 1 to 100
 *    
 *    Parameters:
 *    - min: int (minimum value)
 *    - max: int (maximum value)
 *    
 *    Returns: int (random number in range)
 * 
 * 
 * 7. int getValidGuess()
 *    -------------------
 *    Purpose: Get valid integer guess from user
 *    
 *    What it does:
 *    - Prompts user for guess
 *    - Uses scanf("%d", &guess) to read input
 *    - Checks scanf return value:
 *      * Returns 1 if successful (valid integer)
 *      * Returns 0 if failed (non-numeric input)
 *    - If invalid, clears buffer with while(getchar() != '\n')
 *    - Loops until valid integer received
 *    - Returns valid guess
 *    
 *    Returns: int (player's guess)
 * 
 * 
 * 8. void playGame()
 *    ---------------
 *    Purpose: Main game logic
 *    
 *    What it does:
 *    - Calls getDifficulty() to get level
 *    - Calls setRange() to set min/max
 *    - Calls getRandomNumber() to get target
 *    - Initializes attempts counter to 0
 *    - Displays game start message
 *    - Enters do-while loop:
 *      * Calls getValidGuess() for player input
 *      * Increments attempts counter
 *      * Compares guess with target
 *      * Displays "Too HIGH" or "Too LOW"
 *      * Continues until guess == target
 *    - Calls displayResult() to show results
 *    - Calls askPlayAgain() for replay option
 *    - If 'y', calls playGame() recursively
 *    - If 'n', returns to main menu
 *    
 *    No parameters, no return value
 * 
 * 
 * 9. void displayResult(int guess, int target, int attempts)
 *    -------------------------------------------------------
 *    Purpose: Display winning message and performance
 *    
 *    What it does:
 *    - Displays congratulatory message
 *    - Shows target number
 *    - Shows total attempts
 *    - Evaluates performance:
 *      * attempts <= 5: "EXCELLENT!"
 *      * attempts <= 10: "VERY GOOD!"
 *      * attempts <= 15: "GOOD!"
 *      * attempts > 15: "Keep trying!"
 *    
 *    Parameters:
 *    - guess: int (player's final guess)
 *    - target: int (target number)
 *    - attempts: int (total attempts)
 * 
 * 
 * 10. char askPlayAgain()
 *     ------------------
 *     Purpose: Ask if player wants another round
 *     
 *     What it does:
 *     - Prompts: "Do you want to play again? (y/n): "
 *     - Clears input buffer
 *     - Reads response with scanf("%c", &response)
 *     - Validates response (must be y/Y or n/N)
 *     - Loops until valid response received
 *     - Returns response character
 *     
 *     Returns: char ('y', 'Y', 'n', or 'N')
 * 
 * 
 * KEY CODE SECTIONS EXPLAINED:
 * ----------------------------
 * 
 * 1. Random Number Generation:
 *    -------------------------
 *    srand(time(NULL));
 *    
 *    - srand() seeds the random number generator
 *    - time(NULL) returns current time in seconds
 *    - Using time ensures different seed each run
 *    - Without this, rand() gives same sequence always
 *    
 *    targetNumber = (rand() % (max - min + 1)) + min;
 *    
 *    - rand() generates pseudo-random number
 *    - % (max-min+1) gives remainder 0 to (max-min)
 *    - + min shifts range to min to max
 *    - Example: 1 to 100: rand() % 100 + 1
 * 
 * 
 * 2. Input Validation:
 *    -----------------
 *    if(scanf("%d", &guess) == 1)
 *    {
 *        isValid = 1;  // Valid integer
 *    }
 *    else
 *    {
 *        while(getchar() != '\n');  // Clear buffer
 *        printf("Invalid input!");
 *    }
 *    
 *    - scanf() returns number of successful conversions
 *    - If 1, we got a valid integer
 *    - If 0, input was not a number (e.g., letters)
 *    - Clear buffer to remove invalid input
 *    - Loop continues to ask again
 * 
 * 
 * 3. Game Loop:
 *    ----------
 *    do
 *    {
 *        playerGuess = getValidGuess();
 *        attempts++;
 *        
 *        if(playerGuess > targetNumber)
 *            printf("Too HIGH!\n");
 *        else if(playerGuess < targetNumber)
 *            printf("Too LOW!\n");
 *        
 *    } while(playerGuess != targetNumber);
 *    
 *    - do-while ensures at least one guess
 *    - Gets valid guess from player
 *    - Increments attempt counter
 *    - Provides feedback (high/low)
 *    - Continues until guess equals target
 * 
 * 
 * 4. Pointer Usage in setRange():
 *    ----------------------------
 *    void setRange(int difficulty, int *min, int *max)
 *    {
 *        switch(difficulty)
 *        {
 *            case 1:
 *                *min = 1;
 *                *max = 50;
 *                break;
 *            // ... other cases
 *        }
 *    }
 *    
 *    - min and max are pointers (int *)
 *    - *min and *max dereference pointers
 *    - Modifies original variables in playGame()
 *    - Example of pass-by-reference in C
 * 
 * 
 * 5. Buffer Clearing:
 *    ----------------
 *    while(getchar() != '\n');
 *    
 *    - getchar() reads one character at a time
 *    - != '\n' continues until newline (Enter key)
 *    - Discards all characters in buffer
 *    - Used after invalid input or before reading char
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 15: SAMPLE INPUT/OUTPUT
 * ============================================================================
 * 
 * SAMPLE RUN 1: COMPLETE GAME (MEDIUM DIFFICULTY)
 * -----------------------------------------------
 * 
 * ========================================
 *    Welcome to Number Guessing Game!
 * ========================================
 * 
 * ========================================
 *             MAIN MENU
 * ========================================
 *   1. Start Game
 *   2. Instructions
 *   3. Exit
 * ========================================
 * 
 * Enter your choice (1-3): 1
 * 
 * ========================================
 *        SELECT DIFFICULTY LEVEL
 * ========================================
 *   1. Easy (1-50)
 *   2. Medium (1-100)
 *   3. Hard (1-500)
 * ========================================
 * 
 * Enter difficulty (1-3): 2
 * 
 * ========================================
 *          GAME STARTED!
 * ========================================
 * I'm thinking of a number between 1 and 100.
 * Can you guess what it is?
 * 
 * Enter your guess: 50
 *   --> Too HIGH! Try again.
 * 
 * Enter your guess: 25
 *   --> Too LOW! Try again.
 * 
 * Enter your guess: 37
 *   --> Too HIGH! Try again.
 * 
 * Enter your guess: 31
 *   --> Too LOW! Try again.
 * 
 * Enter your guess: 34
 * 
 * ========================================
 *          CONGRATULATIONS!
 * ========================================
 * You guessed the number correctly!
 * The number was: 34
 * Total attempts taken: 5
 * Performance: EXCELLENT! You're a natural!
 * ========================================
 * 
 * Do you want to play again? (y/n): n
 * 
 * Press Enter to continue...
 * 
 * 
 * SAMPLE RUN 2: INVALID INPUT HANDLING
 * ------------------------------------
 * 
 * Enter your guess: abc
 * Invalid input! Please enter a number.
 * Enter your guess: 42
 *   --> Too LOW! Try again.
 * 
 * Enter your guess: [Enter key]
 * Invalid input! Please enter a number.
 * Enter your guess: 50
 *   --> Correct!
 * 
 * 
 * SAMPLE RUN 3: INVALID MENU CHOICE
 * ---------------------------------
 * 
 * Enter your choice (1-3): 5
 * Invalid choice! Please enter 1, 2, or 3.
 * 
 * Enter your choice (1-3): 0
 * Invalid choice! Please enter 1, 2, or 3.
 * 
 * Enter your choice (1-3): 2
 * 
 * ========================================
 *          GAME INSTRUCTIONS
 * ========================================
 * 
 * How to Play:
 * 1. Select a difficulty level (Easy/Medium/Hard)
 * 2. The computer will generate a random number
 * 3. Try to guess the number
 * 4. After each guess, you'll be told if your
 *    guess is too high or too low
 * 5. Keep guessing until you find the number!
 * 
 * Difficulty Levels:
 * - Easy:   Number between 1 and 50
 * - Medium: Number between 1 and 100
 * - Hard:   Number between 1 and 500
 * 
 * Tips:
 * - Use the hints (too high/too low) wisely
 * - Try to guess in the middle of the range first
 * - Good luck!
 * 
 * ========================================
 * 
 * Press Enter to continue...
 * 
 * 
 * SAMPLE RUN 4: EASY DIFFICULTY (QUICK WIN)
 * ------------------------------------------
 * 
 * Enter difficulty (1-3): 1
 * 
 * ========================================
 *          GAME STARTED!
 * ========================================
 * I'm thinking of a number between 1 and 50.
 * Can you guess what it is?
 * 
 * Enter your guess: 25
 *   --> Too LOW! Try again.
 * 
 * Enter your guess: 37
 * 
 * ========================================
 *          CONGRATULATIONS!
 * ========================================
 * You guessed the number correctly!
 * The number was: 37
 * Total attempts taken: 2
 * Performance: EXCELLENT! You're a natural!
 * ========================================
 * 
 * Do you want to play again? (y/n): y
 * 
 * [New game starts...]
 * 
 * 
 * SAMPLE RUN 5: EXIT OPTION
 * -------------------------
 * 
 * Enter your choice (1-3): 3
 * 
 * Thank you for playing! Goodbye!
 * 
 * [Program terminates]
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 16: ADVANTAGES
 * ============================================================================
 * 
 * 1. EDUCATIONAL VALUE
 *    ------------------
 *    - Demonstrates fundamental C concepts clearly
 *    - Suitable for beginner programming students
 *    - Easy to understand and modify
 *    - Good learning resource for control structures
 * 
 * 
 * 2. USER-FRIENDLY INTERFACE
 *    -----------------------
 *    - Simple and intuitive console interface
 *    - Clear instructions and feedback
 *    - Professional menu system
 *    - Helpful error messages
 * 
 * 
 * 3. ROBUST ERROR HANDLING
 *    ---------------------
 *    - Handles invalid inputs without crashing
 *    - Validates all user inputs
 *    - Clears input buffer properly
 *    - Provides helpful error messages
 * 
 * 
 * 4. MODULAR DESIGN
 *    --------------
 *    - Well-organized functions
 *    - Each function has single responsibility
 *    - Easy to understand and maintain
 *    - Good coding practice demonstration
 * 
 * 
 * 5. REPLAYABLE
 *    ----------
 *    - Multiple difficulty levels
 *    - Random numbers ensure variety
 *    - Replay option after each game
 *    - Performance feedback motivates improvement
 * 
 * 
 * 6. PORTABLE
 *    --------
 *    - Runs on any system with C compiler
 *    - No platform-specific code
 *    - Cross-platform compatible (Windows, Linux, Mac)
 *    - Minimal system requirements
 * 
 * 
 * 7. LIGHTWEIGHT
 *    -----------
 *    - Small file size (~15 KB)
 *    - Minimal memory usage (< 1 MB)
 *    - Fast compilation and execution
 *    - No external dependencies
 * 
 * 
 * 8. BEGINNER-FRIENDLY
 *    -----------------
 *    - No advanced C concepts (no structures, files, etc.)
 *    - Well-commented code
 *    - Clear variable names
 *    - Logical flow
 * 
 * 
 * 9. COMPLETE DOCUMENTATION
 *    ----------------------
 *    - Comprehensive project report
 *    - Detailed code comments
 *    - Flowchart diagrams included
 *    - Viva preparation guide
 * 
 * 
 * 10. COLLEGE-READY
 *     -------------
 *     - Meets college project requirements
 *     - Professional formatting
 *     - All required sections included
 *     - Suitable for BCA/MCA submission
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 17: LIMITATIONS
 * ============================================================================
 * 
 * 1. CONSOLE-BASED ONLY
 *    -------------------
 *    - No graphical user interface (GUI)
 *    - Text-only output
 *    - May seem less attractive to some users
 *    - Limited visual appeal
 * 
 * 
 * 2. SINGLE PLAYER ONLY
 *    -------------------
 *    - No multiplayer functionality
 *    - Cannot compete with friends
 *    - No online play option
 *    - Limited social interaction
 * 
 * 
 * 3. NO HIGH SCORE SYSTEM
 *    --------------------
 *    - Doesn't save best performances
 *    - No leaderboard
 *    - Can't track progress over time
 *    - Each session is independent
 * 
 * 
 * 4. LIMITED NUMBER RANGE
 *    --------------------
 *    - Maximum range is 1-500 (Hard mode)
 *    - Cannot set custom ranges
 *    - May be too easy for advanced players
 *    - No extreme difficulty option
 * 
 * 
 * 5. NO HINTS SYSTEM
 *    ---------------
 *    - No option to get hints during gameplay
 *    - Players must guess blindly
 *    - No "reveal odd/even" feature
 *    - May be frustrating for beginners
 * 
 * 
 * 6. NO TIMER FEATURE
 *    ----------------
 *    - Doesn't track time taken to guess
 *    - No speed-based scoring
 *    - Can't compete on time
 *    - No time limit pressure
 * 
 * 
 * 7. BASIC AI
 *    --------
 *    - Computer only generates random numbers
 *    - No adaptive difficulty
 *    - Doesn't learn from player behavior
 *    - No smart number selection
 * 
 * 
 * 8. NO CUSTOMIZATION
 *    ----------------
 *    - Players can't set custom ranges
 *    - No theme or color options
 *    - Can't change difficulty names
 *    - Fixed interface design
 * 
 * 
 * 9. NO SOUND EFFECTS
 *    ----------------
 *    - No audio feedback
 *    - Silent gameplay
 *    - No winning/losing sounds
 *    - Less immersive experience
 * 
 * 
 * 10. NO PERSISTENCE
 *     --------------
 *     - No file handling
 *     - Can't save game state
 *     - No statistics tracking
 *     - All data lost on exit
 * 
 * 
 * NOTE: These limitations are intentional to keep the project simple and
 * suitable for beginner-level C programming. Advanced features can be added
 * as future enhancements.
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 18: FUTURE ENHANCEMENTS
 * ============================================================================
 * 
 * The following features can be added to improve the project:
 * 
 * 
 * 1. HIGH SCORE SYSTEM
 *    ------------------
 *    - Use file handling to save best scores
 *    - Store player name and attempts
 *    - Display top 10 high scores
 *    - Update leaderboard after each game
 *    
 *    Implementation: Use fprintf() and fscanf() with file I/O
 * 
 * 
 * 2. MULTIPLAYER MODE
 *    -----------------
 *    - Two players can compete
 *    - Player 1 sets number, Player 2 guesses
 *    - Then switch roles
 *    - Winner is who guesses in fewer attempts
 *    
 *    Implementation: Add player_turn variable and alternate turns
 * 
 * 
 * 3. TIMER FEATURE
 *    -------------
 *    - Track time taken to guess
 *    - Display time at the end
 *    - Use time for performance rating
 *    - Add time-based challenges
 *    
 *    Implementation: Use time() before and after game, calculate difference
 * 
 * 
 * 4. HINT SYSTEM
 *    -----------
 *    - Provide hints after certain attempts
 *    - Reveal if number is odd/even
 *    - Reveal if divisible by certain numbers
 *    - Cost hints with penalty points
 *    
 *    Implementation: Add hint counter and hint functions
 * 
 * 
 * 5. CUSTOM RANGE OPTION
 *    -------------------
 *    - Allow players to set their own range
 *    - Input min and max values
 *    - Validate range (min < max, reasonable limits)
 *    - Save custom ranges
 *    
 *    Implementation: Add custom range input in difficulty selection
 * 
 * 
 * 6. GRAPHICAL INTERFACE
 *    -------------------
 *    - Use graphics library (graphics.h)
 *    - Display numbers graphically
 *    - Add colors and animations
 *    - Better visual appeal
 *    
 *    Implementation: Use graphics.h or external GUI libraries
 * 
 * 
 * 7. DIFFICULTY PROGRESSION
 *    ----------------------
 *    - Unlock harder levels progressively
 *    - Start with Easy only
 *    - Unlock Medium after winning Easy
 *    - Unlock Hard after winning Medium
 *    
 *    Implementation: Add unlock flags and check before allowing selection
 * 
 * 
 * 8. STATISTICS TRACKING
 *    -------------------
 *    - Track total games played
 *    - Track wins and losses
 *    - Calculate win percentage
 *    - Show average attempts
 *    
 *    Implementation: Use global variables or file to store stats
 * 
 * 
 * 9. SOUND EFFECTS
 *    -------------
 *    - Add sound on correct guess
 *    - Add sound on wrong guess
 *    - Background music option
 *    - Victory sound effect
 *    
 *    Implementation: Use external sound libraries or Beep() function
 * 
 * 
 * 10. NETWORK PLAY
 *     ------------
 *     - Play against others online
 *     - Socket programming for multiplayer
 *     - Server-client architecture
 *     - Real-time competition
 *     
 *     Implementation: Use socket programming (advanced)
 * 
 * 
 * 11. AI-POWERED GUESSING
 *     -------------------
 *     - Computer guesses player's number
 *     - Use binary search algorithm
 *     - AI learns from player patterns
 *     - Adaptive difficulty
 *     
 *     Implementation: Implement binary search in reverse mode
 * 
 * 
 * 12. MOBILE APP VERSION
 *     ------------------
 *     - Port to Android/iOS
 *     - Touch interface
 *     - Mobile-friendly design
 *     - App store distribution
 *     
 *     Implementation: Use Android Studio or iOS development tools
 * 
 * 
 * 13. WEB VERSION
 *     -----------
 *     - Browser-based game
 *     - HTML/CSS/JavaScript
 *     - Responsive design
 *     - Online leaderboard
 *     
 *     Implementation: Rewrite in web technologies
 * 
 * 
 * 14. ACHIEVEMENTS SYSTEM
 *     -------------------
 *     - Unlock achievements for milestones
 *     - "First Win" achievement
 *     - "Speed Demon" for fast guesses
 *     - "Lucky Guess" for 1-attempt wins
 *     
 *     Implementation: Add achievement flags and check conditions
 * 
 * 
 * 15. THEMED VERSIONS
 *     ---------------
 *     - Different visual themes
 *     - Holiday themes (Christmas, Halloween)
 *     - Custom color schemes
 *     - Seasonal updates
 *     
 *     Implementation: Add theme selection and color variables
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 19: CONCLUSION
 * ============================================================================
 * 
 * The Number Guessing Game project successfully demonstrates fundamental C
 * programming concepts in a practical and engaging application. The program
 * effectively uses variables, data types, control structures (if-else,
 * switch, loops), functions, and random number generation to create an
 * interactive gaming experience.
 * 
 * 
 * KEY ACHIEVEMENTS:
 * -----------------
 * 
 * 1. Successfully implemented a complete, working game in C
 * 2. Demonstrated proper use of random number generation
 * 3. Created a modular, well-organized code structure
 * 4. Implemented robust input validation
 * 5. Developed a user-friendly console interface
 * 6. Provided comprehensive documentation
 * 7. Made the project suitable for college submission
 * 
 * 
 * LEARNING OUTCOMES:
 * ------------------
 * 
 * Through this project, we have learned:
 * 
 * - How to structure a C program with multiple functions
 * - Proper use of control structures for game logic
 * - Random number generation and its applications
 * - Input validation techniques for robust programs
 * - Modular programming and code organization
 * - Documentation and commenting best practices
 * - Problem-solving and logical thinking
 * - Testing and debugging techniques
 * 
 * 
 * PROJECT SUITABILITY:
 * --------------------
 * 
 * This project is ideal for:
 * 
 * - BCA/MCA college mini-projects
 * - First-year programming assignments
 * - Learning fundamental C concepts
 * - Understanding game development basics
 * - Practicing control structures and functions
 * - Building confidence in C programming
 * 
 * 
 * FINAL THOUGHTS:
 * ---------------
 * 
 * The Number Guessing Game serves as an excellent learning tool for
 * beginners to understand how various C programming concepts work together
 * to create a complete, functional application. The code is well-commented
 * and follows best practices, making it suitable for academic purposes and
 * easy to explain during viva examinations.
 * 
 * While the project has limitations, these are intentional to keep it
 * simple and accessible for beginner programmers. The future enhancements
 * section provides a roadmap for students who wish to expand their skills
 * by adding more advanced features.
 * 
 * Overall, this project demonstrates that even simple games can effectively
 * teach important programming concepts and provide a solid foundation for
 * more advanced software development projects.
 * 
 * 
 * ACKNOWLEDGMENTS:
 * ----------------
 * 
 * We would like to thank:
 * - Our professors for their guidance and support
 * - Department of Computer Applications, CSJM University
 * - Our classmates for valuable feedback
 * - Online resources and documentation for reference
 * 
 * 
 * PROJECT COMPLETION DATE: September 2026
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SECTION 20: VIVA QUESTIONS AND ANSWERS
 * ============================================================================
 * 
 * This section contains 25 common viva questions with detailed answers
 * to help you prepare for your project presentation.
 * 
 * 
 * Q1. What is the purpose of srand(time(NULL))?
 * ---------------------------------------------
 * A: srand(time(NULL)) seeds the random number generator with the current
 *    time. This ensures that rand() produces different sequences of random
 *    numbers each time the program runs. Without seeding, rand() would
 *    generate the same "random" numbers every time you run the program.
 *    The time(NULL) function returns the current time in seconds since
 *    January 1, 1970, which changes every second.
 * 
 * 
 * Q2. How do you generate a random number between 1 and 100?
 * ----------------------------------------------------------
 * A: Using the formula: rand() % 100 + 1
 *    More generally: rand() % (max - min + 1) + min
 *    
 *    Explanation:
 *    - rand() returns a number between 0 and RAND_MAX (typically 32767)
 *    - The modulo operator (%) gives the remainder
 *    - rand() % 100 gives a number between 0 and 99
 *    - Adding 1 shifts the range to 1-100
 *    
 *    Example: If rand() returns 12345
 *    12345 % 100 = 45
 *    45 + 1 = 46 (our random number between 1-100)
 * 
 * 
 * Q3. What is the difference between rand() and srand()?
 * ------------------------------------------------------
 * A: rand() and srand() serve different purposes:
 *    
 *    rand():
 *    - Generates pseudo-random numbers
 *    - Returns a value between 0 and RAND_MAX
 *    - Produces same sequence if not seeded
 *    - Called multiple times to get random numbers
 *    
 *    srand():
 *    - Sets the seed (starting point) for rand()
 *    - Takes an unsigned integer as parameter
 *    - Should be called once before using rand()
 *    - Different seeds produce different sequences
 *    
 *    Analogy: srand() is like setting the starting position of a roulette
 *    wheel, and rand() is like spinning the wheel to get a number.
 * 
 * 
 * Q4. Why do you use do-while loop in the game?
 * ---------------------------------------------
 * A: A do-while loop is used because:
 *    1. It executes the loop body at least once before checking condition
 *    2. Perfect for guessing games where player must make at least one guess
 *    3. The condition (guess != target) is checked after each guess
 *    4. More natural flow than while loop for this scenario
 *    
 *    Syntax:
 *    do {
 *        // Get guess, check, provide feedback
 *    } while(guess != target);
 *    
 *    If we used while loop, we'd need to get initial guess before loop,
 *    making code less clean.
 * 
 * 
 * Q5. What is input validation and why is it important?
 * -----------------------------------------------------
 * A: Input validation is the process of checking if user input is correct,
 *    expected, and safe before using it in the program.
 *    
 *    Importance:
 *    1. Prevents program crashes from invalid data
 *    2. Improves user experience with helpful error messages
 *    3. Ensures data integrity and correctness
 *    4. Protects against malicious input (security)
 *    5. Makes program more robust and reliable
 *    
 *    In our project:
 *    - Check if menu choice is 1, 2, or 3
 *    - Verify difficulty selection is valid
 *    - Ensure guess is a number, not text
 *    - Validate yes/no responses
 *    
 *    Example code:
 *    if(scanf("%d", &guess) == 1) {
 *        // Valid integer
 *    } else {
 *        // Invalid input, clear buffer and ask again
 *    }
 * 
 * 
 * Q6. Explain the switch statement used in your program.
 * ------------------------------------------------------
 * A: Switch statement is used in two places in our program:
 *    
 *    1. In main() for menu selection:
 *       switch(choice)
 *       {
 *           case 1: playGame(); break;
 *           case 2: displayInstructions(); break;
 *           case 3: return 0;
 *           default: printf("Invalid choice!"); break;
 *       }
 *    
 *    2. In setRange() for difficulty levels:
 *       switch(difficulty)
 *       {
 *           case 1: *min=1; *max=50; break;
 *           case 2: *min=1; *max=100; break;
 *           case 3: *min=1; *max=500; break;
 *       }
 *    
 *    Advantages of switch over if-else:
 *    - Cleaner and more readable for multiple choices
 *    - More efficient for checking one variable against many values
 *    - Easier to maintain and modify
 *    - Self-documenting code structure
 * 
 * 
 * Q7. What are the header files used and why?
 * -------------------------------------------
 * A: We use three header files:
 *    
 *    1. stdio.h (Standard Input/Output)
 *       - printf() for displaying output
 *       - scanf() for reading input
 *       - getchar() for reading characters and clearing buffer
 *    
 *    2. stdlib.h (Standard Library)
 *       - rand() for generating random numbers
 *       - srand() for seeding random number generator
 *    
 *    3. time.h (Time functions)
 *       - time() for getting current time
 *       - Used as seed for srand() to ensure different random numbers
 *    
 *    Without these headers, the compiler wouldn't recognize these functions.
 * 
 * 
 * Q8. How do you clear the input buffer?
 * --------------------------------------
 * A: Input buffer is cleared using:
 *    
 *    while(getchar() != '\n');
 *    
 *    Explanation:
 *    - getchar() reads one character from input buffer
 *    - != '\n' continues until newline character (Enter key) is found
 *    - Each character is read and discarded
 *    - Loop ends when Enter key is reached
 *    - Buffer is now empty and ready for new input
 *    
 *    When to clear buffer:
 *    - After invalid input (non-numeric when expecting number)
 *    - Before reading a character with scanf("%c")
 *    - After reading numbers to remove leftover newline
 *    
 *    Alternative method:
 *    fflush(stdin);  // Works on some compilers but not standard C
 * 
 * 
 * Q9. What is the time complexity of your game?
 * ---------------------------------------------
 * A: Time complexity depends on the number of guesses:
 *    
 *    Worst case: O(n)
 *    - Player might guess every number in range
 *    - For range 1-100, maximum 100 guesses
 *    - Linear time complexity
 *    
 *    Best case: O(1)
 *    - Player guesses correctly on first attempt
 *    - Constant time
 *    
 *    Average case (with binary search strategy): O(log n)
 *    - Player guesses middle of range each time
 *    - Halves the search space with each guess
 *    - For range 1-100, maximum 7 guesses needed
 *    - Logarithmic time complexity
 *    
 *    Space complexity: O(1)
 *    - Fixed amount of memory regardless of range
 *    - Only a few variables stored
 * 
 * 
 * Q10. Can you explain pointer usage in setRange function?
 * --------------------------------------------------------
 * A: In setRange function, we use pointers to modify original variables:
 *    
 *    void setRange(int difficulty, int *min, int *max)
 *    {
 *        switch(difficulty)
 *        {
 *            case 1:
 *                *min = 1;  // Modify value at address min
 *                *max = 50; // Modify value at address max
 *                break;
 *            // ... other cases
 *        }
 *    }
 *    
 *    Called from playGame():
 *    int minRange, maxRange;
 *    setRange(difficulty, &minRange, &maxRange);
 *    
 *    Explanation:
 *    - &minRange passes the ADDRESS of minRange (not the value)
 *    - int *min receives this address
 *    - *min = 1 changes the VALUE at that address
 *    - Original minRange in playGame() is modified
 *    
 *    Why use pointers here?
 *    - C functions can only return one value directly
 *    - We need to set both min AND max
 *    - Pointers allow us to modify multiple variables
 *    - This is called "pass by reference"
 * 
 * 
 * Q11. What happens if user enters a character instead of a number?
 * -----------------------------------------------------------------
 * A: Our program handles this gracefully through input validation:
 *    
 *    1. scanf("%d", &guess) tries to read an integer
 *    2. If user enters 'abc', scanf fails and returns 0
 *    3. We check: if(scanf("%d", &guess) == 1)
 *    4. Since it returned 0 (not 1), we know input is invalid
 *    5. We clear the buffer: while(getchar() != '\n');
 *    6. Display error: "Invalid input! Please enter a number."
 *    7. Loop continues and asks for input again
 *    
 *    The program does NOT crash because:
 *    - We check scanf's return value
 *    - We clear invalid input from buffer
 *    - We loop until valid input is received
 *    
 *    This is an example of robust error handling.
 * 
 * 
 * Q12. Why use functions instead of writing everything in main()?
 * ---------------------------------------------------------------
 * A: Using functions provides several advantages:
 *    
 *    1. Modularity: Code is divided into logical, manageable pieces
 *    2. Readability: Easier to understand what each part does
 *    3. Reusability: Functions can be called multiple times
 *    4. Maintainability: Easier to fix bugs or make changes
 *    5. Debugging: Easier to isolate and fix problems
 *    6. Testing: Each function can be tested independently
 *    7. Code organization: Better structure and flow
 *    8. Collaboration: Multiple people can work on different functions
 *    
 *    Example from our project:
 *    - displayMenu() can be reused whenever menu needs to be shown
 *    - If we want to change menu format, we modify only one function
 *    - playGame() can be tested independently from main menu
 *    - main() stays clean and readable
 *    
 *    Best practice: Each function should do ONE thing and do it well.
 * 
 * 
 * Q13. What is the range of rand() function?
 * ------------------------------------------
 * A: rand() returns a pseudo-random integer in the range:
 *    
 *    0 to RAND_MAX
 *    
 *    Where RAND_MAX is a constant defined in stdlib.h
 *    
 *    Typical values:
 *    - Most compilers: RAND_MAX = 32767 (2^15 - 1)
 *    - Some modern compilers: RAND_MAX = 2147483647 (2^31 - 1)
 *    
 *    To check RAND_MAX value in your system:
 *    printf("RAND_MAX = %d\n", RAND_MAX);
 *    
 *    To scale rand() to a specific range:
 *    - Range 0 to n: rand() % (n + 1)
 *    - Range 1 to n: rand() % n + 1
 *    - Range min to max: rand() % (max - min + 1) + min
 *    
 *    Important: rand() is pseudo-random, not truly random.
 *    For cryptographic purposes, use more secure random generators.
 * 
 * 
 * Q14. How would you add a hint system?
 * -------------------------------------
 * A: To add a hint system, we could:
 *    
 *    1. Add a hint counter variable
 *    2. After certain attempts (e.g., 5), offer a hint
 *    3. Create a giveHint() function:
 *    
 *    void giveHint(int target)
 *    {
 *        printf("\nHINT: ");
 *        if(target % 2 == 0)
 *            printf("The number is EVEN.\n");
 *        else
 *            printf("The number is ODD.\n");
 *    }
 *    
 *    4. Modify playGame() to call giveHint() after 5 attempts
 *    5. Could add more hints:
 *       - Divisible by 5
 *       - Greater than 50
 *       - Between 25 and 75
 *       - Sum of digits
 *    
 *    6. Could penalize hints by adding to attempt count
 *    
 *    Example integration:
 *    if(attempts == 5)
 *        giveHint(targetNumber);
 * 
 * 
 * Q15. What improvements would you suggest for your project?
 * ----------------------------------------------------------
 * A: Several improvements can be made:
 *    
 *    1. High Score System:
 *       - Save best scores to file
 *       - Display leaderboard
 *       - Track player statistics
 *    
 *    2. Timer Feature:
 *       - Track time taken to guess
 *       - Add time-based scoring
 *       - Create speed challenges
 *    
 *    3. Multiplayer Mode:
 *       - Two players compete
 *       - Alternate turns
 *       - Compare scores
 *    
 *    4. Better Graphics:
 *       - Use graphics.h library
 *       - Add colors to console
 *       - Create visual interface
 *    
 *    5. Sound Effects:
 *       - Add sounds for correct/wrong guesses
 *       - Victory music
 *       - Background music option
 *    
 *    6. More Difficulty Levels:
 *       - Expert mode (1-1000)
 *       - Custom range option
 *       - Progressive difficulty
 *    
 *    7. Achievements:
 *       - Unlock badges for milestones
 *       - Track accomplishments
 *       - Gamification elements
 *    
 *    8. Better AI:
 *       - Computer can guess player's number
 *       - Use binary search algorithm
 *       - Adaptive difficulty
 * 
 * 
 * Q16. What is a pseudo-random number?
 * ------------------------------------
 * A: Pseudo-random numbers are numbers that appear random but are actually
 *    generated by a deterministic algorithm.
 *    
 *    Characteristics:
 *    - Generated by mathematical formula
 *    - Sequence is determined by initial seed value
 *    - Same seed produces same sequence
 *    - Appears random but is predictable if you know the algorithm
 *    
 *    Why "pseudo"?
 *    - True randomness comes from physical processes
 *      (radioactive decay, atmospheric noise, etc.)
 *    - Computer algorithms are deterministic
 *    - Given same input, always produce same output
 *    - Not truly unpredictable
 *    
 *    In our project:
 *    - rand() generates pseudo-random numbers
 *    - srand(time(NULL)) provides different seed each run
 *    - Makes sequence appear random to users
 *    - Good enough for games and simulations
 *    
 *    For true randomness, need hardware random number generators.
 * 
 * 
 * Q17. Explain the formula: rand() % (max - min + 1) + min
 * --------------------------------------------------------
 * A: This formula generates a random number in range [min, max].
 *    
 *    Step-by-step breakdown:
 *    
 *    1. rand() returns a number between 0 and RAND_MAX
 *       Example: rand() = 15000
 *    
 *    2. (max - min + 1) calculates the range size
 *       Example: for 10 to 20, range = 20 - 10 + 1 = 11
 *    
 *    3. rand() % (max - min + 1) gives remainder
 *       - Result is between 0 and (range - 1)
 *       - Example: 15000 % 11 = 3 (between 0 and 10)
 *    
 *    4. Adding min shifts the range
 *       - Result is between min and max
 *       - Example: 3 + 10 = 13 (between 10 and 20)
 *    
 *    Complete example for range 50-100:
 *    - min = 50, max = 100
 *    - range = 100 - 50 + 1 = 51
 *    - rand() % 51 gives 0 to 50
 *    - Add 50: result is 50 to 100
 *    
 *    Why +1 in (max - min + 1)?
 *    - To include both endpoints
 *    - Without +1, max would never be reached
 *    - Example: 1 to 100 needs 100 numbers, not 99
 * 
 * 
 * Q18. What is the difference between = and == in C?
 * --------------------------------------------------
 * A: This is a fundamental distinction in C:
 *    
 *    = (Single equals) - ASSIGNMENT operator
 *    - Assigns a value to a variable
 *    - Example: x = 5; (x now equals 5)
 *    - Returns the assigned value
 *    - Used in statements
 *    
 *    == (Double equals) - EQUALITY operator
 *    - Compares two values for equality
 *    - Returns 1 (true) if equal, 0 (false) if not
 *    - Example: if(x == 5) (checks if x equals 5)
 *    - Used in conditions
 *    
 *    Common mistake:
 *    if(x = 5)  // WRONG! This assigns 5 to x, always true
 *    if(x == 5) // CORRECT! This checks if x equals 5
 *    
 *    In our project:
 *    - attempts = 0; (assignment)
 *    - if(guess == target) (comparison)
 *    - while(isValid == 0) (comparison)
 *    
 *    Always use == in if, while, for conditions!
 * 
 * 
 * Q19. What does return 0; mean in main()?
 * ----------------------------------------
 * A: return 0; in main() indicates successful program termination.
 *    
 *    Meaning:
 *    - 0 means "success" or "no errors"
 *    - Program completed normally
 *    - Operating system receives this exit code
 *    
 *    Alternative values:
 *    - return 1; or return -1; indicates error
 *    - Different numbers can indicate different error types
 *    - Non-zero values typically mean something went wrong
 *    
 *    Who receives this value?
 *    - Operating system
 *    - Parent process (if called from another program)
 *    - Command shell (can check with $? in Linux or %ERRORLEVEL% in Windows)
 *    
 *    Example in shell:
 *    ./game
 *    echo $?  // Displays 0 if game exited successfully
 *    
 *    Is return 0; necessary?
 *    - In C99 and later, main() implicitly returns 0 if no return statement
 *    - But it's good practice to include it explicitly
 *    - Makes code clearer and more portable
 * 
 * 
 * Q20. Can your game run on mobile phones?
 * ----------------------------------------
 * A: Not directly, but it can be adapted:
 *    
 *    Current version:
 *    - Designed for desktop/laptop computers
 *    - Uses keyboard input
 *    - Console-based interface
 *    - Requires C compiler
 *    
 *    To run on mobile:
 *    
 *    Option 1: C compiler apps
 *    - Install C compiler app on Android/iOS
 *    - Compile and run the code
 *    - Use on-screen keyboard for input
 *    
 *    Option 2: Rewrite in mobile language
 *    - Android: Java or Kotlin
 *    - iOS: Swift or Objective-C
 *    - Cross-platform: Flutter, React Native
 *    
 *    Option 3: Web version
 *    - Rewrite in HTML/CSS/JavaScript
 *    - Run in mobile browser
 *    - Touch-friendly interface
 *    
 *    Option 4: Use terminal emulator
 *    - Install terminal app on phone
 *    - Compile with GCC
 *    - Run in terminal
 *    
 *    The logic remains the same, only the interface changes.
 * 
 * 
 * Q21. How many lines of code is your project?
 * --------------------------------------------
 * A: The project consists of:
 *    
 *    Main source code (01_MAIN_SOURCE_CODE.c):
 *    - Total lines: ~350
 *    - Actual code: ~200 lines
 *    - Comments: ~150 lines
 *    - Blank lines: ~50 lines
 *    
 *    Documentation (02_PROJECT_DOCUMENTATION.c):
 *    - Total lines: ~1500+
 *    - Mostly comments explaining everything
 *    
 *    Code breakdown:
 *    - main(): ~80 lines
 *    - displayMenu(): ~15 lines
 *    - displayInstructions(): ~30 lines
 *    - getDifficulty(): ~25 lines
 *    - setRange(): ~20 lines
 *    - getRandomNumber(): ~5 lines
 *    - getValidGuess(): ~20 lines
 *    - playGame(): ~50 lines
 *    - displayResult(): ~25 lines
 *    - askPlayAgain(): ~20 lines
 *    
 *    Total executable statements: ~250
 *    Total with comments: ~350
 *    
 *    This is an appropriate size for a beginner college project.
 * 
 * 
 * Q22. What would happen if we remove srand(time(NULL))?
 * ------------------------------------------------------
 * A: Without srand(time(NULL)), the program would:
 *    
 *    1. Generate the SAME sequence of "random" numbers every run
 *    2. Example: First run might give 42, second run also 42
 *    3. Game becomes predictable and boring
 *    4. Players could memorize the sequence
 *    
 *    Why?
 *    - rand() is pseudo-random (deterministic algorithm)
 *    - Without seeding, it uses default seed (usually 1)
 *    - Same seed = same sequence
 *    - Like playing a movie from the same starting point
 *    
 *    Demonstration:
 *    Run this code twice:
 *    for(int i=0; i<5; i++)
 *        printf("%d ", rand());
 *    
 *    Without srand(): Same 5 numbers both times
 *    With srand(time(NULL)): Different 5 numbers each time
 *    
 *    Best practice:
 *    - Always call srand() before rand()
 *    - Use time(NULL) for different seed each run
 *    - Call srand() only ONCE (usually in main())
 * 
 * 
 * Q23. Is your code compatible with all C compilers?
 * --------------------------------------------------
 * A: Yes, the code is designed for maximum compatibility:
 *    
 *    Standards compliance:
 *    - Written in standard C (C89/C90 compatible)
 *    - No compiler-specific extensions
 *    - Uses only standard library functions
 *    - Should compile on any C compiler
 *    
 *    Tested compilers:
 *    - GCC (Linux, Mac, Windows with MinGW)
 *    - Turbo C (older Windows systems)
 *    - Code::Blocks bundled compiler
 *    - Dev-C++ bundled compiler
 *    - Clang
 *    - Microsoft Visual C++
 *    
 *    Compatible operating systems:
 *    - Windows (all versions)
 *    - Linux (all distributions)
 *    - macOS (all versions)
 *    - Any OS with C compiler
 *    
 *    Potential issues:
 *    - Very old compilers might need minor adjustments
 *    - Some compilers might show warnings (but should compile)
 *    - Console behavior might vary slightly across systems
 *    
 *    The code avoids:
 *    - C99-specific features (like variable-length arrays)
 *    - C11-specific features
 *    - Platform-specific code
 *    - Non-standard libraries
 * 
 * 
 * Q24. How did you test your program?
 * -----------------------------------
 * A: The program was tested thoroughly:
 *    
 *    1. Compilation testing:
 *       - Compiled on multiple compilers
 *       - Checked for warnings and errors
 *       - Fixed any issues found
 *    
 *    2. Functional testing:
 *       - Tested all menu options
 *       - Tested all difficulty levels
 *       - Verified random number generation
 *       - Checked attempt counter accuracy
 *    
 *    3. Input validation testing:
 *       - Entered invalid menu choices (0, 4, 5, -1)
 *       - Entered non-numeric guesses (abc, @#$, etc.)
 *       - Entered invalid yes/no responses (maybe, 1, 0)
 *       - Verified program doesn't crash
 *    
 *    4. Edge case testing:
 *       - Guessed minimum number in range
 *       - Guessed maximum number in range
 *       - Guessed correct on first attempt
 *       - Made many incorrect guesses
 *    
 *    5. Replay testing:
 *       - Played multiple games in succession
 *       - Verified new random number each game
 *       - Tested switching between difficulty levels
 *    
 *    6. User experience testing:
 *       - Checked message clarity
 *       - Verified formatting and alignment
 *       - Ensured instructions are helpful
 *    
 *    All tests passed successfully!
 * 
 * 
 * Q25. What was the most challenging part of this project?
 * --------------------------------------------------------
 * A: The most challenging aspects were:
 *    
 *    1. Input validation:
 *       - Handling non-numeric input without crashing
 *       - Clearing input buffer correctly
 *       - Looping until valid input received
 *       - Providing helpful error messages
 *    
 *    2. Random number generation:
 *       - Understanding rand() and srand()
 *       - Scaling to specific range
 *       - Ensuring different numbers each run
 *       - Avoiding common mistakes (forgetting to seed)
 *    
 *    3. Program structure:
 *       - Deciding which functions to create
 *       - Determining function parameters
 *       - Managing variable scope
 *       - Ensuring clean code flow
 *    
 *    4. Pointer usage:
 *       - Understanding pass-by-reference
 *       - Using pointers in setRange()
 *       - Modifying variables through pointers
 *       - Avoiding pointer errors
 *    
 *    5. Documentation:
 *       - Explaining code clearly
 *       - Creating comprehensive comments
 *       - Writing algorithm and flowchart
 *       - Preparing viva questions
 *    
 *    Overcoming these challenges helped us learn:
 *    - Problem-solving skills
 *    - Debugging techniques
 *    - Best coding practices
 *    - Importance of testing
 *    - Value of good documentation
 * 
 * 
 * ============================================================================
 *                          END OF DOCUMENTATION
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
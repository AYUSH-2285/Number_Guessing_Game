/*
 * ============================================================================
 *                         QUICK START GUIDE
 * ============================================================================
 * 
 * Want to get started in under 2 minutes? Follow these steps!
 * 
 * Project: Number Guessing Game
 * Students: Ayush Kumar Singh & Anurag Deivedi
 * College: Chhatrapati Shahu Ji Maharaj University
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * STEP 1: LOCATE THE MAIN FILE
 * ============================================================================
 * 
 * Find this file in your project folder:
 * 
 *     01_MAIN_SOURCE_CODE.c
 * 
 * This is the ONLY file you need to compile!
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * STEP 2: COMPILE (Choose your method)
 * ============================================================================
 * 
 * WINDOWS - Method 1 (Command Prompt):
 * -------------------------------------
 * 1. Open Command Prompt (Windows Key + R, type "cmd", Enter)
 * 2. Navigate to folder: cd C:\path\to\project
 * 3. Compile: gcc 01_MAIN_SOURCE_CODE.c -o game.exe
 * 4. Run: game.exe
 * 
 * WINDOWS - Method 2 (Code::Blocks - EASIEST):
 * ---------------------------------------------
 * 1. Open Code::Blocks
 * 2. Create new C project
 * 3. Copy code from 01_MAIN_SOURCE_CODE.c
 * 4. Press F9 (compiles and runs automatically)
 * 
 * LINUX:
 * ------
 * 1. Open Terminal (Ctrl+Alt+T)
 * 2. cd /path/to/project
 * 3. gcc 01_MAIN_SOURCE_CODE.c -o game
 * 4. ./game
 * 
 * MAC:
 * ----
 * 1. Open Terminal
 * 2. cd /path/to/project
 * 3. gcc 01_MAIN_SOURCE_CODE.c -o game
 * 4. ./game
 * 
 * DON'T HAVE GCC?
 * ---------------
 * Download Code::Blocks from: https://www.codeblocks.org/
 * It includes everything you need!
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * STEP 3: PLAY THE GAME
 * ============================================================================
 * 
 * Once compiled, the game will start automatically.
 * 
 * You'll see:
 * 
 * ========================================
 *    Welcome to Number Guessing Game!
 * ========================================
 * 
 * MAIN MENU:
 *   1. Start Game
 *   2. Instructions
 *   3. Exit
 * 
 * Just follow the on-screen prompts!
 * 
 * To Play:
 * --------
 * 1. Enter 1 to start game
 * 2. Choose difficulty (1=Easy, 2=Medium, 3=Hard)
 * 3. Enter your guesses
 * 4. Read hints (Too HIGH / Too LOW)
 * 5. Guess the number!
 * 6. Press 'y' to play again or 'n' for menu
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * STEP 4: VIEW DOCUMENTATION
 * ============================================================================
 * 
 * Your project includes complete documentation in these files:
 * 
 * 02_PROJECT_DOCUMENTATION.c
 * --------------------------
 * Complete project report with:
 * - Introduction
 * - Problem Statement
 * - Objectives
 * - Features
 * - Algorithm
 * - Flowchart descriptions
 * - Sample I/O
 * - Advantages & Limitations
 * - Viva Questions & Answers
 * 
 * 03_FLOWCHART_DESCRIPTION.c
 * ---------------------------
 * Text-based flowcharts showing:
 * - Main program flow
 * - Game logic flow
 * - Input validation flow
 * - All function flows
 * 
 * 04_README_AND_INSTRUCTIONS.c
 * -----------------------------
 * Detailed instructions for:
 * - Compilation on Windows/Linux/Mac
 * - Troubleshooting common errors
 * - How to play the game
 * - Project submission checklist
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * QUICK TROUBLESHOOTING
 * ============================================================================
 * 
 * Problem: "gcc not found"
 * Solution: Install Code::Blocks (includes GCC)
 * 
 * Problem: "file not found"
 * Solution: Make sure you're in the correct folder
 * 
 * Problem: Program won't run
 * Solution: Try compiling with: gcc 01_MAIN_SOURCE_CODE.c -o game -Wall
 * 
 * Problem: Same numbers every time
 * Solution: Make sure srand(time(NULL)) is in the code
 * 
 * Problem: Crashes on input
 * Solution: Check input validation code is correct
 * 
 * More help: See 04_README_AND_INSTRUCTIONS.c
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * PROJECT FILES SUMMARY
 * ============================================================================
 * 
 * File                          | Purpose
 * ------------------------------|------------------------------------------
 * 01_MAIN_SOURCE_CODE.c         | Main code (COMPILE THIS)
 * 02_PROJECT_DOCUMENTATION.c    | Complete project report
 * 03_FLOWCHART_DESCRIPTION.c    | Flowchart diagrams (text format)
 * 04_README_AND_INSTRUCTIONS.c  | Detailed compilation guide
 * 05_QUICK_START_GUIDE.c        | This file (quick reference)
 * 
 * After compilation:
 * game.exe (Windows) or game (Linux/Mac) - The actual game
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SUBMISSION CHECKLIST
 * ============================================================================
 * 
 * Before submitting, verify:
 * 
 * [ ] Program compiles without errors
 * [ ] Program runs correctly
 * [ ] All menu options work
 * [ ] Game plays properly
 * [ ] Input validation works
 * [ ] Replay option works
 * [ ] You understand the code
 * [ ] You've reviewed viva questions
 * [ ] Files are backed up
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * VIVA QUICK PREP
 * ============================================================================
 * 
 * Top 5 Questions to Prepare:
 * 
 * Q1: What does srand(time(NULL)) do?
 * A1: Seeds random number generator with current time for different numbers
 * 
 * Q2: How do you generate random numbers in a range?
 * A2: rand() % (max - min + 1) + min
 * 
 * Q3: Why use functions?
 * A3: Modularity, reusability, easier debugging, better organization
 * 
 * Q4: How does input validation work?
 * A4: Check scanf return value, clear buffer, loop until valid input
 * 
 * Q5: What C concepts are used?
 * A5: Variables, if-else, switch, loops, functions, random numbers, I/O
 * 
 * For complete viva prep: See 02_PROJECT_DOCUMENTATION.c Section 20
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * CODE STRUCTURE OVERVIEW
 * ============================================================================
 * 
 * The program has 10 functions:
 * 
 * 1. main()              - Entry point, main menu loop
 * 2. displayMenu()       - Show main menu
 * 3. displayInstructions() - Show game instructions
 * 4. playGame()          - Main game logic
 * 5. getDifficulty()     - Get difficulty level from user
 * 6. setRange()          - Set number range based on difficulty
 * 7. getRandomNumber()   - Generate random number
 * 8. getValidGuess()     - Get and validate player's guess
 * 9. displayResult()     - Show winning message and score
 * 10. askPlayAgain()     - Ask if player wants another round
 * 
 * Total lines: ~350 (including comments)
 * Executable code: ~200 lines
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * TIPS FOR SUCCESS
 * ============================================================================
 * 
 * 1. Read through the code once completely
 * 2. Understand each function's purpose
 * 3. Practice explaining the code out loud
 * 4. Test all features before submission
 * 5. Review viva questions
 * 6. Stay confident - you built this!
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * CONTACT INFO
 * ============================================================================
 * 
 * Project By:
 *   Ayush Kumar Singh
 *   Anurag Deivedi
 * 
 * College:
 *   Chhatrapati Shahu Ji Maharaj University, Kanpur
 * 
 * Department:
 *   Computer Applications (BCA/MCA)
 * 
 * Date:
 *   September 2026
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * YOU'RE READY!
 * ============================================================================
 * 
 * That's it! You now have everything you need:
 * 
 * - Source code to compile
 * - Documentation for submission
 * - Instructions for compilation
 * - Viva preparation material
 * 
 * Just follow the steps above and you're good to go!
 * 
 * BEST OF LUCK WITH YOUR PROJECT!
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * END OF QUICK START GUIDE
 * ============================================================================
 */
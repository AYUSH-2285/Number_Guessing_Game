/*
 * ============================================================================
 *                    README AND COMPILATION INSTRUCTIONS
 * ============================================================================
 * 
 * This file contains complete instructions for compiling and running the
 * Number Guessing Game project.
 * 
 * Project: Number Guessing Game in C Programming
 * College: Chhatrapati Shahu Ji Maharaj University, Kanpur
 * Students: Ayush Kumar Singh & Anurag Deivedi
 * Date: September 2026
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * PROJECT FILES
 * ============================================================================
 * 
 * Your project folder should contain these files:
 * 
 * 1. 01_MAIN_SOURCE_CODE.c           - Main C source code (compile this)
 * 2. 02_PROJECT_DOCUMENTATION.c      - Complete project documentation
 * 3. 03_FLOWCHART_DESCRIPTION.c      - Text-based flowchart descriptions
 * 4. 04_README_AND_INSTRUCTIONS.c    - This file (compilation guide)
 * 
 * After compilation, you'll also have:
 * 5. game.exe (Windows) or game (Linux/Mac) - Compiled executable
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * COMPILATION INSTRUCTIONS - WINDOWS
 * ============================================================================
 * 
 * METHOD 1: Using GCC (Command Prompt) - RECOMMENDED
 * ---------------------------------------------------
 * 
 * Step 1: Open Command Prompt
 *         - Press Windows Key + R
 *         - Type "cmd" and press Enter
 * 
 * Step 2: Navigate to project folder
 *         cd C:\path\to\your\project\folder
 *         
 *         Example:
 *         cd C:\Users\Ayush\Desktop\NumberGuessingGame
 * 
 * Step 3: Compile the program
 *         gcc 01_MAIN_SOURCE_CODE.c -o game.exe
 *         
 *         Or with warnings enabled:
 *         gcc 01_MAIN_SOURCE_CODE.c -o game.exe -Wall
 * 
 * Step 4: Run the program
 *         game.exe
 * 
 * 
 * METHOD 2: Using Code::Blocks IDE - EASIEST FOR BEGINNERS
 * ---------------------------------------------------------
 * 
 * Step 1: Download and install Code::Blocks
 *         - Go to https://www.codeblocks.org/
 *         - Download "codeblocks-20.03-mingw-setup.exe"
 *         - Run installer and follow instructions
 * 
 * Step 2: Create new project
 *         - Open Code::Blocks
 *         - File > New > Project
 *         - Select "Console application"
 *         - Click "Go"
 *         - Select "C" as language
 *         - Click "Next"
 * 
 * Step 3: Set project details
 *         - Project title: NumberGuessingGame
 *         - Folder to create project in: (choose your folder)
 *         - Click "Next"
 * 
 * Step 4: Create main file
 *         - File name: main.c (or keep default)
 *         - Click "Next"
 *         - Click "Finish"
 * 
 * Step 5: Replace code
 *         - Delete all code in main.c
 *         - Copy code from 01_MAIN_SOURCE_CODE.c
 *         - Paste into Code::Blocks editor
 *         - Save (Ctrl+S)
 * 
 * Step 6: Compile and run
 *         - Press F9 (or Build > Build and Run)
 *         - Game will start in console window
 * 
 * 
 * METHOD 3: Using Dev-C++ IDE
 * ----------------------------
 * 
 * Step 1: Download and install Dev-C++
 *         - Go to https://www.bloodshed.net/devcpp/
 *         - Download and install
 * 
 * Step 2: Create new source file
 *         - File > New > Source File
 *         - Or press Ctrl+N
 * 
 * Step 3: Copy and paste code
 *         - Copy code from 01_MAIN_SOURCE_CODE.c
 *         - Paste into Dev-C++ editor
 * 
 * Step 4: Save file
 *         - File > Save As
 *         - Name: main.c
 *         - Click "Save"
 * 
 * Step 5: Compile and run
 *         - Press F11 (or Execute > Compile & Run)
 *         - Game will start
 * 
 * 
 * METHOD 4: Using Turbo C++ (Old Systems)
 * ----------------------------------------
 * 
 * Step 1: Open Turbo C++
 * 
 * Step 2: Create new file
 *         - File > New
 * 
 * Step 3: Copy code
 *         - Copy from 01_MAIN_SOURCE_CODE.c
 *         - Paste into Turbo C++ editor
 * 
 * Step 4: Save file
 *         - File > Save
 *         - Name: GAME.C
 * 
 * Step 5: Compile
 *         - Press Alt+F9
 *         - Check for errors
 * 
 * Step 6: Run
 *         - Press Ctrl+F9
 * 
 * Note: Turbo C++ is outdated. Use Code::Blocks or Dev-C++ if possible.
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * COMPILATION INSTRUCTIONS - LINUX
 * ============================================================================
 * 
 * METHOD 1: Using GCC (Terminal) - RECOMMENDED
 * ---------------------------------------------
 * 
 * Step 1: Open Terminal
 *         - Press Ctrl+Alt+T
 *         - Or search "Terminal" in applications
 * 
 * Step 2: Navigate to project folder
 *         cd /path/to/your/project/folder
 *         
 *         Example:
 *         cd /home/ayush/Projects/NumberGuessingGame
 * 
 * Step 3: Check if GCC is installed
 *         gcc --version
 *         
 *         If not installed, install it:
 *         sudo apt-get update
 *         sudo apt-get install gcc
 * 
 * Step 4: Compile the program
 *         gcc 01_MAIN_SOURCE_CODE.c -o game
 *         
 *         Or with warnings:
 *         gcc 01_MAIN_SOURCE_CODE.c -o game -Wall
 * 
 * Step 5: Run the program
 *         ./game
 * 
 * 
 * METHOD 2: Using Code::Blocks on Linux
 * --------------------------------------
 * 
 * Step 1: Install Code::Blocks
 *         sudo apt-get install codeblocks
 * 
 * Step 2: Open Code::Blocks
 *         - Applications > Programming > Code::Blocks
 * 
 * Step 3: Create new project
 *         - Same steps as Windows (see above)
 * 
 * Step 4: Copy code and compile
 *         - Same steps as Windows
 *         - Press F9 to compile and run
 * 
 * 
 * METHOD 3: Using Geany Editor
 * -----------------------------
 * 
 * Step 1: Install Geany
 *         sudo apt-get install geany
 * 
 * Step 2: Open Geany
 *         - Applications > Programming > Geany
 * 
 * Step 3: Open source file
 *         - File > Open
 *         - Select 01_MAIN_SOURCE_CODE.c
 * 
 * Step 4: Compile and run
 *         - Press F5 (or Build > Execute)
 *         - Or use menu: Build > Compile, then Build > Execute
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * COMPILATION INSTRUCTIONS - macOS
 * ============================================================================
 * 
 * METHOD 1: Using GCC/Clang (Terminal)
 * -------------------------------------
 * 
 * Step 1: Install Xcode Command Line Tools
 *         - Open Terminal
 *         - Type: xcode-select --install
 *         - Follow installation prompts
 * 
 * Step 2: Open Terminal
 *         - Press Cmd+Space
 *         - Type "Terminal"
 *         - Press Enter
 * 
 * Step 3: Navigate to project folder
 *         cd /path/to/your/project/folder
 *         
 *         Example:
 *         cd /Users/Ayush/Documents/NumberGuessingGame
 * 
 * Step 4: Compile the program
 *         gcc 01_MAIN_SOURCE_CODE.c -o game
 *         
 *         Or using Clang:
 *         clang 01_MAIN_SOURCE_CODE.c -o game
 * 
 * Step 5: Run the program
 *         ./game
 * 
 * 
 * METHOD 2: Using Code::Blocks on macOS
 * --------------------------------------
 * 
 * Step 1: Download Code::Blocks for Mac
 *         - Go to https://www.codeblocks.org/
 *         - Download macOS version
 *         - Install following instructions
 * 
 * Step 2: Create project and compile
 *         - Same steps as Windows version
 *         - Press F9 to compile and run
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * TROUBLESHOOTING COMMON ERRORS
 * ============================================================================
 * 
 * ERROR 1: "gcc: command not found" or "gcc is not recognized"
 * -----------------------------------------------------------
 * Cause: GCC compiler is not installed or not in PATH
 * 
 * Solution for Windows:
 * - Install MinGW from https://www.mingw-w64.org/
 * - Or install Code::Blocks (includes GCC)
 * - Add GCC to PATH environment variable
 * 
 * Solution for Linux:
 * - Run: sudo apt-get install gcc
 * - Or: sudo yum install gcc
 * 
 * Solution for Mac:
 * - Run: xcode-select --install
 * 
 * 
 * ERROR 2: "undefined reference to `srand'" or "undefined reference to `rand'"
 * ----------------------------------------------------------------------------
 * Cause: Missing stdlib.h header or linker issue
 * 
 * Solution:
 * - Make sure #include <stdlib.h> is in your code
 * - Try compiling with: gcc filename.c -o game -lm
 * 
 * 
 * ERROR 3: "undefined reference to `time'"
 * ----------------------------------------
 * Cause: Missing time.h header or linker issue
 * 
 * Solution:
 * - Make sure #include <time.h> is in your code
 * - Try compiling with: gcc filename.c -o game -lrt
 * 
 * 
 * ERROR 4: "No such file or directory"
 * ------------------------------------
 * Cause: Wrong path or file doesn't exist
 * 
 * Solution:
 * - Check you're in correct directory (use 'pwd' or 'cd')
 * - Verify file exists: ls (Linux/Mac) or dir (Windows)
 * - Use correct file name: 01_MAIN_SOURCE_CODE.c
 * 
 * 
 * ERROR 5: "Permission denied" when running ./game
 * ------------------------------------------------
 * Cause: Executable doesn't have execute permission (Linux/Mac)
 * 
 * Solution:
 * - Run: chmod +x game
 * - Then: ./game
 * 
 * 
 * ERROR 6: Program compiles but shows black screen and closes
 * ----------------------------------------------------------
 * Cause: Program might be waiting for input or has logic error
 * 
 * Solution:
 * - Check if program is waiting for Enter key
 * - Run from terminal to see output
 * - Add printf statements for debugging
 * 
 * 
 * ERROR 7: "expected ';' before..." or syntax errors
 * --------------------------------------------------
 * Cause: Code has syntax errors or missing semicolons
 * 
 * Solution:
 * - Read error message carefully
 * - Check line number mentioned in error
 * - Look for missing semicolons, brackets, parentheses
 * - Copy code exactly from 01_MAIN_SOURCE_CODE.c
 * 
 * 
 * ERROR 8: "warning: implicit declaration of function..."
 * -------------------------------------------------------
 * Cause: Missing header file or function not declared
 * 
 * Solution:
 * - Add required header files at top
 * - Check function names are spelled correctly
 * - This is usually just a warning, program may still work
 * 
 * 
 * ERROR 9: Same random numbers every time
 * ---------------------------------------
 * Cause: Forgot to seed random number generator
 * 
 * Solution:
 * - Make sure srand(time(NULL)); is in main()
 * - Check #include <time.h> is present
 * - Compile and run again
 * 
 * 
 * ERROR 10: Program crashes on invalid input
 * ------------------------------------------
 * Cause: Input validation not working properly
 * 
 * Solution:
 * - Check input validation code is correct
 * - Verify buffer clearing with getchar()
 * - Test with different inputs
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * HOW TO PLAY THE GAME
 * ============================================================================
 * 
 * Step 1: Compile the program (see instructions above)
 * 
 * Step 2: Run the executable
 *         - Windows: game.exe
 *         - Linux/Mac: ./game
 * 
 * Step 3: You'll see the welcome screen:
 * 
 *         ========================================
 *            Welcome to Number Guessing Game!
 *         ========================================
 * 
 *         ========================================
 *                    MAIN MENU
 *         ========================================
 *           1. Start Game
 *           2. Instructions
 *           3. Exit
 *         ========================================
 * 
 *         Enter your choice (1-3):
 * 
 * Step 4: Enter your choice (1, 2, or 3)
 *         - Press 1 to start game
 *         - Press 2 to read instructions
 *         - Press 3 to exit
 * 
 * Step 5: If you chose "Start Game", select difficulty:
 *         - 1 for Easy (numbers 1-50)
 *         - 2 for Medium (numbers 1-100)
 *         - 3 for Hard (numbers 1-500)
 * 
 * Step 6: Game starts! Enter your guesses:
 *         - Read the hint (Too HIGH / Too LOW)
 *         - Adjust your next guess accordingly
 *         - Keep guessing until you find the number
 * 
 * Step 7: When you guess correctly:
 *         - You'll see congratulations message
 *         - Total attempts will be shown
 *         - Performance rating will be displayed
 * 
 * Step 8: Choose to play again or return to menu:
 *         - Press 'y' to play another round
 *         - Press 'n' to return to main menu
 * 
 * Step 9: Have fun and try to beat your score!
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SAMPLE GAME SESSION
 * ============================================================================
 * 
 * Here's what a complete game session looks like:
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
 * [Press Enter to return to main menu]
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * PROJECT SUBMISSION CHECKLIST
 * ============================================================================
 * 
 * Before submitting your project, make sure you have:
 * 
 * [ ] 1. All source files
 *     - 01_MAIN_SOURCE_CODE.c
 *     - 02_PROJECT_DOCUMENTATION.c
 *     - 03_FLOWCHART_DESCRIPTION.c
 *     - 04_README_AND_INSTRUCTIONS.c
 * 
 * [ ] 2. Compiled executable
 *     - game.exe (Windows) or game (Linux/Mac)
 *     - Test that it runs correctly
 * 
 * [ ] 3. Printed documentation (if required)
 *     - Print project documentation
 *     - Include flowcharts
 *     - Add title page with your details
 * 
 * [ ] 4. Tested on your system
 *     - Program compiles without errors
 *     - Program runs correctly
 *     - All features work (menu, game, replay)
 *     - Input validation works
 * 
 * [ ] 5. Prepared for viva
 *     - Reviewed all C concepts used
 *     - Practiced explaining code
 *     - Studied viva questions
 *     - Ready to demonstrate program
 * 
 * [ ] 6. Backed up your files
 *     - Copy to USB drive
 *     - Upload to cloud (Google Drive, etc.)
 *     - Email to yourself
 * 
 * [ ] 7. Added your details
 *     - Name: Ayush Kumar Singh & Anurag Deivedi
 *     - College: Chhatrapati Shahu Ji Maharaj University
 *     - Course: BCA/MCA
 *     - Date: September 2026
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * VIVA PREPARATION TIPS
 * ============================================================================
 * 
 * 1. UNDERSTAND YOUR CODE
 *    - Know what each function does
 *    - Be able to explain every line
 *    - Practice explaining out loud
 * 
 * 2. REVIEW C CONCEPTS
 *    - Variables and data types
 *    - if-else, switch statements
 *    - Loops (while, do-while)
 *    - Functions and parameters
 *    - Random number generation
 *    - Input validation
 * 
 * 3. PRACTICE COMPILATION
 *    - Know how to compile
 *    - Understand compiler flags
 *    - Be ready to compile on spot
 * 
 * 4. PREPARE EXAMPLES
 *    - Have sample output ready
 *    - Show different difficulty levels
 *    - Demonstrate input validation
 * 
 * 5. COMMON QUESTIONS TO PREPARE
 *    - What is rand() and srand()?
 *    - Why use functions?
 *    - How does input validation work?
 *    - What are the limitations?
 *    - How would you improve it?
 * 
 * 6. STAY CALM AND CONFIDENT
 *    - Speak clearly
 *    - Take time to think
 *    - It's okay to say "I'm not sure"
 *    - Show enthusiasm for your work
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * CONTACT AND SUPPORT
 * ============================================================================
 * 
 * If you have questions or issues with this project:
 * 
 * 1. Check this README file first
 *    - Most common issues are covered here
 *    - Follow instructions carefully
 * 
 * 2. Review the documentation
 *    - 02_PROJECT_DOCUMENTATION.c has detailed explanations
 *    - Code comments explain each section
 * 
 * 3. Search online
 *    - GCC installation guides
 *    - C programming tutorials
 *    - Code::Blocks documentation
 * 
 * 4. Ask your professors or classmates
 *    - They can help with compilation
 *    - Can explain C concepts
 *    - May have faced similar issues
 * 
 * 5. Check college resources
 *    - Computer lab assistants
 *    - Programming help centers
 *    - Online learning portals
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * FINAL NOTES
 * ============================================================================
 * 
 * This Number Guessing Game project is designed to:
 * 
 * - Demonstrate fundamental C programming concepts
 * - Provide a complete, working application
 * - Be suitable for college submission
 * - Help you learn and practice C programming
 * - Prepare you for more advanced projects
 * 
 * Key features:
 * - Clean, modular code structure
 * - Comprehensive documentation
 * - Input validation and error handling
 * - User-friendly interface
 * - Multiple difficulty levels
 * - Replay functionality
 * 
 * We hope this project helps you:
 * - Understand C programming better
 * - Gain confidence in coding
 * - Learn project documentation
 * - Prepare for your viva examination
 * - Build a foundation for future projects
 * 
 * Good luck with your submission!
 * 
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
 *                         END OF README FILE
 * ============================================================================
 */
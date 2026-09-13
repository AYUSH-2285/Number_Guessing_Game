/*
 * ============================================================================
 *                    FLOWCHART DESCRIPTION - TEXT FORMAT
 * ============================================================================
 * 
 * This file contains text-based flowchart representations that can be
 * viewed in any text editor or C compiler.
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
 * FLOWCHART 1: MAIN PROGRAM FLOW
 * ============================================================================
 * 
 *                              [START]
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Initialize:            |
 *                    | srand(time(NULL))      |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display Welcome        |
 *                    | Message                |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display Main Menu      |
 *                    | 1. Start Game          |
 *                    | 2. Instructions        |
 *                    | 3. Exit                |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Get User Choice (1-3)  |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    |   Check Choice Value   |
 *                    |    <DECISION>          |
 *                    +------------------------+
 *                                 |
 *            +--------------------+--------------------+
 *            |                    |                    |
 *            V                    V                    V
 *    +---------------+    +---------------+    +---------------+
 *    | Choice = 1    |    | Choice = 2    |    | Choice = 3    |
 *    +---------------+    +---------------+    +---------------+
 *            |                    |                    |
 *            V                    V                    V
 *    +---------------+    +---------------+    +---------------+
 *    | Call          |    | Call          |    | Display       |
 *    | playGame()    |    | display       |    | Goodbye &     |
 *    |               |    | Instructions()|    | Exit          |
 *    +---------------+    +---------------+    +---------------+
 *            |                    |                    |
 *            |                    |                    |
 *            +--------------------+--------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Invalid Choice?        |
 *                    | Display Error          |
 *                    +------------------------+
 *                                 |
 *            +--------------------+--------------------+
 *            |                                         |
 *            +--------------------+--------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Wait for Enter Key     |
 *                    +------------------------+
 *                                 |
 *                                 +------>[Loop back to Menu]
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * FLOWCHART 2: GAME PLAY LOGIC (playGame function)
 * ============================================================================
 * 
 *                    [playGame() START]
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Call getDifficulty()   |
 *                    | Get difficulty level   |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Call setRange()        |
 *                    | Set min and max based  |
 *                    | on difficulty          |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Call getRandomNumber() |
 *                    | Generate target number |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display Game Start     |
 *                    | Message                |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Initialize:            |
 *                    | attempts = 0           |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +========================+
 *                    |   DO-WHILE LOOP START  |
 *                    +========================+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Call getValidGuess()   |
 *                    | Get player's guess     |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | attempts = attempts + 1|
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Compare guess with     |
 *                    | target <DECISION>      |
 *                    +------------------------+
 *                                 |
 *            +--------------------+--------------------+
 *            |                    |                    |
 *            V                    V                    V
 *    +---------------+    +---------------+    +---------------+
 *    | guess > target|    | guess < target|    | guess = target|
 *    +---------------+    +---------------+    +---------------+
 *            |                    |                    |
 *            V                    V                    |
 *    +---------------+    +---------------+            |
 *    | Display:      |    | Display:      |            |
 *    | "Too HIGH!"   |    | "Too LOW!"    |            |
 *    +---------------+    +---------------+            |
 *            |                    |                    |
 *            +--------------------+--------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | WHILE guess != target? |
 *                    |   <LOOP CONDITION>     |
 *                    +------------------------+
 *                                 |
 *                    +------------+------------+
 *                    |                         |
 *               YES  |                         | NO
 *            (continue)                   (exit loop)
 *                    |                         |
 *                    |                         V
 *                    |              +------------------------+
 *                    |              | Call displayResult()   |
 *                    |              | Show congratulations,  |
 *                    |              | target, attempts,      |
 *                    |              | performance rating     |
 *                    |              +------------------------+
 *                    |                         |
 *                    |                         V
 *                    |              +------------------------+
 *                    |              | Call askPlayAgain()    |
 *                    |              | Get response (y/n)     |
 *                    |              +------------------------+
 *                    |                         |
 *                    |                         V
 *                    |              +------------------------+
 *                    |              | Check response         |
 *                    |              | <DECISION>             |
 *                    |              +------------------------+
 *                    |                         |
 *              +-----+-----+             +-----+-----+
 *              |           |             |           |
 *              V           |             V           |
 *    +---------------+     |   +---------------+     |
 *    | response =    |     |   | response =    |     |
 *    | 'y' or 'Y'    |     |   | 'n' or 'N'    |     |
 *    +---------------+     |   +---------------+     |
 *              |           |             |           |
 *              |           |             V           |
 *              |           |   +---------------+     |
 *              |           |   | Return to     |     |
 *              |           |   | main menu     |     |
 *              |           |   +---------------+     |
 *              |           |                         |
 *              +-----------+-------------------------+
 *                          |
 *                          V
 *              [Recursive call to playGame()]
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * FLOWCHART 3: INPUT VALIDATION (getValidGuess function)
 * ============================================================================
 * 
 *                    [getValidGuess() START]
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Initialize:            |
 *                    | isValid = 0 (false)    |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +========================+
 *                    |   WHILE LOOP START     |
 *                    | isValid == 0?          |
 *                    +========================+
 *                                 |
 *                    +------------+------------+
 *                    |                         |
 *               YES  |                         | NO (exit loop)
 *            (continue)                   (return guess)
 *                    |                         |
 *                    V                         V
 *    +------------------------+      [RETURN guess]
 *    | Display prompt:        |
 *    | "Enter your guess: "   |
 *    +------------------------+
 *                    |
 *                    V
 *    +------------------------+
 *    | result = scanf("%d")   |
 *    +------------------------+
 *                    |
 *                    V
 *    +------------------------+
 *    | Check result           |
 *    | <DECISION>             |
 *    +------------------------+
 *            |
 *    +-------+-------+
 *    |               |
 *    V               V
 * +-------+       +-------+
 * |result |       |result |
 * | == 1  |       | == 0  |
 * |(valid)|       |(invalid)|
 * +-------+       +-------+
 *    |               |
 *    V               V
 * +-------+       +-------+
 * |isValid|       |Clear  |
 * |= 1    |       |buffer:|
 * +-------+       |while( |
 *    |            |getchar|
 *    |            |!='\n')|
 *    |            +-------+
 *    |                 |
 *    |                 V
 *    |            +-------+
 *    |            |Display|
 *    |            |error: |
 *    |            |"Inval-|
 *    |            |id!"   |
 *    |            +-------+
 *    |                 |
 *    +--------+--------+
 *             |
 *             +------>[Loop back to WHILE]
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * FLOWCHART 4: DIFFICULTY SELECTION (getDifficulty function)
 * ============================================================================
 * 
 *                    [getDifficulty() START]
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display difficulty     |
 *                    | options:               |
 *                    | 1. Easy (1-50)         |
 *                    | 2. Medium (1-100)      |
 *                    | 3. Hard (1-500)        |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +========================+
 *                    |   DO-WHILE LOOP START  |
 *                    +========================+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display prompt:        |
 *                    | "Enter difficulty      |
 *                    | (1-3): "               |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | scanf("%d", &diff)     |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Check: diff < 1 OR     |
 *                    | diff > 3?              |
 *                    | <DECISION>             |
 *                    +------------------------+
 *                                 |
 *                    +------------+------------+
 *                    |                         |
 *               YES  |                         | NO (valid)
 *            (invalid)                    (exit loop)
 *                    |                         |
 *                    V                         V
 *    +------------------------+      [RETURN difficulty]
 *    | Display error:         |
 *    | "Invalid choice!"      |
 *    +------------------------+
 *                    |
 *                    +------>[Loop back to DO]
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * FLOWCHART 5: RESULT DISPLAY (displayResult function)
 * ============================================================================
 * 
 *                    [displayResult() START]
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display:               |
 *                    | "CONGRATULATIONS!"     |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display target number  |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display attempts count |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Check attempts value   |
 *                    | <DECISION>             |
 *                    +------------------------+
 *                                 |
 *            +--------------------+--------------------+
 *            |                    |                    |
 *            V                    V                    V
 *    +---------------+    +---------------+    +---------------+
 *    | attempts <= 5 |    |attempts <= 10 |    |attempts <= 15 |
 *    +---------------+    +---------------+    +---------------+
 *            |                    |                    |
 *            V                    V                    V
 *    +---------------+    +---------------+    +---------------+
 *    | Display:      |    | Display:      |    | Display:      |
 *    | "EXCELLENT!"  |    | "VERY GOOD!"  |    | "GOOD!"       |
 *    +---------------+    +---------------+    +---------------+
 *            |                    |                    |
 *            +--------------------+--------------------+
 *                                 |
 *                    +------------+------------+
 *                    |                         |
 *                    V                         V
 *            +---------------+         +---------------+
 *            | attempts > 15 |         | (any other)   |
 *            +---------------+         +---------------+
 *                    |                         |
 *                    V                         V
 *            +---------------+         +---------------+
 *            | Display:      |         | Display:      |
 *            | "Keep trying!"|         | (appropriate  |
 *            +---------------+         | message)      |
 *                    |                 +---------------+
 *                    |                         |
 *                    +------------+------------+
 *                                 |
 *                                 V
 *                    +------------------------+
 *                    | Display separator line |
 *                    +------------------------+
 *                                 |
 *                                 V
 *                    [RETURN to caller]
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * FLOWCHART 6: COMPLETE PROGRAM STRUCTURE
 * ============================================================================
 * 
 * +==========================================================================+
 * |                           MAIN PROGRAM FLOW                              |
 * +==========================================================================+
 * |                                                                          |
 * |  [START] --> [Initialize srand()] --> [Display Welcome]                  |
 * |                                           |                              |
 * |                                           V                              |
 * |  +------------------------------------[MAIN MENU LOOP]----------------+  |
 * |  |                                                                    |  |
 * |  |  [Display Menu] --> [Get Choice] --> [Switch Statement]            |  |
 * |  |                                       |                            |  |
 * |  |         +-----------------------------+------------------+          |  |
 * |  |         |                             |                  |          |  |
 * |  |         V                             V                  V          |  |
 * |  |  [Case 1: playGame()]      [Case 2: displayInstructions()]          |  |
 * |  |         |                             |                             |  |
 * |  |         V                             V                             |  |
 * |  |  [Game Logic]                 [Show Help]                           |  |
 * |  |         |                             |                             |  |
 * |  |         +--------------+--------------+                             |  |
 * |  |                        |                                            |  |
 * |  |                        V                                            |  |
 * |  |                 [Wait for Enter]                                    |  |
 * |  |                        |                                            |  |
 * |  |                        +------[Loop back to Menu]------------------+  |
 * |  |                                                                       |  |
 * |  |  [Case 3: Exit]                                                      |  |
 * |  |         |                                                             |  |
 * |  |         V                                                             |  |
 * |  |  [Display Goodbye]                                                    |  |
 * |  |         |                                                             |  |
 * |  |         V                                                             |  |
 * |  +-----> [END] <---------------------------------------------------------+  |
 * |                                                                          |
 * +==========================================================================+
 * 
 * +==========================================================================+
 * |                         playGame() FUNCTION FLOW                         |
 * +==========================================================================+
 * |                                                                          |
 * |  [START] --> [Get Difficulty] --> [Set Range] --> [Generate Random]     |
 * |                                                      |                   |
 * |                                                      V                   |
 * |  [Display Message] --> [attempts = 0] --> [GUESSING LOOP]               |
 * |                                    |                                     |
 * |                                    V                                     |
 * |  [Get Guess] --> [attempts++] --> [Compare with Target]                 |
 * |                                      |                                   |
 * |         +----------------------------+------------------+                |
 * |         |                            |                  |                |
 * |         V                            V                  V                |
 * |  [Too HIGH]                    [Too LOW]          [Correct]             |
 * |         |                            |                  |                |
 * |         +----------------------------+------------------+                |
 * |                                    |                                     |
 * |                                    V                                     |
 * |  [Loop continues if wrong] <-- [Check Condition]                         |
 * |                                    |                                     |
 * |                                    V (if correct)                        |
 * |  [Display Result] --> [Ask Play Again] --> [Check Response]             |
 * |                                          |                               |
 * |                                    +-----+-----+                         |
 * |                                    |           |                         |
 * |                                    V           V                         |
 * |                              [Yes: Replay] [No: Return]                  |
 * |                                    |                                     |
 * |                                    +--[Call playGame() again]            |
 * |                                                                          |
 * +==========================================================================+
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * SYMBOL LEGEND
 * ============================================================================
 * 
 * The following symbols are used in flowchart notation:
 * 
 * [RECTANGLE]          : Process/Action
 *                      Example: [Display Menu], [Get Choice]
 * 
 * <DIAMOND>            : Decision/Condition
 *                      Example: <Check Choice Value>, <Compare with Target>
 * 
 * (OVAL)               : Start/End terminal
 *                      Example: (START), (END)
 * 
 * {PARALLELOGRAM}      : Input/Output
 *                      Example: {Get User Input}, {Display Message}
 * 
 * ======LOOP======     : Loop boundary (do-while, while)
 *                      Example: ======WHILE LOOP START======
 * 
 * +----------------+   : Subroutine/Function call
 * | Function Name  |    Example: +----------------+
 * +----------------+            | Call playGame() |
 *                               +----------------+
 * 
 * Arrows (-->)         : Flow direction
 *                      Example: [Step 1] --> [Step 2]
 * 
 * +=====TITLE=====+    : Section headers and boundaries
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * HOW TO DRAW THESE FLOWCHARTS
 * ============================================================================
 * 
 * If you need to create visual flowcharts for your project report, you can:
 * 
 * METHOD 1: Using Microsoft Word/PowerPoint
 * ------------------------------------------
 * 1. Insert > Shapes
 * 2. Use:
 *    - Rectangle for processes
 *    - Diamond for decisions
 *    - Oval for start/end
 *    - Arrows for flow
 * 3. Add text boxes for labels
 * 4. Group all elements together
 * 
 * 
 * METHOD 2: Using draw.io (Free Online Tool)
 * -------------------------------------------
 * 1. Go to https://app.diagrams.net/
 * 2. Select "Flowchart" template
 * 3. Drag and drop shapes from left panel
 * 4. Connect shapes with arrows
 * 5. Add text to shapes
 * 6. Export as PNG or PDF
 * 
 * 
 * METHOD 3: Using Lucidchart (Free Online)
 * -----------------------------------------
 * 1. Go to https://www.lucidchart.com/
 * 2. Create free account
 * 3. Select "Flowchart" template
 * 4. Build your flowchart
 * 5. Download as image
 * 
 * 
 * METHOD 4: Using Code::Blocks or Dev-C++
 * ----------------------------------------
 * 1. Some IDEs have built-in flowchart generators
 * 2. Check plugins or extensions
 * 3. Can auto-generate from code structure
 * 
 * 
 * METHOD 5: Hand Drawing
 * ----------------------
 * 1. Use pencil and paper or whiteboard
 * 2. Draw shapes freehand
 * 3. Take photo or scan
 * 4. Insert into document
 * 
 * 
 * TIPS FOR GOOD FLOWCHARTS:
 * -------------------------
 * - Start from top, flow downward
 * - Use consistent shape sizes
 * - Keep arrows clear and uncrossed
 * - Use standard flowchart symbols
 * - Label all shapes clearly
 * - Include start and end points
 * - Test flowchart by tracing paths
 * 
 * ============================================================================
 */


/*
 * ============================================================================
 * END OF FLOWCHART DOCUMENTATION
 * ============================================================================
 * 
 * This file contains complete text-based flowchart descriptions for the
 * Number Guessing Game project. Use these descriptions to:
 * 
 * 1. Understand program flow and logic
 * 2. Create visual flowcharts for your report
 * 3. Explain program structure during viva
 * 4. Document algorithm implementation
 * 5. Study program control flow
 * 
 * For visual flowcharts, refer to:
 * - flowchart_main.png (if provided)
 * - flowchart_game_logic.png (if provided)
 * 
 * Or create your own using the methods described above.
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
 */
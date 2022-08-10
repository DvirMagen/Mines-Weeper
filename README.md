# Mines-Weeper

The game is structured according to the following rules:
• The game starts by displaying a menu where the player selects the game board.
• The player is presented with four possible sizes: 8x8, 12x12, 15x15 or free choice. 
For the free choice: the input will be a pair of numbers, width and height, which defines the size of the board 
(the width and height will be numbers between 1 and 22). The selection will be displayed as a menu: 0 for the exit, 
and 1-4 for the panel size options. 
Any other selection will issue an appropriate error message and display the menu again. It can be assumed that the user enters an integer.
• The size of the board in this project is by using different board sizes of the game.
• The number of mines on the board is 8 and their position will be calculated randomly on the board. To calculate random numbers, 
see the code sample attached to the project on the course website.
• The program will show the state of the board at every stage. Here are the possible characters that will appear in each slot on the board:
o X - for a hidden slot (which is the case for all the starting board slots).
o Number - for a cell that is not hidden (revealed by the user), the number is the amount of mines in the neighboring cells for that cell.
o Space - for a slot that is not hidden (revealed by the user), if the number of mines in the neighboring slots is 0.
• The game board will be displayed with numbering of the rows and columns (a number from 0 to 7 for the rows and columns).
• The player in turn will ask to open some slot by inserting the row and column of the appropriate place.
It can be assumed that the user is inserting a whole number.
If the player's step is incorrect (for example, select a slot that has already been revealed),
a corresponding message will be issued and we will repeat the process again.
• If the specified slot contained a mine, the game is over and the entire board is revealed (and printed) with an appropriate message.
Otherwise, the number of mines in the squares adjacent to that square is displayed.
• If the player succeeds in opening all the squares except those with the mines, the game ends with an appropriate victory message.

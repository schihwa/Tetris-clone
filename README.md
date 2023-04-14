**Tetris Game**

This is a simple implementation of the classic Tetris game using the Allegro library in C programming language.
Requirements

Allegro 5 library
C compiler (e.g. gcc)


**Installation**

Install Allegro 5 library. This can be done on Ubuntu-based systems by running     the following command in terminal:

```Bash sudo apt-get install liballegro5-dev ```
        
For other operating systems, please refer to the official Allegro website for installation instructions.

**Clone the repository:**

git clone https://github.com/schihwa/Tetris-clone.git

Or, download the repository as a zip file and extract it.

Navigate to the project directory:


cd Tetris

Compile and run the program:

```gcc tetris.C mainMenu.C -o tetris -lallegro -lallegro_font -lallegro_ttf && ./tetris```

**Usage**

Use the arrow keys to move the tetromino pieces left and right.
Use the up arrow key to rotate the piece.
Use the down arrow key to move the piece down faster.
Press the space bar to pause or resume the game.

**Contributing**

Contributions to this project are welcome! If you find a bug or have a feature request, please open an issue on the GitHub repository.


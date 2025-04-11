# Number Guessing Game 🎲

A simple **Number Guessing Game** developed in C++ where the player guesses a randomly generated number between 1 and 100. Enjoy a classic game that challenges your ability to find the correct number based on hints provided after each guess! 😎

## Overview ✨

The game generates a random number between 1 and 100, and the player is prompted to guess the number. After each guess, the program indicates whether the guess was too high, too low, or correct. Once the correct guess is made, the player is given the option to play again. 🔄

## Features 🚀

- **Random Number Generation:** Uses the C++ standard library (`cstdlib` and `ctime`) to generate random numbers. 🎲
- **User Feedback:** Provides instant feedback if the guessed number is too high or too low. 📉📈
- **Replay Option:** After guessing correctly, you can choose to restart the game or exit. 🔁
- **Simple and Lightweight:** A minimal and engaging C++ console application for practicing basic programming constructs and game logic. 💻

## Getting Started 🛠️

### Prerequisites

- A C++ compiler (e.g., **g++** for Linux/Mac or MSVC on Windows) 🖥️
- Basic familiarity with command-line operations 💡

### Installation

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/your-username/number-guessing-game.git
   cd number-guessing-game

2. **Compile the Code 🔧**

   Use your preferred C++ compiler. For example, with **g++**:

   ```bash
   g++ -o number_guessing_game main.cpp

3. **Run the Game ▶️**

  -After compiling, run the executable:

      ./number_guessing_game
  
  -🪟 On Windows, you may need to run:
  
      number_guessing_game.exe

## **How to Play 🎮**

 -The game will prompt you to guess a number between 1 and 100.
 -Enter your guess and press Enter.
 -The program will provide feedback:
     -"Too low. Try again:" if your guess is lower than the target number.
     -"Too high. Try again:" if your guess is higher than the target number.
 -When you guess correctly, you are congratulated and asked if you wish to play again.
 -Enter 'y' or 'Y' to restart the game, or any other character to quit.

## **Code Walkthrough 👨‍💻**

   Random Number Generation:

    ```cpp
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
  
  -The srand function seeds the random number generator using the current time to ensure different results each time the game runs.
  -The rand() function generates a random number which is then scaled to be between 1 and 100.

  Game Loop:
  -The game runs in a loop that continues until the player correctly guesses the number.
  -Once the correct guess is made, the player can decide to either restart or exit the game using a recursive call to playGame() if they choose to play again.

  User Input & Feedback:
  -Based on the player's guess, the program compares the input with the random number and provides real-time feedback.

## **Contributing 🤝**

   Contributions are welcome! Whether you're fixing bugs, enhancing the gameplay, or improving the documentation, feel free to open an issue or submit a pull request. Please follow the standard GitHub flow:
   -Fork the repository.
   -Create a new feature branch:

    ```bash
    git checkout -b feature/new-feature

  -Commit your changes.
  -Push to the branch.
  -Open a Pull Request.

## **License 📄**
This project is licensed under the MIT License. See the LICENSE file for details.



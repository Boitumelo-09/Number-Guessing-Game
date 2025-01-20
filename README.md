# Number Guessing Game

## Overview

The Number Guessing Game is a simple console-based program written in C++ where the player tries to guess a randomly generated number within a certain range. It serves as a beginner-friendly project to practice loops, conditionals, and basic user interaction in C++.

## Features

Random number generation using the rand() function.

Configurable range of numbers (e.g., 1 to 100).

Feedback for each guess ("Too high!", "Too low!", "Correct!").

Tracks the number of attempts taken to guess the correct number.

Option to play again after the game ends.

## How to Play

Run the program in a C++ compiler or terminal.

The program will generate a random number within the specified range.

Enter your guess when prompted.

The program will provide feedback:

"Too high!" if your guess is greater than the number.

"Too low!" if your guess is less than the number.

"Correct!" when you guess the number.

The game ends once the correct number is guessed. You can then choose to play again or exit.

## Prerequisites

To run the game, ensure you have:

A C++ compiler (e.g., GCC, Clang, MSVC).

Basic knowledge of compiling and running C++ programs.

## Installation

### Clone the repository:

git clone https://github.com/yourusername/number-guessing-game.git

Navigate to the project directory:

cd number-guessing-game

Compile the program using a C++ compiler:

g++ -o NumberGuessingGame main.cpp

Run the compiled program:

./NumberGuessingGame

## Example Output

Welcome to the Number Guessing Game!
I have selected a number between 1 and 100.
Can you guess what it is?

Enter your guess: 50
Too high! Try again.

Enter your guess: 25
Too low! Try again.

Enter your guess: 37
Correct! You guessed the number in 3 attempts.

Would you like to play again? (y/n): n
Thank you for playing!

## Customization

You can modify the following aspects of the game:

Range of numbers:
Change the range of numbers by modifying the min and max values in the code.

const int min = 1;
const int max = 100;

Number of attempts:
Add a maximum attempt limit by introducing a counter and breaking the loop if the limit is exceeded.

## Contribution

Contributions are welcome! If you have suggestions or improvements, feel free to:

Fork the repository.

Make changes and submit a pull request.

Open an issue to discuss ideas.

## License

This project is licensed under the MIT License.

Enjoy the game and happy coding!

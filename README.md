# Number Guessing Game

A simple command-line number guessing game where you try to guess a random number between 1-100.

## Features

- Two difficulty modes (Easy and Hard)
- Easy mode gives hints (too high/too low)
- 5 attempts to guess correctly
- Points system based on performance

## How to Run

### Using CLion
1. Open the project in CLion
2. Click the green Run button

### Using Command Line
1. Clone this repository
2. Build with CMake:
```bash
   mkdir build
   cd build
   cmake ..
   make
   ./guess_random_number
```

## How to Play

1. Choose difficulty (1 for Easy, 2 for Hard)
2. Guess numbers between 1-100
3. Get feedback on your guesses
4. Try to guess in as few attempts as possible!

## What I Learned

- While loops and game logic
- Conditional statements (if/else)
- Random number generation in C++
- User input handling
- CMake build system

## Built With

- C++
- CMake
- CLion IDE (Free Edition)

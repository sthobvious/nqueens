# N-Queens Problem Solver

A C++ program that calculates every valid arrangement of N queens on an N×N chessboard, where no two queens can attack each other. The board size is provided by the user at runtime.

---

## About

The N-Queens Problem is a classic computer science challenge: place N queens on an N×N chessboard such that no two queens share the same row, column, or diagonal. This program finds and displays **all** valid solutions for a given board size, optimized to handle larger values of N efficiently.

---

## Features

- Accepts any board size N as user input
- Finds all valid queen placements for the given N
- Optimized using **memoization** to avoid redundant computation
- Uses **recursive backtracking** to explore the solution space efficiently

---

## Requirements

- A C++ compiler (g++ recommended, C++11 or later)
- No external dependencies

---

## Getting Started

1. **Clone the repository**
   ```bash
   git clone https://github.com/sthobvious/nqueens.git
   cd nqueens
   ```

2. **Compile the program**
   ```bash
   g++ -o nqueens nqueen.cpp
   ```

3. **Run the program**
   ```bash
   ./nqueens
   ```

4. **Enter a board size when prompted**
   ```
   Enter board size: 9
   ```

---

## How It Works

The solver uses **recursive backtracking** — it places queens one row at a time and checks whether each placement is valid (no conflicts on the same column or diagonals). **Memoization** is used to cache previously computed states, reducing redundant checks and improving performance as the board size grows.

---

## Example Output

For N = 4, the program finds 2 solutions:

```
Solution 1:        Solution 2:
. Q . .            . . Q .
. . . Q            Q . . .
Q . . .            . . . Q
. . Q .            . Q . .
```

---

## License

This project is licensed under the [MIT License](LICENSE).

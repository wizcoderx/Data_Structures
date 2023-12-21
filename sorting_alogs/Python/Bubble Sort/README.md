# Bubble Sort Algorithm

This Python script implements the Bubble Sort algorithm to sort an array of numbers.

## Getting Started

### Prerequisites

- Python installed on your machine

### How to Run

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/bubble-sort.git
    cd bubble-sort
    ```

2. Run the script:

    ```bash
    python bubble_sort.py
    ```

3. Follow the on-screen instructions to input the array size and elements.

## Bubble Sort Overview

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Code Explanation

### Input Validation

The script ensures that the user inputs a valid array size (greater than 1) using a `while` loop.

### Array Input

Users are prompted to input each element of the array.

### Bubble Sort Logic

The script uses the Bubble Sort algorithm to sort the input array. The outer loop controls the number of passes, and the inner loop compares and swaps adjacent elements.

### Output

The script prints the array after each pass and the final sorted array.

## Example

```plaintext
Enter the number of array size (Integer): 5
Enter a number: 3
Enter a number: 1
Enter a number: 4
Enter a number: 2
Enter a number: 5

Your Array looks like this:
 [3, 1, 4, 2, 5]

After the 1 iteration, your array looks like this: [1, 3, 2, 4, 5]
After the 2 iteration, your array looks like this: [1, 2, 3, 4, 5]
After the 3 iteration, your array looks like this: [1, 2, 3, 4, 5]
After the 4 iteration, your array looks like this: [1, 2, 3, 4, 5]

Your sorted array looks like --> 1 2 3 4 5

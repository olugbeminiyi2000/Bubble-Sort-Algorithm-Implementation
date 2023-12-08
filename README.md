# Bubble Sort Algorithm Implementation

This repository contains a C implementation of the Bubble Sort algorithm. Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Table of Contents

- [Overview](#overview)
- [Usage](#usage)
- [Function Descriptions](#function-descriptions)
- [Performance](#performance)
- [Contributing](#contributing)
- [License](#license)

## Overview

Bubble Sort is a straightforward comparison-based sorting algorithm with a time complexity of O(n^2). It is not the most efficient algorithm for large datasets but is easy to understand and implement. This implementation includes functions for sorting an array using the Bubble Sort algorithm.

## Usage

To use the Bubble Sort algorithm, follow these steps:

1. Clone this repository:

   ```bash
   git clone https://github.com/your-username/Bubble-Sort-Algorithm-Implementation.git
   cd Bubble-Sort-Algorithm-Implementation
   ```

2. Compile and run the program for testing:

   ```bash
   gcc bubblesort_test.c bubblesort_algo.c -o bubble_sort
   ./bubble_sort
   ```
   
3. To use the function in external file:

   ```bash
   vi your-filename.c
   ```

   ```C
   #include "bubblesort.h"

   // Your code using the void bubblesort(int arr[], int size)
   ```

   ```bash
   gcc your-filename.c bubblesort_algo.c -o your-output-name
   ```

## Function Descriptions

### `bubblesort(array, size)`

Sorts an array in ascending order using the Bubble Sort algorithm.

- **Arguments:**
  - `array` (int[]): The input array to be sorted.
  - `size` (int): The size of the array.

- **Returns:**
  - `void`: The array is sorted in-place.

## Performance

Bubble Sort has a time complexity of O(n^2) in the worst case, which makes it less suitable for large datasets compared to more advanced algorithms. It is, however, simple to understand and implement.

## Contributing

Contributions are welcome! If you'd like to contribute to this project, please follow these steps:

1. Fork the repository
2. Create a new branch (`git checkout -b feature/new-feature`)
3. Make your changes and commit them (`git commit -am 'Add new feature'`)
4. Push to the branch (`git push origin feature/new-feature`)
5. Create a pull request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.



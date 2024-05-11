# C - Sorting Algorithms & Big O

This project involves implementing different sorting algorithms and understanding their time complexities (Big O notation). The project is to be completed in teams of two, emphasizing pair programming for the mandatory tasks.


## Background Context

This project is designed for groups of two students. Each pair should collaborate closely, especially on the mandatory part of the project.

## Resources

- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes (video)](https://www.youtube.com/watch?v=kPRA0W1kECg)  
  **Warning:** This video may trigger seizures for people with photosensitive epilepsy. Viewer discretion is advised.

## Learning Objectives

- At least four different sorting algorithms
- The concept of Big O notation and how to evaluate an algorithm's time complexity
- How to choose the best sorting algorithm for a specific input
- What characterizes a stable sorting algorithm

## Requirements

### General

- **Allowed editors:** vi, vim, emacs
- **Environment:** All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding style:** Betty style
- **Restrictions:**
  - No global variables
  - No more than 5 functions per file
  - No use of standard library functions like `printf`, `puts`, etc.

### GitHub

- **Repository:** [holbertonschool-sorting_algorithms](https://github.com/Xavier308/holbertonschool-sorting_algorithms.git)

## More Info

### Data Structures and Functions

```c
#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

// Function to print an array of integers
void print_array(const int *array, size_t size);

// Function to print a list of integers
void print_list(const listint_t *list);

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s {
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
## Implemented by
Xavier J. Cruz & John Lopez Cabrera (based on content by Alexandre Gautier)

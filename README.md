# C - Sorting Algorithms & Big O

This project involves implementing different sorting algorithms and understanding their time complexities (Big O notation). The project is to be completed in teams of two, emphasizing pair programming for the mandatory tasks.


## Resources

- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes (video)](https://www.youtube.com/watch?v=kPRA0W1kECg)  

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


### Data Structures and Functions

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
## Implemented by
Xavier J. Cruz & John Lopez Cabrera (based on content by Alexandre Gautier)

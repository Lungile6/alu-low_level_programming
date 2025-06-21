# README.md

## Memory Management in C

This document explores key concepts related to memory management in C, focusing on automatic vs dynamic allocation, the usage of `malloc` and `free`, and tools for detecting memory leaks.

### 1. Difference Between Automatic and Dynamic Allocation

- **Automatic Allocation**:
  - Memory is allocated on the stack.
  - Variables are automatically created and destroyed when they go out of scope.
  - Example: Local variables within a function.
  - Limited in size and lifetime.

- **Dynamic Allocation**:
  - Memory is allocated on the heap.
  - Requires explicit management using functions like `malloc` and `free`.
  - Allows for variable-sized memory allocation during runtime.
  - Example: Using `malloc` to allocate memory for arrays whose size is not known at compile time.

### 2. What is `malloc` and `free`?

- **`malloc`**:
  - Stands for "memory allocation".
  - Syntax: `void* malloc(size_t size);`
  - Allocates a specified number of bytes and returns a pointer to the first byte.
  - Initializes the allocated memory to undefined values.

- **`free`**:
  - Deallocates previously allocated memory.
  - Syntax: `void free(void* ptr);`
  - Takes a pointer returned by `malloc` and releases the memory back to the heap.
  - Helps prevent memory leaks.

#### Example Usage:

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *array;
    size_t n = 10;

    // Dynamic allocation
    array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory...
    
    // Free the allocated memory
    free(array);
    return 0;
}
```

### 3. Why and When to Use `malloc`

- **When to Use**:
  - When the size of the data structure is not known at compile time.
  - When you need to allocate large data structures that exceed stack capacity.
  - For creating complex data structures like linked lists, trees, etc.

- **Why Use**:
  - Provides flexibility in memory management.
  - Allows for efficient use of memory, especially for large datasets.

### 4. Using Valgrind to Check for Memory Leaks

- **Valgrind** is a programming tool for memory debugging, memory leak detection, and profiling.

#### How to Use Valgrind:

1. **Install Valgrind** (if not already installed):
   - On Ubuntu: `sudo apt-get install valgrind`
   - On MacOS: `brew install valgrind`

2. **Compile your program** with debugging information:
   ```bash
   gcc -g your_program.c -o your_program
   ```

3. **Run your program with Valgrind**:
   ```bash
   valgrind --leak-check=full ./your_program
   ```
### Conclusion

Understanding memory management is crucial in C programming. Proper use of `malloc`, `free`, and tools like Valgrind ensures efficient and error-free code. Always remember to free dynamically allocated memory to prevent memory leaks.

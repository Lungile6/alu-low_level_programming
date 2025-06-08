###C - Pointers, arrays and strings

```markdown
# Understanding Pointers, Arrays, Strings, and Variable Scope in C

## Table of Contents
1. [What are Pointers?](#what-are-pointers)
2. [How to Use Pointers](#how-to-use-pointers)
3. [What are Arrays?](#what-are-arrays)
4. [How to Use Arrays](#how-to-use-arrays)
5. [Differences Between Pointers and Arrays](#differences-between-pointers-and-arrays)
6. [Using and Manipulating Strings](#using-and-manipulating-strings)
7. [Scope of Variables](#scope-of-variables)

## What are Pointers?
Pointers are variables that store the memory address of another variable. They allow for efficient array manipulation and facilitate dynamic memory allocation. In C, pointers are declared using the `*` operator.

### Example:
```c
int n = 10;
int *p = &n; // p now holds the address of n
```

## How to Use Pointers
- **Declaration**: Use the `*` operator.
- **Initialization**: Assign the address of a variable using the `&` operator.
- **Dereferencing**: Access the value at the address stored in the pointer using the `*` operator.

### Example:
```c
int value = 5;
int *ptr = &value;
printf("%d", *ptr); // Output: 5
```

## What are Arrays?
Arrays are collections of elements of the same data type, stored in contiguous memory locations. They provide a way to store multiple values in a single variable.

### Example:
```c
int arr[5] = {1, 2, 3, 4, 5};
```

## How to Use Arrays
- **Declaration**: Use the data type followed by the array name and size.
- **Accessing Elements**: Use the array index (starting from 0).
- **Iteration**: Use loops to traverse through the array elements.

### Example:
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]); // Output: 1 2 3 4 5
}
```

## Differences Between Pointers and Arrays
- **Memory Address**: A pointer holds the address of a variable, while an array name represents the address of its first element.
- **Size**: The size of a pointer is fixed (typically 4 or 8 bytes), while the size of an array is the total size of its elements.
- **Reassignment**: Pointers can be reassigned to point to different memory locations, while array names are constant.

## Using and Manipulating Strings
Strings in C are arrays of characters ending with a null terminator (`'\0'`). They can be manipulated using standard library functions from `<string.h>`.

### Example:
```c
char str[100] = "Hello, World!";
printf("%s", str); // Output: Hello, World!
```

### Common String Functions:
- `strlen()`: Returns the length of a string.
- `strcpy()`: Copies one string to another.
- `strcat()`: Concatenates two strings.

## Scope of Variables
Variable scope defines the visibility of a variable within a program. There are three main types of scope:

1. **Local Scope**: Variables declared within a function; they are accessible only within that function.
2. **Global Scope**: Variables declared outside any function; they are accessible throughout the program.
3. **Block Scope**: Variables declared within a block (e.g., inside `{}`); they are accessible only within that block.

### Example:
```c
int globalVar = 10; // Global scope

void function() {
    int localVar = 5; // Local scope
    {
        int blockVar = 3; // Block scope
    }
}
```

## Conclusion
Understanding pointers, arrays, strings, and variable scope is fundamental in C programming. Mastering these concepts will greatly enhance your ability to write efficient and effective code.
```

Feel free to modify any sections as needed!

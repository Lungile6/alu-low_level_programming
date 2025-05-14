# C Programming - Loops

This repository contains examples and explanations of using loops in C programming. Loops are fundamental control structures that allow for repetitive execution of code blocks, making them essential for tasks involving iteration.

## Types of Loops

### 1. **For Loop**

The `for` loop is typically used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.

**Syntax:**
```c
for (initialization; condition; increment/decrement) {
    // Code to be executed
}
Example:

c

Copy
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
2. While Loop
The while loop is used when the number of iterations is not known and continues until a specified condition becomes false.

Syntax:

c

Copy
while (condition) {
    // Code to be executed
}
Example:

c

Copy
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}
3. Do-While Loop
The do-while loop is similar to the while loop, but it guarantees that the code block is executed at least once, as the condition is checked after the code execution.

Syntax:

c

Copy
do {
    // Code to be executed
} while (condition);
Example:

c

Copy
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 10);
Best Practices
Initialization: Ensure loop variables are properly initialized.
Termination: Always provide a condition that will eventually be false to prevent infinite loops.
Increment/Decrement: Ensure that the loop variable is modified within the loop body.
Conclusion
Understanding loops is crucial for efficient programming in C. They allow for powerful control over the execution of code based on dynamic conditions.

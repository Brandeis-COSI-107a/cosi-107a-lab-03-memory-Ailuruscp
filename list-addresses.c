#include <stdio.h>

// Uninitialized global variable (BSS segment)
int global_uninitialized;

const char *string_constant = "Hello, world!"; // Initialized global data

// A second function to print the address of
void another_function() {}

int main() {
    int stack_var = 0;  // Stack variable

    printf("stack variable:     0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data:   0x%012lX\n", (unsigned long)string_constant);
    printf("uninitialized data: 0x%012lX\n", (unsigned long)&global_uninitialized);
    printf("main:               0x%012lX\n", (unsigned long)&main);
    printf("function:           0x%012lX\n", (unsigned long)&another_function);

    return 0;
}

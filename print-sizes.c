#include <stdio.h>

int main() {
    int myInt = 978;
    int *intPtr;
    char charArray[200];
    char *charPtr;

    // Print sizes of standard types
    printf("size of char is %zu\n", sizeof(char));
    printf("size of short is %zu\n", sizeof(short));
    printf("size of int is %zu\n", sizeof(int));
    printf("size of long is %zu\n", sizeof(long));
    printf("size of long long is %zu\n", sizeof(long long));
    printf("size of float is %zu\n", sizeof(float));
    printf("size of double is %zu\n", sizeof(double));
    printf("size of char * is %zu\n", sizeof(char *));
    printf("size of int * is %zu\n", sizeof(int *));
    printf("size of long * is %zu\n", sizeof(long *));

    // Character array size
    printf("The size of my character array is %zu\n", sizeof(charArray));

    // Set and print character pointer info
    charPtr = charArray;
    printf("The size of my character pointer is %zu\n", sizeof(charPtr));

    // Set and print integer pointer info
    intPtr = &myInt;
    printf("The size of my int pointer is %zu\n", sizeof(intPtr));
    printf("The size of what my integer pointer points at is %zu\n", sizeof(*intPtr));

    return 0;
}

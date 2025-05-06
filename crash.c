#include <stdio.h>

int crash() {
    int value = 42;
    int *x = &value;

    printf("I'm going to print x!\n");
    printf("The value of *x is %d\n", *x);
}

int main(int argc, char **argv) {
    printf("We're going to crash!\n");
    crash();
    printf("Back after the crash?\n");
}

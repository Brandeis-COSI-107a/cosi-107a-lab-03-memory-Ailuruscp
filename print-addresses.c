#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        // Convert argument to unsigned long long (handles 48-bit values)
        unsigned long long num = strtoull(argv[i], NULL, 10);

        // Mask to 48 bits and print in hex with uppercase, 12 hex digits
        printf("0x%012llX\n", num & 0xFFFFFFFFFFFF);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        // Auto-detect base: supports decimal and hex like 0xFF00
        unsigned int value = (unsigned int)strtoul(argv[i], NULL, 0);

        unsigned int low8 = value & 0xFF;

        // Match the required format exactly
        printf("%d 0x%02X %3u\n", i, low8, low8);
    }
    return 0;
}

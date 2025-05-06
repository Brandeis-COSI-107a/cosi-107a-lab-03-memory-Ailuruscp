#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        // Base 0: detects hex (0x...) or decimal automatically
        unsigned long num = strtoul(argv[i], NULL, 0);

        // Extract byte 1 (bits 8–15)
        unsigned int byte1 = (num >> 8) & 0xFF;

        // Print in required format
        printf("0x%02X %3u\n", byte1, byte1);
    }
    return 0;
}

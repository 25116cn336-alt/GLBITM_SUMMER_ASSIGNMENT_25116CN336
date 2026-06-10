#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 5; i++) {
        // Print increasing characters
        for(j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing characters
        for(j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
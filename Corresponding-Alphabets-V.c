#include <stdio.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Print the contents of the array
    for (int i = 0; alphabet[i] != '\0'; i++) {
        printf("%c ", alphabet[i]);
    }

    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void print_letter(int num) {
    char letter = 'a' + num - 1;
    printf("%c\n", letter);
}

int main()
{
    int num;

    while (1) {
        printf("Enter a number between 1 and 26 to get the corresponding letter: ");
        scanf("%d", &num);

        if (num < 1 || num > 26) {
            printf("Invalid input. Please enter a number between 1 and 26.\n");
        } else {
            print_letter(num);
        }
    }

    return 0;
}
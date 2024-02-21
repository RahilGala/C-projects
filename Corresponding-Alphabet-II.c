#include <stdio.h>

int decrypt(int number) {
    int letter = 0;

    if (number >= 1 && number <= 26) {
        letter = number + 96;
    }
    else {
        printf("The entered number is out of range.\n");
    }

    return letter;
}

int main() 
{
    
	int number, letter;
	while{

    printf("Enter a number to decrypt the corresponding letter: ");
    scanf("%d", &number);

    letter = decrypt(number);

    if (letter != 0) {
        printf("The decrypted letter is: %c\n", letter);
    }

    return 0;
}}
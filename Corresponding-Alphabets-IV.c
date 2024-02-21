#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(int password){
    int number = 0;
    if (password >= 48 && password <= 57){
        number = 1;
    }
    return number;
}

int decrypt(int password){
    int result = 0;
    if (password >= 65 && password <= 90){
        result = password + 32;
    }
    else if (password >= 97 && password <= 122){
        result = password - 32;
    }
    return result;
}

int main(){
    int number, letter;
    printf("Enter a number to decrypt the corresponding letter: ");
    scanf("%d", &number);

    if (check(number) == 1){
        letter = number - 48;
        if (letter >= 1 && letter <= 26){
            letter = letter + 96;
            printf("The decrypted letter is: %c\n", letter);
        }
        else{
            printf("The entered number is out of range.\n");
        }
    }
    else{
        printf("The entered number is out of range.\n");
    }
    return 0;
}
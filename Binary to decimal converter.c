#include <stdio.h>

int binaryToDecimal(int binaryNumber)
{
    int decimalNumber = 0;
    int i = 0;
    while (binaryNumber > 0)
    {
        int remainder = binaryNumber % 10;
        binaryNumber /= 10;

        if (remainder == 1)
        {
            int powerOfTwo = 1;
            for (i = 0; i < 3; i++)
            {
                powerOfTwo *= 2;
            }
            decimalNumber += powerOfTwo;
        }
    }
    return decimalNumber;
}

int main()
{
    int binaryNumber;
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);

    int decimalNumber = binaryToDecimal(binaryNumber);
    printf("Decimal number is: %d", decimalNumber);

    return 0;
}
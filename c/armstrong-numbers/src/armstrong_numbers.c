#include "armstrong_numbers.h"	

char isArmstrongNumber(unsigned int number)
{
    char isArmstrong = 0;
    unsigned int sum = 0;
    unsigned int remainder = 0;
    unsigned int digits = 0;
    unsigned int tmp = 0;

    tmp = number;

    digits = calcNumberOfDigits(number);
    
    printf("InputNumber=%d\n",tmp);
    printf("NumberOfDigits=%d\n",digits);
    
    for (size_t i = 0; i < digits; i++)
    {
        remainder = tmp % 10;
        printf("Rem=%d\n", remainder);
        sum += pow(remainder, digits);
        printf("CalcNumber=%d\n",sum);
        tmp = tmp/10;
        printf("Num=%d\n", number);
    }

    

    if (sum == number)
    {
        isArmstrong =1;
    }

    return isArmstrong;
}

unsigned int calcNumberOfDigits(unsigned int number)
{
    unsigned int digits = 0;
    
    while (number)
    {
        number = number / 10;
        digits++;
    }

    return digits;
}
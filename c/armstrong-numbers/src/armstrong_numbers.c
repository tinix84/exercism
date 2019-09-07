#include "armstrong_numbers.h"	

char isArmstrongNumber(unsigned int number)
{
    char isArmstrong = 0;
    char str_number[32] = {0};
    unsigned int i = 0, tmp = 0, digits = 0;

    if (number < 10)
    {
        return 1;
    }
    else
    {
        itoa((int) number, str_number, 10);
        digits = strlen(str_number);

        for (i=0; i < digits ; i++)
        {
            tmp += pow((str_number[i]-'0'), digits);
        }

        if (tmp == number)
        {
            isArmstrong = 1;
        }
    }
    
    return isArmstrong;
}

/**
 * C++ version 0.4 char* style "itoa":
 * Written by Lukás Chmela
 * Released under GPLv3.

*/
char* itoa(int value, char* result, int base) 
{
    // check that the base if valid
    if (base < 2 || base > 36) { *result = '\0'; return result; }

    char* ptr = result, *ptr1 = result, tmp_char;
    int tmp_value;

    do {
        tmp_value = value;
        value /= base;
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
    } while ( value );

    // Apply negative sign
    if (tmp_value < 0) *ptr++ = '-';
    *ptr-- = '\0';
    while(ptr1 < ptr) {
        tmp_char = *ptr;
        *ptr--= *ptr1;
        *ptr1++ = tmp_char;
    }
    return result;
}
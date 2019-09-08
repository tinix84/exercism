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
        sprintf(str_number, "%d", number);
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
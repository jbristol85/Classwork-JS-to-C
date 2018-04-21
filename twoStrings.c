 #include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string first = get_string("Enter String: ");
    string second = get_string("Enter String to test: ");

    if(strstr(first, second))
    {
        printf("The string does exists\n");
        return 0;
    }
    else
    {
        printf("The string does not exist\n");
        return 1;
    }

}
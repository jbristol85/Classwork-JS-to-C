
// function factorialize(num) {
//   var result = 1;
//   for(var i = 1; i <= num; i++){
//     result = result * i;
//   }

//   return result;
// }

// factorialize(5);

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>



  long long factorialize(int num)
    {
        long long result = 1;

        for(int i = 1; i <= num; i++)
        {
            result = result * i;
        }

        return result;
    }


int main(int argc, string argv[])
{

    int number = 0;
     if (argc == 2)  // checking for 2 arguments
    {
        number = atoi(argv[1]);
    }
    else
    {
        printf("Please enter a number\n");
    }



    printf("%lli\n",factorialize(number));
}
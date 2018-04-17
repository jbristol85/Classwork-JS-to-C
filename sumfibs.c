// function sumFibs(num) {
//     var prevNumber = 0;
//     var currNumber = 1;
//     var result = 0;
//     while (currNumber <= num) {
//         if (currNumber % 2 !== 0) {
//             result += currNumber;
//         }

//         currNumber += prevNumber;
//         prevNumber = currNumber - prevNumber;
//     }

//     return result;
// }

// // test here
// sumFibs(4);

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int sumfib(int num)
    {
        int previous = 0;
        int currentnum = 1;
        int result = 0;

        while(currentnum <= num)
        {
            if(currentnum % 2 != 0)
            {
                result += currentnum;
            }
            currentnum += previous;
            previous = currentnum - previous;
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



    printf("%i\n", sumfib(number));
}

#include <stdio.h>

int main()
{
    for(int i =1; i<=5; i++)
    {
        for(int j=5; j>=i; j--) // Increment and Decrement
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++)  // Increment and Increment
        {
            printf("* ");
        }
        printf("\n");
    }

//For> Increment && For > Decrement , WIll Get 5 to 1 Pattern

//            5 4 3 2 1
//            5 4 3 2
//            5 4 3
//            5 4
//            5


//For> Increment && For > Increment , WIll Get 1 to 5 Pattern
    //1
//            1 2
//            1 2 3
//            1 2 3 4
//            1 2 3 4 5

    return 0;
}

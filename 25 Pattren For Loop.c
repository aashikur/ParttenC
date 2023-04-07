#include <stdio.h>

int main()
{

    printf("\n\First Solution\n\n"); // Break
    //========================================
    // Question 25

    /*  5                    1
        4 5                  0 1
        3 4 5       %2 =     1 0 1
        2 3 4 5              0 1 0 1
        1 2 3 4 5

        OR

        1                   1
        2 1                 0 1
        3 2 1       %2 =    1 0 1
        4 3 2 1             0 1 0 1
        5 4 3 2 1

    */

// Here Different Solution // End of the Day The Rem is 1 or 0.
    // Q : 25

    
    for(int a =1 ; a<=4; a++)  // Here Tried the 2nd Method 
    {
        for(int b = a; b>=1; b--)
        {
            printf("%d ",b%2);
        }
        printf("\n");
    }


    return 0;
}

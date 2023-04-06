#include<stdio.h>

int main()
{
    for(int i = 1; i<=5; i++) // Increment
    {
        for(int j=1; j<=i; j++) // Increment
        {
            printf("* ");
        }
        printf("\n");
    }



    for(int i = 1; i<=5; i++) // Increment
    {
        for(int j=5; j>i; j--) // Decrement
        {
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}

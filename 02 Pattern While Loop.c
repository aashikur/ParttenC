#include<stdio.h>

int main()
{

    int i = 1;
    while(i<=5) // First Big Looop
    {
        int j = 1;
        while(j<=i) // Increment to Increment
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    i = 1;
    while(i<=5) // Second Big Loop
    {
        int j = 5;
        while(j>i) // Increment to Decrement
        {
            printf("* ");
            j--;
        }
        printf("\n");
        i++;
    }




    return 0;
}

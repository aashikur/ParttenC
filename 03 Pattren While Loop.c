#include<stdio.h>

int main()
{
    int a = 1;
    while(a<=5) // Mommy Loop // Increment
    {
        int b = 1;
        while(b<=a) // First Child Loop // Increment
        {
            printf(" ");
            b++;
        }

        b = 5;
        while(b >=a) // Second Child Loop // Decrement
        {
            printf("* ");
            b--;
        }
        printf("\n");
        a++;
    }



    return 0;
}

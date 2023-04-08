#include <stdio.h>
#include<math.h>

int main()
{
//1                   sum : 1  , when row : 1, tips: 1 - row(1)+1 = 1
//3 2                 sum : 3  , when row : 2, tips: 3 - row(2)+1 = 2
//6 5 4               sum : 6  , when row : 3, tips: 6 - row(3)+1 = 4
//10 9 8 7            sum : 10 , when row : 4, tips: 10- row(4)+1 = 7
//15 14 13 12 11
//So, we need a Row that will act as Variable. Ex: i <= row, so, row will "i"

    int cnt = 0,sum, row=5, n;
    for(int i = 1; i<=row; i++)
    {
        sum = 0;
        n = i;
        while(n)
        {
            sum+=n;
            n--;
        }

        for(int j = sum; j>=(sum - i +1); j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

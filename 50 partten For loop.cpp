#include <bits/stdc++.h>
using namespace std;
void printSpace(int n,int col){
    for(int i = col; i<n; i++){
        cout << " ";
    }
}

int main()
{

    int arr1[1000] = {1,1};
    int arr2[1000] = {1,1,1};
    int col = 1;


    int n;
    cin >> n;


    for(int i = 1; i<=n; i++)
    {
        printSpace(n,col);
        for(int j = 1; j<=i; j++)
        {

            if( col == 1 || col == 2 || j == 1 || j == i)
            {

                arr2[j] = 1;
                cout << arr2[j] <<" ";
            }
            else
            {

                arr2[j] = arr1[j] + arr1[j-1];
                cout << arr2[j] << " ";
            }

        }
        col++;

        swap(arr1,arr2);
        cout << endl;
    }





    return 0;

}

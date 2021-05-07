
#include <bits/stdc++.h>
using namespace std;

void PrintPattern(int n)
{
    int arr[n][n];
    arr[0][0]=1;               //first element

    //for upper triangle
    for(int i=0;i<n-i;i++)
    {
        if(i>0)
        { arr[i][0]=arr[i-1][0]+i+1;
        }

        for(int j=1;j<n-i;j++)
        {
          arr[i][j]=arr[i][j-1]+i+j;
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr[i][j] <<" ";
        }
    cout << "\n";
    }

    //For lower traingle
    
    arr[][]
}
int main()
{
    int N;
    N=4;

    PrintPattern(N);

return 0;
}

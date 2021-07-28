#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[5][5];
    int i1,j1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                i1=i;
                j1=j;
            }
        }
    }
    int moves;
    moves=abs(i1-2)+abs(j1-2);
    cout<<moves;
}
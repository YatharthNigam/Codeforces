#include <iostream>
using namespace std;

int main()
{
    int y;
    cin>>y;
    while (true)
    {
        y++;
        if(y%10!=(y/10)%10 && (y/100)%10!=(y/1000)%10 && y%10!=(y/100)%10 && y%10!=(y/1000)%10 && (y/10)%10!=(y/1000)%10 && (y/100)%10!=(y/10)%10)
        {
            cout<<y<<endl;
            break;
        }
    }
    return 0;
}
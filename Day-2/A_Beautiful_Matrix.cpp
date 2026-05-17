#include<iostream>
using namespace std;

int main()
{
    int arr[6][6];
    int x,y;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            int n;
            cin>>n;
            arr[i][j]=n;
            if(n==1)
            {
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(3-x)+abs(3-y);
    return 0;
}
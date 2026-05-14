#include<iostream>
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    int p=arr[n-1];

    for(int i=0;i<x;i++)
    {
        if(arr[i]>0 && arr[i]>=p)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
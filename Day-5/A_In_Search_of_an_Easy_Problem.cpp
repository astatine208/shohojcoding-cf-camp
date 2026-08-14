#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool prb=true;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            prb=false;
    }
    if(prb) cout<<"EASY";
    else    cout<<"HARD";
    return 0;
}
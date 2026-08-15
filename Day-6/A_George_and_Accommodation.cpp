#include<iostream>
using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        if(n+2<=m)  count++;
    }
    cout<<count<<endl;
    return 0;
}
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int now=0;
    int mx=INT_MIN;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        now=(now-x)+y;
        mx=max(mx,now);
    }
    cout<<mx;
    return 0;
}
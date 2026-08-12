#include<iostream>
using namespace std;

int main()
{
    long long k,n,w;
    cin>>k>>n>>w;

    long long total=k*w*(w+1)/2;
    if(n>=total)    
        cout<<0;
    else    
        cout<<total-n;
    return 0;
}
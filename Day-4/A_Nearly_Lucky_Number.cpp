#include<iostream>
using namespace std;

bool isLucky(int n)
{
    if(n==0) return false;

    while(n>0)
    {
        int digit=n%10;
        if(digit!=4 && digit!=7)
            return false;
        n/=10;
    }
    return true;
}

int main()
{
    long long n;
    cin>>n;

    int count47=0;

    while(n>0)
    {
        int digit=n%10;
        if(digit==4 || digit==7)
            count47++;
        n/=10;
    }

    if(isLucky(count47))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
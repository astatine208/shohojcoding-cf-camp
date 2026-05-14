#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sz=s.size();
        if(sz>10)
            cout<<s[0]<<(sz-2)<<s[sz-1]<<endl;
        else
            cout<<s<<endl;
    }

    return 0;
}
#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int lw=0,up=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            up++;
        else 
            lw++;
    }
    if(lw>=up)
    {
        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
    }
    else
    {
        for(int i=0;i<s.size();i++)
            s[i]=toupper(s[i]);
    }
    cout<<s<<endl;
    return 0;
}
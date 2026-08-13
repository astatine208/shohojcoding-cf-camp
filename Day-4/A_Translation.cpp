#include<iostream>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"NO";
        return 0;
    }
    bool match=true;
    for(int i=0,j=s2.size()-1;i<s1.size();i++,j--)
    {
        if(s1[i]!=s2[j])
        {
            match=false;
            break;
        }
    }
    if(match)   cout<<"YES";
    else    cout<<"NO";
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    string c;
    cin>>s;
    for(int i=0;i<s.size();i+=2)
    {
        c.push_back(s[i]);
    }
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i];
        if(i!=c.size()-1)
            cout<<"+";
    }
    return 0;
}
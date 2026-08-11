#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    auto it=unique(s.begin(),s.end());
    s.erase(it,s.end());
    if(s.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
 
    sort(s.begin(),s.end());
 
    auto last= unique(s.begin(),s.end());
    s.erase(last,s.end());
 
    int ans=s.size();
    if(ans==3)
        cout<<1;
    else if(ans>4)
        cout<<ans-4;
    else
        cout<<"0";
    
    return 0;
}
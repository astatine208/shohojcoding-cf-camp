#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<char>v(n);
    int count=0;
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i+1])
            count++;
    }
    cout<<count;
    return 0;
}
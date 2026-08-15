#include <iostream>
using namespace std;
 
int main()
{
    int n,count=0;
    cin>>n;
    int x[n];
    for (int i=0;i<n;i++)
        cin>>x[i];
 
    for (int i=0;i<n;i++)
    {
        if(x[i]!=x[i+1])
            count++;
    }
    cout<<count;
    return 0; 
}
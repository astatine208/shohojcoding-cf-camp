#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int x[n];
 
    for(int i=0;i<n;i++)
        cin>>x[i];
 
    for(int j=1;j<=n;j++)
    {
         for(int i=0;i<n;i++)
         {
            if(x[i]==j)
                cout<<(i+1)<<" ";
         }
    }
    return 0;
}
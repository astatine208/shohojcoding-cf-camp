#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n;
    cin>>n;
    double total=0;
    for(int i=0;i<n;i++)    
    {
        double x;
        cin>>x;
        total+=x;
    }
    cout<<fixed<<setprecision(12)<<(total/n);
    
    return 0;
}
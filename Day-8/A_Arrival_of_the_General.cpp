#include<iostream>
#include<climits>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
 
    int max_num=INT_MIN,max_ind,min_num=INT_MAX,min_ind;
 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
 
        if(arr[i]>max_num)
        {
            max_num=arr[i];
            max_ind=i;
        }
 
        if(arr[i]<=min_num)
        {
            min_num=arr[i];
            min_ind=i;
        }
    }
    
    if(max_ind<min_ind)
    {
        int result=max_ind+(n-1)-min_ind;
        cout<<result;
    }
    else
    {
        int result=max_ind+(n-1)-min_ind-1;
        cout<<result;
    }
    return 0;
}
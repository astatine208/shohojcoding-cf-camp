#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[101]={0};

    int p;
    cin>>p;

    for(int i=0;i<p;i++)
    {
        int x;
        cin>>x;
        arr[x]=1;
    }

    int q;
    cin>>q;

    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        arr[y]=1;
    }

    bool ok=true;

    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            ok=false;
            break;
        }
    }

    if(ok)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

    return 0;
}
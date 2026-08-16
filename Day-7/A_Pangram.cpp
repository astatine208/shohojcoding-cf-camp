#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int freq[26]={0};

    for(int i=0;i<n;i++)
    {
        char ch=tolower(s[i]);

        freq[ch-'a']++;
    }

    bool word=true;

    for(int i=0;i<26;i++)
    {
        if(freq[i]==0)
        {
            word=false;
            break;
        }
    }

    if(word)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
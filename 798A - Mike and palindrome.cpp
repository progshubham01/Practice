#include <bits/stdc++.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() 
{
    int n,x=0;
    string s;
    cin>>s;
    n=s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            s[i]=s[n-i-1];
            x++;
        }
    }
    
    if(n%2==0&&x==1)
    cout<<"YES";
    else if(n%2!=0&&x<=1)
    cout<<"YES";
    else
    cout<<"NO";

}
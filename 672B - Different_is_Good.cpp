#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long int n,x,t=0,temp=1,s=0;
    cin>>n;
    if(n>26)
    cout<<"-1";
    else
    {
    char ar[n];
    int ar1[n],ar2[1001];
    for(long long int i=0;i<n;i++)
    {
        cin>>ar[i];
        ar1[i]=ar[i];
    }
    sort(ar1,ar1+n);
    x=ar1[0];
    for(long long int i=1;i<n;i++)
    {
        if(x==ar1[i])
        {
            temp++;
            ar2[t]=temp;
            
        }
        else
        {
            t++;
            x=ar1[i];
            temp=1;
        }
    }
    t=t+1;
    for(int i=0;i<t;i++)
    {
        if(ar2[i]>1)
        {
            s=s+(ar2[i]-1);
        }
    }
    cout<<s;
   }
}

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n,k=0,ar[100],x;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        x=(s[i]-'0');
        if(x==4)
        {
            ar[k]=2;
            ar[k+1]=2;
            ar[k+2]=3;
            k=k+3;
        }
        else if(x==6)
        {
            ar[k]=3;
            ar[k+1]=5;
            k=k+2;
        }
        else if(x==8)
        {
            ar[k]=2;
            ar[k+1]=2;
            ar[k+2]=2;
            ar[k+3]=7;
            k=k+4;
        }
        else if(x==9)
        {
            ar[k]=3;
            ar[k+1]=3;
            ar[k+2]=2;
            ar[k+3]=7;
            k=k+4;
        }
        else if(x==1)
        continue;
        else if(x==0)
        continue;
        else
        {
            ar[k]=x;
            k++;
        }
       
        
    }
    sort(ar,ar+k,greater<int>());
    
    for(int i=0;i<k;i++)
    cout<<ar[i];

    

}
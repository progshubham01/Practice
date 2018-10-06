#include <iostream>

using namespace std;

int main() 
{
    long long int n,l,a,t=0,temp=0,u,x,y,p=0;
    cin>>n>>l>>a;
    for(long long int i=0;i<n;i++)
    {
        cin>>x>>y;
        if((x-t)>=a)
        {
            temp=temp+(x-t)/a;
        }
        t=x;
        t=t+y;
    }
    u=(l-t)/a;
    temp=temp+u;
    cout<<temp;
}
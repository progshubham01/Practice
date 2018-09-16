#include <bits/stdc++.h>
#include<numeric>

using namespace std;

int main() 
{
    int n,m,z,x,y,temp=0,j;
    cin>>n>>m>>z;
    x=__gcd(n,m);
    y=n*m/x;
    j=y;
    while(j<=z)
    {
        temp++;
        j=j+y;
        
    }
    cout<<temp;
}
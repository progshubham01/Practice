#include <iostream>

using namespace std;

int main() 
{
    long long int n,ar[1000005],temp=0;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2!=0)
        {
        cout<<"First";
        return 0;
        }
    }
    cout<<"Second";
    return 0;
}
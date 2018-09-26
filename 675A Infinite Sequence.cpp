#include <iostream>

using namespace std;

int main() 
{
    long long int a,b,c,x;
    cin>>a>>b>>c;
    if(c==0)
    {
        if(a==b)
        cout<<"YES";
        else
        cout<<"NO";
    }
    else if(c>0)
    {
        if(b>=a)
        {
            x=b-a;
            if(x%c==0)
            cout<<"YES";
            else
            cout<<"NO";
        }
        else
        cout<<"NO";
    }
    else
    {
        if(a>=b)
        {
            x=a-b;
            if(x%c==0)
            cout<<"YES";
            else
            cout<<"NO";
        }
        else
        cout<<"NO";
    }

}

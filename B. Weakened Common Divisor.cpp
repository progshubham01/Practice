#include <bits/stdc++.h>

using namespace std;



long long int Output(int x){
	for(long long int i=2;i*i<=x;i++){
		if(x % i == 0)return i;
	}
	return x;
}
int main() 
{
    long long int n,x,y,ar[1001],c,t=0,a,b;
    cin>>n;
    cin>>a>>b;
    for(long long int i=1;i<n;i++)
    {
        cin>>x>>y;
        a=__gcd(a,x*y);
        b=__gcd(b,x*y);
        
    }
   if(a != 1){
		cout<<Output(a)<<endl;
	}
	else if(b != 1){
		cout<<Output(b)<<endl;
	}

    else
    cout<<"-1";
}
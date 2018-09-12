#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, k,temp=0;
	cin >> n >> k;
	set<int> e1;
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
	    int t;
	    cin>>t;
	    if(!e1.count(t))
	    {
	        ans.push_back(i);
	        e1.insert(t);
	    }
	}
	if(ans.size()>=k)
	{
	    cout<<"YES"<<endl;
	    for(unsigned int i=0;i<k;i++)
     	{
	        cout<<ans.at(i)+1<<" ";
	    }
	}
	else
	cout<<"NO"<<endl;
	
}
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     long long int t,n,i;
    cin>>t;
    while(t--)
    {
        vector<long long int>v;
	cin>>n;
	for(i=2;i<=sqrt(n);i++)
	{
	    
	    if(n%i==0)
	    {v.push_back(i);
	    v.push_back(n/i);
	    }
	}
	long long int s =0 ;
	for(auto it : v)
	{
	    s = s + it;
	    if(s>n)
	    break;
	}
	//cout<<s;
	if(s+1==n)
	{
	    cout<<"1";
	}
	else
	{
	    cout<<"0";
	}
	s=0;
	cout<<"\n";
    }
	return 0;
}

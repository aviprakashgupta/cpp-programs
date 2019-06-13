#include<bits/stdc++.h>
using namespace std;
int a[10000001];
int main()
 {
     int t,n,i;
	cin>>t;
	while(t--)
	{
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
	     cin>>a[i];
	 }
     for(i=0;i<n-1;i++)	    
	    {
	        if(a[i+1]<a[i])
	        cout<<a[i+1]<<" ";
	        else
	        cout<<"-1"<<" ";
	    }
	    cout<<"-1"<<"\n";
	}
	return 0;
}

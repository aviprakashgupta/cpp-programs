#include<bits/stdc++.h>
using namespace std;
int main()
 {   
     int n,m,i,k,t;
     cin>>t;
     while(t--)
     {
     int a[100001],b[100001],c[100001];
     for(i=0;i<=100001;i++)
     {
         b[i] =0 ;
     }
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    b[a[i]]++;
	}
	for(i=0;i<m;i++)
	{
	    cin>>c[i];
	}
	for(i=0;i<m;i++)
	{
	    if(b[c[i]]>0)
	    {
	        k = b[c[i]];
	        while(k>0)
	        {cout<<c[i]<<" ";
	          b[c[i]]--;
	          k--;
	        }
	     }
	}
	
	for(i=0;i<=100001;i++)
	{
	    if(b[i]>0)
	    {
	        k = b[i];
	        while(k>0)
	        {
	            cout<<i<<" ";
	            k--;
	        }
	    }
	}
	cout<<"\n";
     }
	return 0;
}

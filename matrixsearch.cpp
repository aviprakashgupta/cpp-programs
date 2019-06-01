#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int s,int e,int x)
{
    
   if(s<=e)
   {
    int mid = s + (e-s)/2;
    
    if(a[mid]==x)
    return 1;
    if(a[mid]<x)
        return(bs(a,mid+1,e,x));
    if(a[mid>x])
    return(bs(a,s,mid-1,x));
   }
   return 0;
}
int main()
 {
     int n,m,i,a[1000001],x,t;
     cin>>t;
     while(t--)
     {
	cin>>n>>m;
	for(i=0;i<n*m;i++)
	{
	    cin>>a[i];
	}
	cin>>x;
	cout<<bs(a,0,(n*m)-1,x);
	cout<<"\n";
     }
	return 0;
}

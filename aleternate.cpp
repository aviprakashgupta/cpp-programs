#include<bits/stdc++.h>
using namespace std;
int a[10000001];
void pr(int a[],int n)
{
    long long int p = 0; long long int q = n-1;
    while(p<q)
    {
        cout<<a[q]<<" "<<a[p]<<" ";
        p++;
        q--;
        
    }
    if(n%2!=0)
    cout<<a[p];
    
}
int main()
 {
     long long int t,n,i;
	cin>>t;
	while(t--)
	{
	   
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    pr(a,n);
	    //cout<<a[0];
	    cout<<"\n";
	 }
	return 0;
}

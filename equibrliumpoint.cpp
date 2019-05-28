#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int iseq(vector<int>a,int n)
{
    int sum =0 ,i;
    
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    int l = 0;
    for(i=0;i<n;i++)
    {
        sum = sum - a[i];
        if(l==sum)
        return(i+1);
        
        l = l + a[i];
    }
    
    return -1;
}
int main() {
    int t,n,i;
	cin>>t;
	while(t--)
	{
	   vector<int>a(1000001);
	   vector<int>b(1000001);
	   vector<int>c(1000001);
	   cin>>n;
	   for(i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	   cout<<iseq(a,n); 
	   cout<<"\n"; 
	    
	}
	return 0;
}

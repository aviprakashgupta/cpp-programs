#include <bits/stdc++.h>
#define fio ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    fio
    long long int m=0;
    long long int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    if(k==1)
	    {
	        cout<<n;
	    }
	    else
	    {
	    while(n!=0)
	    {
	        if(n%k!=0)
	        {
	            m = m + n%k;
	            n = n - n%k;
	        }
	        else
	        {
	            n = n/k;
	            m++;
	            
	        }
	    }
	        cout<<m;
	    }
	    m=0;
	        cout<<"\n";
	}
	return 0;
}

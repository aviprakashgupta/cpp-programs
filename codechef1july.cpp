#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    fio
    int t,n,i,p=0;
    int findex;
    double s=0;
    int a[100001];
	   cin>>t;
	   while(t--)
	   {
	       s=0;p=0;
	       cin>>n;
	       for(i=0;i<n;i++)
	       {
	           cin>>a[i];
	           s+= a[i];
	       }
	       //sort(a,a+n);
	       double j = s/n;
	       //cout<<"j"<<j<<"\n";
	       double k ;
	       int max = INT_MAX;
	       for(i=0;i<n;i++)
	       {
	        k = (s-a[i])/(n-1);
	        //cout<<"k"<<k<<"\n";
	       
	       // cout<<max<<"\n";
	        if(k==j)
	        {
	            p=100;
	            if(a[i]<max)
	            {
	            //cout<<a[i]<<" "<<max<<"\n";
	            findex = i+1;
	            max = a[i];
	            }
	        }
	        
	       }
	       if(p==0)
	       {
	           cout<<"Impossible";
	       }
	       else
	       {
	           cout<<findex;
	       }
	       cout<<"\n";
	   }
	return 0;
}

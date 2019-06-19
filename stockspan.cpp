#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n,l,a[10001],i,j;
     cin>>t;
     while(t--)
     {
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     l=1;
     for(i=0;i<n;i++)
     {l=1;
         for(j=i-1;j>=0;j--)
         {
             if(a[j]<=a[i])
             l++;
             else
             break;
         }
        cout<<l<<" ";
     }
     cout<<"\n";
     }
	return 0;
}

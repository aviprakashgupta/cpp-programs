#include<iostream>
using namespace std;
int main()
 {
     int n,k,i,max;int a[1000001],pre[1000001],t;
     cin>>t;
     while(t--)
     {
         max = -1;
   cin>>n>>k;
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
       pre[i] = pre[i-1] + a[i];
   }
//   for(i=0;i<=n;i++)
//   {
//       cout<<pre[i]<<" ";
//   }
   max  =-1;
   for(i=k;i<=n;i++)
   {
       if(pre[i]-pre[i-k]>max)
       max = pre[i] - pre[i-k];
       
   }
   cout<<max;
   cout<<"\n";
     }
	return 0;
}

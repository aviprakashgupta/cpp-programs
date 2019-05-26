#include<bits/stdc++.h>
using namespace std;
int main()
 {
     long long int t,i,n;
     
     cin>>t;
     while(t--)
     {
         vector<long long int>v;
  cin>>n;
   for(i=1;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
           if(n/i==i || i==1)
           v.push_back(i);
           else
          { v.push_back(i);
           v.push_back(n/i);}
       }
   }
   long long int s= 0;
   for(auto x:v)
   {
       //cout<<x<<" ";
       s = s +x;
   }
   if(s==n)
   cout<<"1";
   else
   cout<<"0";
   cout<<"\n";
   s=0;
     }
	return 0;
}

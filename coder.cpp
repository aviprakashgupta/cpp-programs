#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,p,i,j;
cin>>n;
if(n&1)
{
p = n/2;
cout<<pow(p+1,2)+pow(p,2);
}
else
{
p=n;
int l=pow(p,2)/2;
cout<<l;
}
cout<<"\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(abs(i-j)&1)
{cout<<".";}
else
{
cout<<"C";}
}
cout<<"\n";
}
return 0;
}

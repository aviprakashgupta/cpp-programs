#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,x,i,j,l=0,temp,a[100001];
cin>>t;
while(t--)
{
cin>>n>>x;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
temp = x - a[i];
for(j=i+1;j<n;j++)
{
if(a[j]==temp)
{
l =1000;
cout<<"Yes";
    break;
}
}
if(l==1000)
break;
}
if(l==0)
{
cout<<"No";}
cout<<"\n";
l=0;
}





return 0;
}

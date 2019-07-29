#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,s=0,l=0;
int a[100001];
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
s+=a[i];
}
int y= s&1;
if(y)
{
for(i=0;i<n;i++)
{
int u = a[i]&1;
if(u)
l++;
}
}
if(y==0)
{
for(i=0;i<n;i++)
{
int u = a[i]&1;
if(u==0)
l++;
}
}
cout<<l;
return 0;
}


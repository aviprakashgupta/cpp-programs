#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t,i,p,k=0;
cin>>t;
while(t--)
{
vector<int>v,s;

cin>>n;
for(i=0;i<n;i++)
{
cin>>p;
v.push_back(p);
}
for(i=0;i<n;i++)
{
if(v[i]!=0 && v[i]==v[i+1])
{
v[i] = 2*v[i];
v[i+1]=0;
}
}
for(i=0;i<n;i++)
{
if(v[i]!=0)
{
k++;
s.push_back(v[i]);
}
}
for(i=0;i<n-k;i++)
{
s.push_back(0);
}
for(auto it:s)
{
cout<<it<<" ";
}
cout<<"\n";
k=0;
}
return 0;
}

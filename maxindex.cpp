#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
int n,i,t,j,ind,m=-1,p;

fio
cin>>t;
while(t--)
{
    vector<int>a;
cin>>n;
for(i=0;i<n;i++)
{
cin>>p;
a.push_back(p);
}
//cout<<a[n-1]<<"p";
if(n==1)
{
    cout<<"0";
}
else
{
for(i=0;i<n;i++)
{
for(j=n-1;j>i;j--)
{
if(a[i]<=a[j])
{
    
ind = j-i;
//cout<<j<<" "<<i<<endl;
//cout<<"ind"<<ind<<"\n";
if(ind>m)
{m= ind;}
//cout<<"m"<<m<<"\n";
//cout<<m<<endl;
break;
}
}
}
cout<<m;}
m=-1;
cout<<"\n";
}
return 0;
}

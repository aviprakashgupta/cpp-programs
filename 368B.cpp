#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
fio
int n,m,i,a[100010],q;
cin>>n>>m;
for(i=1;i<=n;i++)
{
cin>>a[i];
}
int h[100010]={0};
int an[100010]={0};
an[n] = 1;
h[a[n]] =1;
for(i=n-1;i>=1;i--)
{
if(h[a[i]]==0)
{an[i] = an[i+1]+1;}
else
{an[i] = an[i+1];}
h[a[i]]++;
}
for(i=0;i<m;i++)
{
cin>>q;
cout<<an[q]<<"\n";
}
return 0;
}

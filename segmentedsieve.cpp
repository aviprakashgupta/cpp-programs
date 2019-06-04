#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	fio
long long int t;
cin>>t;
while(t--)
{
long long int n,m,i,j;
vector<long long int>p;
cin>>n>>m;
int h = sqrt(m)+1;
vector<int>base(h+1);
fill(base.begin(),base.end(),false);
for(i=2;i*i<=h;i++)
{
for(j=i*i;j<=h;j=j+i)
{
if(base[j]==false)
{base[j]=true;}
}
}
for(i=2;i<=h;i++)
{
if(base[i]==false)
p.push_back(i);
}
long long int c,b;
int prime[m-n+1];
for(i=0;i<=m-n;i++)
{
prime[i] = false;
}
for(i=0;i<p.size();i++)
{
b = p.at(i);
//cout<<"b"<<b<<" ";
c = floor(n/b) * b;
if(c<n)
{
c = c + b;
}
for(j=c;j<=m;j=j+b)
{
prime[j-n] = true;
}
if(c==b)
{
prime[c-n] = false;
}
}
for(j=0;j<=m-n;j++)
{
if(prime[j]==false && j+n!=1)
cout<<j+n<<"\n";
}
cout<<"\n";}
return 0;
}

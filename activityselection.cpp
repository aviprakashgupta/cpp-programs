#include<bits/stdc++.h>
using namespace std;
struct activity{
int start;
int finish;
};
bool isg(activity a,activity b)
{
 return(a.finish < b.finish);

}
int main()
{
int t,i,n,p,k,s=0,j;
cin>>t;
while(t--)
{
activity a[100001];
cin>>n;
for(i=0;i<n;i++)
{
cin>>p;
a[i].start = p;
}
for(i=0;i<n;i++)
{
cin>>k;
a[i].finish = k;
}
sort(a,a+n,isg);
s =1 ;
j =0;
for(i=1;i<n;i++)
{
if(a[i].start >= a[j].finish)
{
s++;
j = i;
}
}
cout<<s<<"\n";
}
return 0;
}

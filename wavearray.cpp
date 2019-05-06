#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int*b)
{
int temp;
temp  = *a;
*a = *b;
*b = temp;
}
int main()
{
int n,i,a[100001];
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n-1;i++)
{
if(i%2==0 && a[i]<a[i+1])
swap(&a[i],&a[i+1]);
if(i%2!=0 && a[i]>a[i+1])
swap(&a[i],&a[i+1]);
}
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}




#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int a[10000001];
int main()
{
fio
long long int t,n,i,k,s,m;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];}
cin>>k;
sort(a,a+n);
if(k==1)
{cout<<"0";}
else
{
long long int mx = 1000000000011;
for(i=0;i<n-k;i++)
{
if(a[i+k-1]-a[i]<mx)
{
    mx = a[i+k-1] - a[i];
}
}
    cout<<mx;
    
}
cout<<"\n";
}
return 0;
}

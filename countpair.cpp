#include <bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void swap(int i,int j,char str[])
{
    char te = str[i];
    str[i] = str[j];
    str[j] = te;
}
int main() {
    fio
    int n,t,i,j;
	cin>>n>>t;
	char str[n+1];
	for(i=0;i<n;i++)
	{
	    cin>>str[i];
	}
	for(j=0;j<t;j++)
	{
	    for(i=0;i<n-1;i++)
	    {
	        if(str[i]=='B')
	        swap(i,i+1,str);
	    }
	}
	for(i=0;i<n;i++)
	{
	    cout<<str[i];
	}
	
	return 0;
}

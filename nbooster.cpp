#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+1+i>n)
        {
            cout<<i+1;
            break;
        }
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int a[100001],i;
    cin>>str;
    int n = str.length();
    if((str[n-1]-48)%2==0)
    {a[n-1] =1;}
    else
    {a[n-1] = 0;}
    for(i=n-2;i>=0;i--)
    {
        int p =  (str[i]-48);
        if(p%2==0)
        a[i] = a[i+1] +1;
        else
        a[i] = a[i+1];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}

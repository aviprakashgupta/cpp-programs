#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p=0,i,a=0,e=0,k=0,o=0,u=0;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>str;
    int n = str.size();
    for(i=0;i<n;i++)
    {
     if(str[i]=='a')
    {
        a++;
    }
    if(str[i]=='e')
    {
        e++;
    }
    if(str[i]=='i')
    {
        k++;
    }
    if(str[i]=='o')
    {
        o++;
    }
    if(str[i]=='u')
    {
        u++;
    }
    }
    if(a!=0&&e!=0&&k!=0&&o!=0&&u!=0)
    {
     cout<<"YES";   
    }
    else
    {
        cout<<"NO";
    }
    a=0;e=0;k=0;o=0;u=0;
    cout<<"\n";
        
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string str;
    int a[100001];
     cin>>str;
     n = str.size();
    for(i=0;i<n;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {a[i] = 1;}
        else
        {a[i]=0;}
    }
    // for(i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int max=-1;
    int cnt = 0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {cnt++;}
        if(a[i]==0||i==n-1)
        {
            if(cnt>max)
            {max= cnt;}
            cnt =0 ;
        }
        //cout<<max;
    }
    cout<<max;
    return 0;
}

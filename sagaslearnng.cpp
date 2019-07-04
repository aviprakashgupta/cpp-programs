#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,x;
    int t;
    cin>>t;
    while(t--)
    {
    cin>>n;
     x = n/3;
    if(x<=0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<x<<" "<<x*2<<" "<<x*3;
    }
    cout<<"\n";
    }
    return 0;
}

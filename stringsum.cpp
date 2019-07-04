#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int s=0,i;
    cin>>str;
    int n = str.size();
    for(i=0;i<n;i++)
    {
        s+=(str[i]-97);
    }
    cout<<s+n;
    return 0;
}

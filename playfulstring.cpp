#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,i;
    
    string str;
    cin>>t;
    //cout<<'z'-'a';
    while(t--)
    {
        vector<int>v;
        p=0;
        cin>>str;
        int n = str.size();
        for(i=0;i<n-1;i++)
        {
            v.push_back(abs(str[i]-str[i+1]));
        }
        // for(auto it:v)
        // {
        //     cout<<it<<" ";
            
        // }
        // cout<<"\n";
        for(auto it : v)
        {
            if(it!=1 && it!=25)
            {
                p=100;
                cout<<"NO";
                break;
            }
        }
        if(p==0)
        {cout<<"YES";}
        cout<<"\n";
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j;
    vector<bool>p;
    p.resize(101,false);
    vector<string>v;
    cin>>a>>b;
    for(i=2;i<=sqrt(b);i++)
    {
        for(j=i *i ;j <=b;j=j+i)
        {
            if(p[j]==false)
            {
                p[j] = true;
            }
        }
    }
    for(i=a;i<=b;i++)
    {
        if(p[i]==false)
        {
            v.push_back(to_string(i));
        }
    }
    vector<string>v1;
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v.size();j++)
        {
            if(i!=j)
            v1.push_back(v[i]+v[j]);
        }
    }
    int r = stoi(v1[v1.size()-1]);
    int l = stoi(v1[0]);
    p.resize(r+1,false);
    for(i=2;i<=sqrt(r);i++)
    {
        for(j=i*i;j<=r;j=j+i)
        {
            if(p[j]==false)
            {
                p[j] = true;
            }
        }
    }
    vector<int>v2;
    for(i=0;i<v1.size();i++)
    {
        int k = stoi(v1[i]);
        if(p[k]==false)
        {v2.push_back(k);
        p[k] = true;
        }
    }
    int f = v2.size();
    unsigned long long int x = v2[0];
    unsigned long long int y = v2[v2.size()-1];
    
     unsigned long long int z;

    for(i=2;i<f;i++)
    {
        z = x+y;
        x = y;
        y = z;
    }
    cout<<z;
    return 0;
}

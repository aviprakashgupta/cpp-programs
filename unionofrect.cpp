#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fio
    int n,a,b,c,d,i,j,l=0;
    int rec[1001][1001] = {0};
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        for(i=b;i<d;i++)
        {
            for(j=a;j<c;j++)
            {
            rec[i][j] = 1;
            }
        }
        // for(i=0;i<=6;i++)
        // {
        //     for(j=0;j<=6;j++)
        //     {
        //         cout<<rec[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }cout<<"\n";
    }

    for(i=0;i<=1000;i++)
    {
        for(j=0;j<=1000;j++)
        {
            if(rec[i][j]!=0)
            l++;
        }
    }
    cout<<l;
    return 0;
}

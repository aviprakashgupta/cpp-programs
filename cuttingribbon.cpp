#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c,x,y,z,i;
    int dp[1000001];
    cin>>n>>a>>b>>c;
    dp[0] =0 ;
    for(i=1;i<=n;i++)
    {
        x =-1;y=-1;z=-1;
        
        if(i>=a)
        {
         x = dp[i-a];
        }
        if(i>=b)
        {
        y = dp[i-b];
        }
        if(i>=c)
        {
            z = dp[i-c];
        }
        if(x ==-1 && y==-1 && z==-1)
        {
            dp[i] = -1;
        }
        else
        dp[i] = max(max(x,y),z)+1;
    }
    cout<<dp[n]<<"\n";
	return 0;
}

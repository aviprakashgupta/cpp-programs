#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n,m,i,j,a[1001][1001],max =-1,c=0;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    vector<int>v;
	    for(i=0;i<n;i++)
	    {
	       c=0;
	     for(j=0;j<m;j++)
	     {
	         if(a[i][j]==1)
	         c++;
	     }
	     v.push_back(c);
	    }
	    max =-1;
	    int index;
	    for(i=0;i<v.size();i++)
	    {
	        if(max<v[i])
	        {
	            max = v[i];
	            index = i;
	        }
	    }
	    cout<<index;
	    cout<<"\n";
	    c=0;max=-1;
	}
	return 0;
}

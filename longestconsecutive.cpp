#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,max,i,index,n;
    cin>>t;
    max =-1;
    while(t--)
    {
        max=-1;
        cin>>n;
        int a[n+1];
        int b[100001] = {0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(max<a[i])
            {max = a[i];}
            b[a[i]]++;
        }
        /*sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }cout<<"\n";*/
        int l =0 ;
        int m = -1;
        for(i=1;i<=max;i++)
        {
            if(b[i]!=0)
            {
            l++;
            }
            if(b[i]==0||i==max)
            {
                if(m<l)
                {m = l;}
                l=0;
            }
        }
        cout<<m;
        cout<<"\n";
    }
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,i,n,max,index;
     cin>>t;
     while(t--)
     {
        int a[1001],b[65];
        for(i=0;i<=65;i++)
        {
            a[i] =0 ;
        }
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         b[a[i]]++;
     }
     max= 0 ;
     int l =0 ;
     for(i=0;i<=65;i++)
     {
         if(b[i]!=0)
         l++;
     }
     int k;
     while(l!=0)
     {
         for(i=0;i<=65;i++)
         {
             if(max<b[i])
             {
                 max = b[i];
                 index = i;
             }
         }
         l--;
         if(b[index]>1)
         {
             k = b[index];
             while(k>0)
              {cout<<index<<" ";
              k--;
              b[index]--;}
         }
         if(b[index]==1)
         {cout<<index<<" ";}
         max =0;
         b[index]=0;
     }
     cout<<"\n";
     }
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    int index,i,j,k,l=0;
    cin>>str1;
    cin>>str2;
    int n1 = str1.size();
    int n2 = str2.size();
    index= 0 ;
    for(i=0;i<n1;i++)
    {k=0;
    for(j=index;j<n2;j++)
    {
        if(str1[i]==str2[j])
        {
            k=100;
            //cout<<str1[i]<<" "<<str2[j]<<"\n";
            l++;
            index= j+1;
            break;
        }
        
    }
    if(k==0)
    {break;}
    }
    cout<<l;
    
    return 0;
}

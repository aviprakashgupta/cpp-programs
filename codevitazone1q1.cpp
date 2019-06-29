#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p;
    map<char,int>m;
    p = 10;
    for(i='A';i<='Z';i++)
    {
        m[i] = p;
        p++;
    }
   int k;
    string str;
    // cin>>str;
    // for(i=0;i<str.length();i++)
    // {
    //      k = str[i];
    //     cout<<k;
    //  }
    vector<int>v;
  while(cin>>str)
  {   int max=-1;
      int s=0;
      for(i=0;i<str.size();i++)
      {
          if(isdigit(str[i])!=0)
          k = str[i]-48;
          else
          k = m[str[i]];
          if(k>max)
          {
              max = k;
          }
      }
      int base =  max+1;
      for(i=str.size()-1;i>=0;i--)
      {
          if(isdigit(str[i])!=0)
          {
              s+= (str[i]-48) * pow(base,str.size()-1-i);
          }
          if(isdigit(str[i])==0)
          {
              s+= m[str[i]] * pow(base,str.size()-1-i);
          }
        //cout<<s<<" ";
      }//cout<<"\n";
      v.push_back(s);
  }
    sort(v.begin(),v.end());
    cout<<v[0];
    
    return 0;
}

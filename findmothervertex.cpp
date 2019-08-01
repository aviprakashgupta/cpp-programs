#include<bits/stdc++.h>
using namespace std;
class graph{
   public:
   int v;
   list<int>*adj;
   graph(int v)
   {
       this->v= v;
       adj = new list<int>[v];
   }
   void add(int u,int v)
   {
       adj[u].push_back(v);
   }
   void dfsutill(int u,vector<int>&vis)
   {
       vis[u] = 1;
       list<int>::iterator i;
       for(i=adj[u].begin();i!=adj[u].end();i++)
       {
           if(vis[*i]==0)
           {
               dfsutill(*i,vis);
           }
       }
   }
   void dfs(int u)
   {
       vector<int>vis;
       int i;
       vis.resize(v+1,0);
       int y =0 ;
       for(i=0;i<v;i++)
       {
           if(vis[i]==false)
           {
               dfsutill(i,vis);
               y = i ;
           }
       }
       cout<<y;
   }
};

int main()
{
    graph g(7);
    g.add(0, 1); 
    g.add(0, 2); 
    g.add(1, 3); 
    g.add(4, 1); 
    g.add(6, 4); 
    g.add(5, 6); 
    g.add(5, 2); 
    g.add(6, 0);
    g.dfs(0);
    return 0;
}

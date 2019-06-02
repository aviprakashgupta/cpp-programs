vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
   vector<int>s;
    int t=0,i;
    int b =A.size()-1;
    int l = 0;
    int r  = A[0].size()-1;
    int dir =0;
    
    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(i=l;i<=r;i++)
            {
                s.push_back(A[t][i]);
                
            }
            t++;
            //dir =1;
        }
        if(dir==1)
        {
            for(i=t;i<=b;i++)
            {
                s.push_back(A[i][r]);
            }
            r--;
            //dir =2;
        }
        if(dir==2)
        {
            for(i=r;i>=l;i--)
            {
             s.push_back(A[b][i]);
            }
            b--;
           // dir =3;
        }
        if(dir==3)
        {
            for(i=b;i>=t;i--)
            {
                s.push_back(A[i][l]);
            }
            l++;
//dir =0;
        }
        dir = (dir  + 1)%4;
    }
  //  return Solution;
  return(s);
}

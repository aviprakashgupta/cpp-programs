#include<iostream>
using namespace std;
int main()
 {
     int t,a,b,c,i;
     string str;
	cin>>t;
	while(t--)
	{
	    a = 0;b=0;c=0;
	    cin>>str;
	    for(i=0;str[i]!='\0';i++)
	    {
	        if(str[i]=='a')
	        a = 1 + 2*a;
	        if(str[i]=='b')
	        b = a + 2*b;
	        if(str[i]=='c')
	        c =  b + 2*c; 
	    }
	    
	    cout<<c;
	    cout<<"\n";
	}
	
	return 0;
}

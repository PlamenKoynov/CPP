#include<iostream>
using namespace std;
int main()
{
    string m;
    cin>>m;
    int n,s=0,p=17,k;
    cin>>n;  
    if(n<=17) cout<<int(m[n-1])-48<<endl;
    else
    {
        for(int i=0;i<=p-1;i++) s=s+(int(m[i])-48);
         while(p<=n-1)
         {
           k=s/p;
           s=s+k;
           int t=s;
           while(t!=0)
           {
                      t=t/10;
                      p++;
                      if(p==n-1) 
                      {
                               cout<<int(m[p-1])-48<<endl;
                               break;
                      }
           }
         } 
        
      }
   
    system("pause");
    return 0;
}               
              
                    
            

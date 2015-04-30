#include<iostream>
using namespace std;
bool p[10000];
int main()
{
    bool flag=0;
    int n, m, a, br=0, br1=0;
    cin>>n>>m;
    for(int i=0;i<=m-1;i++) 
    {
            cin>>a;
            p[a]=1;
    }
    int k=0,t;
    while(k<=n-1)
    {
               if(k>=0&&k<=3) t=k+3;
               else t=k;
               if(p[t+3]==1) 
               {
                             while(p[t+3]==1) 
                             {
                                              t--;
                                              br1++;
                                              if(br1==3) 
                                              {
                                                         flag=1;
                                                         break;
                                              }
                             }
                             br1=0; 
                             k=k+t;
                             if(flag==1)
                             {
                                       while(p[k]==1) 
                                       {
                                             k++;
                                             br++;
                                       }
                                       flag=0;
                                       k++;
                             }
               }
               else k=k+3;
               if(k<n) br++;
               
    }
    cout<<br<<endl;
    system("pause");
    return 0;
} 
            
            
    
    

#include<iostream>
using namespace std;
bool a[10000],flag=0;
int main()
{
    int n,m,k,br=0,c;
    cin>>n>>m;
    for(int i=0;i<=m-1;i++)
    {
            int t;
            cin>>t;
            a[t]=1;
    }
    int y=1;
    while(y<=n)
     if(a[y]==0) 
     {
                 if(flag==0)
                 {
                            k=y;
                            if(y==1) c=y+2;
                             else c=y+3;
                            if(c>=n) break;
                            while(c>y) 
                             if(a[c]==0) 
                             {
                                         k=c;
                                         break;
                             }
                             else c--;
                            y=k;
                            br++;
                 }
                 if(flag==1) 
                  if(a[y+1]==0) 
                  {
                                flag=0;
                                y++;
                                br++;
                  }
                  else 
                  {
                       while(a[y]==1) 
                       {
                                  y++;
                                  br++;
                       }
                       flag=0;
                  }
                   
     }
     else 
     {
          if(flag==0)
          {
                     if(y==1) c=y+2;
                      else c=y+3;
                     if(c>=n) break;
                     while(c>y) 
                      if(a[c]==0) 
                      {
                                  k=c;
                                  y=k;
                                  br++;
                                  break;
                      }
                      else 
                      {
                           c--;
                           k=-1;
                      }
                     if(k==-1) 
                     {
                               y++;
                               br++;
                               flag=1;
                     }
          }
          if(flag==1)
          {
                     if(a[y]==0) flag=0;
                     else 
                      while(a[y]==1) 
                      {
                                     y++;
                                     br++;
                      }
                      br++;
          }
     } 
    cout<<br<<endl; 
    system("pause");
    return 0;
}

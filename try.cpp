#include<iostream>
using namespace std;
int main()
{
    int a[101][101],m,n,k,br=0,p,t,c,d;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++) 
     for(int j=1;j<=m;j++) cin>>a[i][j];
    for(int i=1;i<=n;i++) 
     for(int j=1;j<=m;j++)
     {
             br++;
             if(br==k)
             {
                      p=j,t=1,c=j,d=i;
                      while(t!=n+1)
                      {
                                 a[t][p]=0;
                                 t++;
                      }
                      p=i,t=1;
                      while(t!=m+1)
                      {
                                 a[p][t]=0;
                                 t++;
                      }
                      break;
             }
     }
     
    int s1,s2,s3,s4;
    s1=s2=s3=s4=0;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
     {
             if(j<c&&i>d) s2=s2+a[i][j];
             if(j<c&&i<d) s3=s3+a[i][j];
             if(j>c&&i>d) s1=s1+a[i][j];
             if(j>c&&i<d) s4=s4+a[i][j];
     }
    cout<<s4<<" "<<s2<<" "<<s3<<" "<<s1<<endl;              
    system("pause");
    return 0;
}
                 
                                 
                                 

#include<iostream>
using namespace std;
int a[101][101],br=0;
void polu(int k, int p)
{
     while(a[k+1][p]==1) {a[k+1][p]=0; polu(k+1,p); k++; }
     while(a[k+1][p+1]==1) {a[k+1][p+1]=0; polu(k+1,p+1); k++; p++; }
     while(a[k+1][p-1]==1) {a[k+1][p-1]=0; polu(k+1,p-1); k++; p--; }
     while(a[k-1][p]==1) {a[k-1][p]=0; polu(k-1,p); k--; }
     while(a[k-1][p-1]==1) {a[k-1][p-1]=0; polu(k-1,p-1); k--; p--;} 
     while(a[k-1][p+1]==1) {a[k-1][p+1]=0; polu(k-1,p+1); k--; p++; }
     while(a[k][p+1]==1) {a[k][p+1]=0; polu(k,p+1); p++; }
     while(a[k][p-1]==1) {a[k][p-1]=0; polu(k,p-1); p--; }
    
}
int main()
{
    int n,m,br=0;
    cin>>n>>m;
    for(int i=0;i<=n-1;i++) 
     for(int j=0;j<=m-1;j++) cin>>a[i][j];
    for(int i=0;i<=n-1;i++)
    {
            if(a[i][0]==1) 
            {
                           a[i][0]=0;
                           polu(i,0);
            }
            if(a[i][m-1]==1) 
            {
                             a[i][m-1]=0;
                             polu(i,m-1);
            }
    }
    for(int i=1;i<=n-2;i++)
     for(int j=1;j<=m-2;j++) 
      if(a[i][j]==1) 
      {
                     a[i][j]=0;
                     polu(i,j);
                     br++;
      }
    cout<<br<<endl;
    system("pause");
    return 0;
}


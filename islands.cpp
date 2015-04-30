#include<iostream>
using namespace std;
int a[101][101];
void polu(int k, int p)
{
     a[k][p]=0;
     if(a[k+1][p]==1) polu(k+1,p);
     if(a[k+1][p+1]==1) polu(k+1,p+1);
     if(a[k+1][p-1]==1) polu(k+1,p-1);
     if(a[k-1][p]==1) polu(k-1,p);
     if(a[k-1][p-1]==1) polu(k-1,p-1);
}
int main()
{
    int n,m,br=0;
    cin>>n>>m;
    for(int i=0;i<=n-1;i++) 
     for(int j=0;j<=m-1;j++) cin>>a[i][j];
    for(int i=0;i<=n-1;i++)
    {
            if(a[0][i]==1) 
            {
                           a[0][i]=0;
                           polu(0,i);
            }
            if(a[m-1][i]==1)
            {
                          a[m-1][i]=0;
                          polu(m-1,i);
            }
    }
    for(int i=1;i<=n-2;i++)
    {
            for(int j=1;j<=m-2;j++) 
                    if(a[i][j]==1) 
                    {
                                   br++;
                                   polu(i,j);
                     }
    }
    cout<<br<<endl;
    system("pause");
    return 0;
}

#include<iostream>
using namespace std;
int a[9][9],b[9][9];
bool visited[10];
int main()
{
    int c,p;
    for(int i=1;i<=9;i++)
     for(int j=1;j<=9;j++) cin>>a[i][j];
    for(int i=1;i<=9;i++)
     for(int j=1;j<=9;j++)
     {
             if(i%3==0&&j%3==0)
              for(int t=1;t<=i;t++)
               for(int k=1;k<=j;k++)
               {
                             if(a[t][k]==0) 
                             {
                                            c=t;
                                            p=k;
                             }
                             visited[a[t][k]]=1;
               }
             for(int r=1;r<=9;r++) 
             if(visited[r]==0) a[c][p]=r;
             else visited[r]=0;
     } 
     for(int i=1;i<=9;i++) 
     {
             for(int j=1;j<=9;j++) cout<<a[i][j]<<" ";
             cout<<endl;
     }
    system("pause");
    return 0;
}

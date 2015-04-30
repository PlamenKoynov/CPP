#include<iostream>
using namespace std;
int a[101][101];
void func(int x, int y)
{
     while(a[x+1][y]==1) {a[x+1][y]=0; func(x+1,y); x++; }
     while(a[x+1][y+1]==1) {a[x+1][y+1]=0; func(x+1,y+1); x++; y++;}
     while(a[x-1][y]==1) {a[x-1][y]=0; func(x-1,y); x--; }
     while(a[x-1][y-1]==1) {a[x-1][y-1]=0; func(x-1,y-1); x--; y--; }
     while(a[x][y+1]==1) {a[x][y+1]=0; func(x,y+1); y++; }
     while(a[x][y-1]==1) {a[x][y-1]=0; func(x,y-1); y--; }
}
int main()
{
    int n,br1=0,br=0,br2=0;
    cin>>n;
    for(int i=0;i<=n-1;i++)
     for(int j=0;j<=n-1;j++) cin>>a[i][j];
    for(int i=0;i<=n-1;i++)
    {
            for(int j=0;j<=n-1;j++)
             if(a[i][j]==0) br++;
            if(br==n) br1++;
            br=0;
    }
    for(int j=0;j<=n-1;j++) 
    {
            for(int i=0;i<=n-1;i++)
             if(a[i][j]==0) br++;
            if(br==n) br1++;
            br=0;
    }
    for(int i=0;i<=n-1;i++) 
     for(int j=0;j<=n-1;j++) 
      if(a[i][j]==1) 
      {
                     br2++;
                     a[i][j]=0;
                     func(i,j);
      }
    cout<<br2<<" "<<br1<<endl;
    system("pause");
    return 0;
}  
    

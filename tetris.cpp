#include<iostream>
using namespace std;
int main()
{
    int n,m,br=0,k=0,c=0,i,j;
    cin>>n>>m;
    char a[102][102];
    for( i=0;i<=n-1;i++)
     for( j=0;j<=m-1;j++) cin>>a[i][j];
    for( i=0;i<=n-1;i++)
    {
            for(j=0;j<=m-1;j++)
             if(a[i][j]=='*') br++;
            if(br==m) k++;
            else 
            {
                 c=c+(k*(k+1)/2);
                 k=0;
            }
            br=0;
    }
    c=c+(k*(k+1)/2);
    cout<<c<<endl;
    system("pause");
    return 0;
}
           
    

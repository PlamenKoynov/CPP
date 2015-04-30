#include<iostream>
using namespace std;
bool f[3][101];
int main()
{
    long long a,b,c,d,max=-101,br=0,min=101;
    cin>>a>>b>>c>>d;
    if(a>max) max=a;
    if(a<min) min=a;
    if(b>max) max=b;
    if(b<min) min=b;
    if(c>max) max=c;
    if(c<min) min=c;
    if(d>max) max=d;
    if(d<min) min=d;
    if(a<b) for(int j=a;j<=b;j++) f[0][j]=1;
     else for(b;b<=a;b++) f[0][b]=1;
    if(c<d) for(int p=c;p<=d;p++) f[1][p]=1;
     else for(d;d<=c;d++) f[1][d]=1;
    for(int i=min;i<=max;i++) 
     if(f[0][i]==1&&f[1][i]==1) br++;
    cout<<br-1<<endl; 
    system("pause");
    return 0;
}
    
    

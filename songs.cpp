#include<iostream>
using namespace std;
long long n, a[50001], b[50001], c[5001][5001];
int main()
{
    long long br=0;
    cin>>n;
    for(int i=0;i<=n-1;i++) cin>>a[i];
    for(int i=0;i<=n-1;i++) 
     for(int j=i+1;j<=n-1;j++) 
      c[a[i]][a[j]]=1;
    for(int i=0;i<=n-1;i++) cin>>b[i];
    for(int i=0;i<=n-1;i++) 
     for(int j=i+1;j<=n-1;j++)
      if(c[b[i]][b[j]]!=1) br++;
    cout<<br<<endl;
    system("pause");
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int a[1001],b[1001];
int main()
{
    int n,m,s1=0,s2=0,p=0;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
            cin>>m;
            for(int j=0;j<=m-1;j++) cin>>a[j];
            for(int i=0;i<=m-1;i++)
             for(int j=i+1;j<=m-1;j++)
              if(a[i]>a[j]) swap(a[i],a[j]);
            s1=a[0]+a[m-1];
            s2=a[(m-1)/2]+a[m/2];
            b[p]=s1-s2;
            p++;
            s1=0;
            s2=0;
    }
    for(int i=0;i<=p-1;i++) cout<<b[i]<<endl;
    system("pause");
    return 0;
}

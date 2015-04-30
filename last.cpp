#include<iostream>
using namespace std;
int main()
{
    bool b[100];
    int n,a[21],br=0,max=0,p=1;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
            cin>>a[i];
            p=p*a[i];
            b[p]=1;
            if(a[i]>max) max=a[i];
            b[a[i]]=1;
            for(int j=1;j<=a[i]/2;j++)
             if(a[i]%j==0) b[j]=1;
    }
    for(int i=1;i<=p/2;i++) 
     if(p%i==0) b[i]=1;
    for(int i=1;i<=max;i++)
     if(b[i]==1) br++;
    cout<<br<<endl;
    cout<<br*(br-1)+2<<endl;
    system("pause");
    return 0;
}         

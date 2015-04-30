#include<iostream>
using namespace std;
long long a[102];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int j=1;j<=n;j++) 
     for(int i=1;i<=n-1;i++)
      if(a[i]>a[i+1]) 
      {
                     int temp;
                     temp=a[i+1];
                     a[i+1]=a[i];
                     a[i]=temp;
      }              
    long long s1=0,s2=0,k=1;
    while(k<=n/2)
    {
                 s1=s1+a[k]+a[n-k+1];
                 k++;
                 s2=s2+a[k]+a[n-k+1];
                 k++;
    }
    if(n%2!=0) 
    {
               if(s1>s2) s2=s2+a[n/2+1];
                else s1=s1+a[n/2+1];
    }
    if(s2>s1) cout<<s2-s1<<endl;
     else cout<<s1-s2<<endl;
    system("pause");
    return 0;
}
    

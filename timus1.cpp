#include<iostream>
#include<cmath>
using namespace std;
long long a[101];
long long func(int b, int c)
{
     long long p=1;
     while(c>0)
     {
               p=p*b;
               c--;
     }
     return p;
}
int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=1;i<=100;i++) cout<<func(i,n)<<endl;
    /*for(int i=1;i<=100;i++)
    {
            for(int j=i+1;j<=100;j++)
             for(int k=j;k<=100;k++) 
             {
                     if(a[k]==a[i]+a[j]) 
                     {
                                         cout<<i<<" "<<j<<" "<<k<<endl;
                                         flag=1;
                     }
                     if(flag==1) break;
             }
                  
    }
    if(flag==0) cout<<-1<<endl;
    for(int i=1;i<=100;i++) cout<<a[i]<<" ";
    cout<<endl;*/
    system("pause");
    return 0;
}   

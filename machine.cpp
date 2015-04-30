#include<iostream>
using namespace std;
int a[20];
int main()
{
    string s;
    cin>>s;
    long long k=s.size(), p=0, t=1, vas=0, nis=0;
    for(int i=0;i<=k-1;i++)
     if(s[i]>=48&&s[i]<=57) 
     {
                            a[p]=s[i]-48;
                            p++;
     }
    sort(a,a+p);
    for(long long j=p-1;j>=0;j--) 
    {
            nis=nis+a[j]*t;
            t=t*10;
    }   
    t=1;
    for(long long j=0;j<=p-1;j++) 
    {
            vas=vas+a[j]*t;
            t=t*10;
    }     
    long long r=vas-nis, m;
    cout<<nis<<" "<<vas<<" "<<r<<endl;
    m=2010+r;
    while(m>=4020) m=1005+(m-4020);
    cout<<m<<endl;           
    system("pause");
    return 0;
}
                            
    

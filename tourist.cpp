#include<iostream>
using namespace std;
int a[3],b[3];
int main()
{
    int k,w,s1=0,s2=0;
    cin>>k>>w;
    int br=0;
    for(int i=1;i<=3;i++) 
    {
            cin>>a[i]>>b[i];
            if(a[i]<=w&&b[i]>=k) br++;
            s1=s1+a[i];
            s2=s2+b[i];
    } 
    if(s1<=w&&s2>=k) br++;
    for(int i=1;i<=3;i++)
    {
            for(int j=i+1;j<=3;j++)
                    if(a[i]+a[j]<=w&&b[i]+b[j]>=k) br++;
    }
    cout<<br<<endl;
    system("pause");
    return 0;
} 

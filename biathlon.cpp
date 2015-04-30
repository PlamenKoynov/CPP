#include<iostream>
using namespace std;
int main()
{
    long long a[3],b[3],c[3],k=1;
    char d[3]={'A','B','C'};
    for(int i=1;i<=3;i++)
    {
            cin>>a[i]>>b[i]>>c[i];
            int s=5-c[i];
            b[i]=b[i]+s*30;
            while(b[i]>=60)
            {
                           a[i]++;
                           b[i]=b[i]-60;
            }
    }
    long long minm=a[1],mins=b[1];
    if((a[2]<minm)||(a[2]==minm&&b[2]<mins))
    {
                        minm=a[2];
                        mins=b[2];
                        k=2;
    }
    if((a[3]<minm)||(a[3]==minm&&b[3]<mins))
    {
                        minm=a[3];
                        mins=b[3];
                        k=3;
    }                    
    cout<<minm<<" "<<mins<<" "<<d[k-1]<<endl; 
    system("pause");
    return 0;
}
            

#include<iostream>
using namespace std;
long long a[10];
int main()
{
    int m,n;
    long long k;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=m;j++)
            {
                    k=i*j;
                    while(k!=0)
                    {
                               a[k%10]=a[k%10]+1;
                               k=k/10;
                    }
            }
    }
    long long ind,max=0;
    for(int i=0;i<=10;i++) 
     if(a[i]>max) 
     {
                  max=a[i];
                  ind=i;
     }
    cout<<ind<<" "<<max<<endl;
    system("pause");
    return 0;
}
    
                    
    

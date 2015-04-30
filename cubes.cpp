#include<iostream>
using namespace std;
int main()
{
    bool flag=0;
    int n,i=2;
    cin>>n;
    int a[1000];
    for(int j=0;j<=n/2;i++) a[i]=0;
    for(i;i<=n/2;i++)
     if(n%i==0) 
     {
                a[i]++;
                if(a[i]==3) 
                {
                            int t;
                            t=n/a[i];
                            if(n/(t*t*t)==1) 
                            {
                                             cout<<a[i]<<" "<<t<<endl;
                                             flag=1;
                            }
                            break;
                }
     }
     if(flag==0) cout<<"NO"<<endl;
     system("pause");
     return 0;
}
    

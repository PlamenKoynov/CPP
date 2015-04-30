#include<iostream>
using namespace std;
int a[10001];
int main()
{
    int n,br=1,max=0,k=0,p=0;
    cin>>n;
    cin>>a[0];
    for(int i=1;i<=n-1;i++)
    {
            cin>>a[i];
            if(a[i]==a[i-1]) br++;
            if(a[i]!=a[i-1]&&br>max) 
            {
                                     max=br;
                                     br=1;
            }
    }
    for(int i=n-1;i>=3;i--)
    {
            if(a[i]==1||a[i-1]==1||a[i-2]==1||a[i-3]==1) k++;
            if(a[i]==2||a[i-1]==2||a[i-2]==2||a[i-3]==2) k++;
            if(a[i]==4||a[i-1]==4||a[i-2]==4||a[i-3]==4) k++;
            if(a[i]==8||a[i-1]==8||a[i-2]==8||a[i-3]==4) k++;
            if(k==4) p++;
            k=0;            
    }
    cout<<max<<" "<<p<<endl;
    system("pause");
    return 0;
} 
    

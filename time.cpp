#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,a[101],br1=0,br=0,br2=0,s1=0,s2=0;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
            cin>>a[i];
            long long int p=a[i];            
            long long int k=a[i]*a[i];
            long long int t=k;
            cout<<k<<endl;
            while(a[i]!=0) 
            {
                           br1++;
                           a[i]=a[i]/10;
            }
            while(k!=0)
            {
                       br++;
                       k=k/10;
            }
            for(int i=0;i<=br-1;i++)
            {
                    if(i<=br1-1) s1=s1+(t%10);
                    else s2=s2+(t%10);
                    t=t/10;
            }
            if(s1+s2==p) br2++;
            br1=0;
            br=0;
            s1=0;
            s2=0;
    }
    cout<<br2<<endl;
    system("pause");
    return 0;
}
                               

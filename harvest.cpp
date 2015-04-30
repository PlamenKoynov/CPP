#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n],max=0,s=0;
    for(int i=0;i<=n-1;i++) cin>>a[i];
    for(int i=1;i<n;i++)
    {
            if(i==n-1) 
            {
                     s=s+a[i]+a[i-1]+a[0];
                     if(s>max) max=s;
                     s=0;
                     s=s+a[i]+a[0]+a[1];
                     if(s>max) max=s;
                     s=0;
            }
            else
            {
                s=s+a[i]+a[i-1]+a[i+1];
                if(s>max) max=s;
            }
            s=0;
    }
    cout<<max<<endl;
    return 0;
}
 

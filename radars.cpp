#include<iostream>
using namespace std;
int a[100000];
int main()
{
    int n,p=1;
    cin>>n;
    for(int i=0;i<=n-1;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i=i-2) 
    {
            p=p*(a[i]-a[i-1]);
            cout<<p<<" "<<a[i]-a[i-1]<<endl;
    }
    cout<<p<<endl;
    system("pause");
    return 0;
}
    

#include<iostream>
using namespace std;
int a[51];
int main()
{
    int n,k, br=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
     if(a[k]<=a[i] && a[i]>0) br++;
    cout<<br<<endl;
    system("pause");
    return 0;
}
    

#include<iostream>
using namespace std;
long long a[50000],b[50000];
int main()
{
    long long n,p=2,s=0,k,pr=0,br=0;
    cin>>n;
    for(long long i=2;i<=n/2;i++)
     if(n%i==0) br++;
    if(br==0) cout<<"No"<<endl;
    else
    {
        while(n%p!=0) p++;
        k=n/p;
        while(k>1)
        {
                   pr=pr+p;
                   a[s]=p;
                   s++;
                   if(k%p!=0)
                    while(k%p!=0) p++;
                   k=k/p;
                   if(k==1) 
                   {
                            pr=pr+p;
                            a[s]=p;
                            s++;
                   }
        }
        long long c=n-pr;
        while(c!=0) 
        {
                    cout<<1<<" ";
                    c--;
        } 
        for(int i=0;i<=s-1;i++) 
        {
                cout<<a[i];
                if(i!=s-1) cout<<" ";
                else cout<<endl;
        } 
    } 
    system("pause");
    return 0;
}
    

#include<iostream>
long long n,m;
long long power(long long a, long long k)
{
    long long p=1;
    while(k>0)
    {
              if(k%2==0) 
              {
                         a=a*a;
                         a=a%1000000007;
                         k=k/2;
              }
              else
              {
                         p=p*(a%1000000007);
                         p=p%1000000007;
                         k--;
              }    
    } 
    return p;
}              
using namespace std;
int main()
{
    long long a,s=1,k;
    cin>>n>>m;
    n=n%1000000007;
    for(long long i=2;i<=n;i++) 
    {
            s=s+(power(i,m)%1000000007);
            s=s%1000000007;
    }
    cout<<s<<endl;
    system("pause");
    return 0;
} 
//1000000007

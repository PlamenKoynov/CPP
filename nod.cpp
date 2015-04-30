#include<iostream>
using namespace std;
long long nod(long long a, long long b)
{
    if(a!=b)
    {
            if(a>b) return(nod(a-b,a));
            else return(nod(a,b-a));
    }
    return a;
}
int main()
{
    long long m,n;
    cin>>m>>n;
    if(m%n==0) cout<<0<<endl;
    else
    {
        if(m%2!=0&&n%2==0) cout<<m/nod(m-1,n)<<endl;
        if(m%2==0&&n%2!=0) cout<<n/nod(m-1,n)<<endl;
        if(m%2!=0&&n%2!=0) cout<<nod(m-1,n-1)<<endl;
        if(m%2==0&&n%2==0) cout<<nod(m,n)<<endl;
    }
    system("pause");
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    long long n,k,s=0,p=1,c;
    cin>>n>>k;
    c=k;
    k++;
    while(k>0)
    {
        p=p*k;
        k--;
    }
    s=s+((n*(n+1)*(c*n+1))/p);
    cout<<s%1000000007<<endl;     
    system("pause");
    return 0;
}
    
    

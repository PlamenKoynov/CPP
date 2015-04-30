#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<long long> s;
    long long n;
    cin>>n;
    long long k,a,b;
    cin>>k;
    for(int i=0;i<=k-1;i++)
    {
            cin>>a;
            s.insert(a);
    }
    b=s.size();
    cout<<n-b<<endl;
    system("pause");
    return 0;
}
            
    

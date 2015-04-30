#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    if(n%2!=0) n++;
    if(m%2!=0) m--;
    cout<<(m+n)/2<<endl;
    system("pause");
    return 0;
}

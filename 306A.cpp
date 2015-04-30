#include<iostream>
using namespace std;
int main()
{
    int n, m, ost;
    cin>>n>>m;
    ost = n % m;
    for(int i = 0; i <= m - ost - 1; i++) cout<<n / m<<" ";
    for(int i = m - ost; i <= m - 1; i++) cout<<n / m + 1<<" ";
    cout<<endl;
    system("pause");
    return 0;
}
     

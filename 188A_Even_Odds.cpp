#include<iostream>
using namespace std;
int main()
{
    unsigned long n, k, br = 0, current = 0, p;
    cin>>n>>k;
    if(n % 2 != 0) p = (n / 2) + 1;
     else p = n / 2;
    if(k <= p)
    {
         current = 1 + (k - 1)*2;
         if(current <= n) cout<<current<<endl;
    }
    else
    {
         k = k - p;
         current = 2 + (k - 1)*2;
         cout<<current<<endl;
    }
    system("pause");
    return 0;
}

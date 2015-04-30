#include<iostream> 
using namespace std;
int main()
{
    unsigned long long n, k, p, current = 0;
    cin>>n>>k;
    if(n % 2 != 0) p = (n / 2) + 1;
     else p = n / 2;
    if(k <= p)  current = 1 + (k - 1)* 2;
     else 
     {
          k = k - p;
          current = k * 2;
     }
    cout<<current<<endl;
    system("pause");
    return 0;
}

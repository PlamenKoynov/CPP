#include<iostream>
using namespace std;
long long part[1001];
int main()
{
    long long n, k, l, r, sall, sk, address, br = 0, last, left, sumk = 0, sumr = 0, t = 1;
    cin>>n>>k>>l>>r>>sall>>sk;
    last = sall - sk;
    left = n - k;
    for(int i = 0; i <= k - 1; i++) part[i] = r;
    for(int i = k; i <= n - 1; i++) part[i] = r - 1;
    sumk = k * r;
    sumr = (n - k) * (r - 1);
    while(sumk > sk)
    {
               sumk--;
               part[k - t]--;
               if(part[k - t] == l) t++;
    }
    t = 0;
    while(sumr < last)
    {
               sumr++;
               part[k + t]--;
               if(part[k + t] == l) t++;
    }
    for(int i = 0; i <= n - 1; i++) cout<<part[i]<<" ";
    cout<<endl;
    system("pause");
    return 0;
}
    

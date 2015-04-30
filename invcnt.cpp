#include<iostream>
using namespace std;
long long arr[9];
int main()
{
    long long n, a, sum = 0, i = 0;
    cin>>n;
    for(i = 0; i <= n- 1; i++)
    {
          cin>>a;
          arr[a]++;
          a++;
          for(a; a <= 9; a++) sum = sum + arr[a];
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
    

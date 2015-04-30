#include<iostream>
using namespace std;
int a[101], b[101];   
int main()
{
    int n, count = 0, k, sum1 = 0, sum2 = 0, sum = 0;
    bool flag = 0;
    cin>>n>>k;
    for(int i = 0; i <= n - 1; i++) cin>>a[i];
    for(int i = 0; i <= n - 1; i++) cin>>b[i];
    while(count < n - 1)
    {
               for(int j = 0; j <= n - 1; j++)
               {
                       for(int i = j; i <= n - 1; i++)
                       {
                               sum1 = sum1 + a[i];
                               sum2 = sum2 + b[i];
                               if(sum1 % sum2 == 0 && sum1 / sum2 == k)
                               {
                                      cout<<sum1<<endl;
                                      system("pause");
                                      return 0;
                               }
                               if(i == j) i = i + count;
                       }
                       sum = 0;
                       sum1 = sum2 = 0;
               }
               count++;
    }
    cout<<-1<<endl;                
    system("pause");
    return 0;
}


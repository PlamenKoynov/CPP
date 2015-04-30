#include<iostream>
#include<string>
int coins[101];
using namespace std;
int main()
{
    int n, sumAll = 0, currentSum = 0;
    cin>>n;
    for(int i = 0; i <= n - 1; i++) 
    {
            cin>>coins[i];
            sumAll = sumAll + coins[i];
    }
    for(int i = 0; i <= n - 1; i++)
     for(int j = 0; j <= i; j++)
      if(coins[i] > coins[j]) swap(coins[i], coins[j]);
    for(int i = 0; i <= n - 1; i++)
    {
            
            currentSum = currentSum + coins[i];
            sumAll = sumAll - coins[i];
            if(currentSum > sumAll)
            {
                          cout<<i + 1<<endl;
                          break;
            }
    }
    system("pause");
    return 0;
}
    

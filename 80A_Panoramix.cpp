#include<iostream>
#include<cmath>
using namespace std;
int arr[101];
int main()
{
    int m,n;
    cin>>n>>m;
    if(n == 2 && m == 3) 
    {
         cout<<"YES"<<endl;
         return 0;
    }
    for(int i = n + 1; i <= m; i++)
    {
            int div = sqrt(i) + 1;
            for(int j = 2; j <= div; j++)
            {
                    if(i % j == 0) break;
                    if(i % j != 0 && j == div) 
                    {
                         if(i == m) cout<<"YES"<<endl;
                         else cout<<"NO"<<endl;
                         return 0;
                    }
            }
    }
    cout<<"NO"<<endl;
    system("pause");
    return 0;
}
            

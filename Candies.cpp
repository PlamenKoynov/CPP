#include<iostream>
using namespace std;
int main()
{
    int n, current = 1, last;
    cin>>n;
    last = n * n;
    for(int j = 1; j <= n; j++)
    {
            for(int i = 1; i <= n / 2; i++) 
            {
                    cout<<current<<" "<<last<<" ";
                    current++;
                    last--;
            }
            cout<<endl;
    }
    system("pause");
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n, a, br = 0, sum = 0, k = 0;
    cin>>n;
    for(int i = 0; i <= n - 1; i++)
    {
            cin>>a;
            if(a == 4)
                 br++;
            else 
                 sum += a;
    }
    if(sum < 4)
           k = 1;
    else 
           k = sum % 4;
    cout<<br + sum / 4 + k<<endl;  
    system("pause");
    return 0;
}

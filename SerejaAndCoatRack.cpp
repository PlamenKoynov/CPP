#include<iostream>
using namespace std;
int array[101];
int main()
{
    int n, d, m, sum = 0, temp;
    cin>>n>>d;
    for(int i = 0; i <= n - 1; i++)
    {
            cin>>array[i];
            sum = sum + array[i];
    }
    cin>>m;
    for(int i = 0; i <= n - 1; i++)
     for(int j = i + 1; j <= n - 1; j++)
       if(array[i] > array[j])
       {
                   temp = array[i];
                   array[i] = array[j];
                   array[j] = temp;
       }
    if(m < n)
    {
         sum = 0;
         for(int i = 0; i <= m - 1; i++) sum = sum + array[i];
         cout<<sum<<endl;
    }
    else cout<<sum - (m - n) * d<<endl;
    system("pause");
    return 0;
}
    
                   

#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath> 
using namespace std;
int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int main()
{
    bool flag = 0;
    int n, k, i = 0, counter = 0, br = 0;
    cin>>n>>k;
    do
    {
              for(i = 0; i <= n - 2; i++)
               if(abs(arr[i] - arr[i + 1]) > k) flag = 1;
              if(flag == 0) br++;
              flag = 0;
    }
    while(next_permutation(arr, arr + n));
    cout<<br<<endl;
    system("pause");
    return 0;
}

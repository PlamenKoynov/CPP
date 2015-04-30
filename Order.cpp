#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, k, ind = 0;
    cin>>n;
    long long int arr[n / 2 + 1];
    for(int i = 1; i <= n; i++) arr[i] = 0;
    for(int i = 1; i <= n; i++)
    {
            cin>>k;
            arr[k]++;
            if(arr[k] > (n / 2)) ind = k;
    }
    cout<<k<<endl;
    system("pause");
    return 0;
}

#include<iostream>
using namespace std;
long long arr[101];
int main()
{
    long long m,n, a, b, c, sum = 0;
    cin>>n>>m;
    for(int i = 0; i <= m - 1; i++)
    {
            cin>>a>>b>>c;
            arr[a] = arr[a] - c;
            arr[b] = arr[b] + c;
    }
    for(int i = 1; i <= n; i++)
     if(arr[i] > 0) sum = sum + arr[i];
    cout<<sum<<endl;
    system("pause");
    return 0;
}

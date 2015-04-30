#include<iostream>
#include<iomanip>
using namespace std;
int arr[10001], ansArr[10001];
int main()
{
    int a;
    double n, m;
    cin>>n>>m;
    for(int i = 1; i <= m; i++)
    {
            cin>>a;
            arr[a]++;
    }
    for(int i = 1; i <= n; i++) cout<<fixed<<setprecision(2)<<(arr[i] / m) * 100<<"%"<<endl;
    system("pause");
    return 0;
}

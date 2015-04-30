#include<iostream>
using namespace std;
int arr[101];
int main()
{
    int n, m, min = 1001;
    cin>>n>>m;
    for(int i = 1; i <= m; i++) cin>>arr[i];
    for(int i = 1; i <= m; i++)
     for(int j = i + 1; j <= m; j++)
      if(arr[i] > arr[j]) swap(arr[i], arr[j]);
    for(int i = 1; i <= m - n + 1; i++)
     if(arr[i + n - 1] - arr[i] < min) min = arr[i + n - 1] - arr[i];
    cout<<min<<endl;
    system("pause");
    return 0;
}
    

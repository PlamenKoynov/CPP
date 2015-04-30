#include<iostream>
using namespace std;
int arr[1001];
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) cin>>arr[i];
    int current = 1, br = 1;
    while(current <= n)
    {
                  while(arr[current] == arr[current+1]) 
                  {
                                     br++;
                                     current++;
                  }
                  cout<<br<<" "<<arr[current]<<" ";
                  br = 1;
                  current++;
    }
    cout<<endl;
    system("pause");
    return 0;
}

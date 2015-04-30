#include<iostream>
#include<string>
using namespace std;
string arr[101];
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) getline(cin,arr[i]);
    for(int i = 1; i <= n; i++)
     for(int j = 1; j <= n - 1; j++)
      if(arr[i] > arr[j]) swap(arr[i], arr[j]);
    for(int i = 2; i <= n; i++)
     if(arr[i] == arr[i - 1]) 
     {
               cout<<arr[i]<<endl;
               while(arr[i] == arr[i - 1]) i++;
               i--;
     }
    system("pause");
    return 0;
}

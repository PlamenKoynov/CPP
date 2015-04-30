#include<iostream>
#include<string>
using namespace std;
string arr[50], oldArr[50];
int main()
{
    for(int i = 0; i <= 49; i++) 
    {
            getline(cin,arr[i]);
            oldArr[i] = arr[i];
    }
    for(int i = 0; i <= 49; i++)
     for(int j = 0; j <= 49; j++)
      if(arr[i] < arr[j]) swap(arr[i], arr[j]);
    cout<<"--------------------------------------------"<<endl;
    for(int i = 0; i <= 49; i++) 
     if(arr[i] != oldArr[i]) cout<<arr[i]<<endl;
    cout<<endl;
    system("pause");
    return 0;
}
    

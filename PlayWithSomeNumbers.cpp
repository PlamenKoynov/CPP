#include<iostream>
using namespace std;
int arr[1010];
void funct(long long a)
{
     if(a > 1000000000) return;
     arr[++arr[0]] = a;
     funct(a * 10 + 4);
     funct(a * 10 + 7);
     
}
int main()
{
    funct(4);
    funct(7);
    for(int i = 1; i <= arr[0]; i++)
     cout<<arr[i]<<endl;
    system("pause");
    return 0;
}



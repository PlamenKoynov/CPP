#include<iostream>
using namespace std;
int numbers[101];
int main()
{
    int n, current;
    cin>>n;
    for(int i = 0; i <= n - 1; i++)
    {
            cin>>current;
            numbers[current] = i + 1;
    }
    for(int i = 1; i <= n; i++) cout<<numbers[i]<<" ";
    cout<<endl;
    system("pause");
    return 0;
}
   

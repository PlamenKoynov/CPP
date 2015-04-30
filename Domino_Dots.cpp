#include<iostream>
using namespace std;
int main()
{
    unsigned int num, br=0;
    cin>>num;
    for(int i=0; i<=num; i++)
     for(int j=i; j<=num; j++)
     {
             cout<<i<<" "<<j;
             br = br + i + j;
             cout<<" "<<br<<endl;
     }
    cout<<br<<endl;
    system("pause");
    return 0;
}      

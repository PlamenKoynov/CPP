#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n,a=1;
    cin>>n;
    string b;
    while(n!=0)
    {
               a=a*n;
               n--;
    }
    cout<<a<<" "<<b<<endl;
    system("pause");
    return 0;
}
               

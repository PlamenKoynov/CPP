#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a % 2 == 0) a++;
    if(b % 2 == 0) b--;
    cout<<(b - a + 2) / 2<<endl;
    system("pause");
    return 0;
}

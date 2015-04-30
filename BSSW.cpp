#include<iostream>
using namespace std;
int main()
{
    int n, k, expect = 0, real = 0, a, b;
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
    {
            cin>>a>>b;
            expect = expect + a - 2;
            real = real + b;
    }
    expect = expect + k - 2;
    if(real > expect) cout<<"Big Bang!"<<endl;
    else cout<<expect - real<<endl;
    system("pause");
    return 0;
}

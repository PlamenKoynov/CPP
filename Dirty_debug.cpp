#include<iostream>
using namespace std;
int main()
{
    int t1, t2, a, sum = 0;
    cin>>t1>>t2;
    for(int i = 1; i <= 10; i++)
    {
            cin>>a;
            sum = sum + a * 20;
    }
    if(t2 - sum >= t1) cout<<"No chance."<<endl;
    else cout<<"Dirty debug :("<<endl;
    system("pause");
    return 0;
}

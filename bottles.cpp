#include<iostream>
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    while(m>n) 
    {
                n++;
                m--;
    }
    cout<<m<<endl;
    system("pause");
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    bool flag = 0;
    int casa = 0, n, current;
    cin>>n;
    for(int i = 0; i <= n - 1; i++)
    {
            cin>>current;
            if(current > 25 && current < casa) flag = 1;
            else 
             if(current < casa && current > 25) casa = casa - current + 25;
             else casa = casa + 25;
    }
    if(flag == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    system("pause");
    return 0;
}

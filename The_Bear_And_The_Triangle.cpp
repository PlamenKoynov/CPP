#include<iostream>
using namespace std;
int main()
{
    long long int x, y;
    cin>>x>>y;
    if(x < 0)
    {
         if(y < 0) cout<<x + y<<" 0 0 "<<x + y<<endl;
         else cout<<x + (-y)<<" 0 0 "<<-x + y<<endl;
    }
    else
    {
        if(y < 0) cout<<"0 "<<-x + y<<" "<<x - y<<" 0"<<endl;
        else cout<<"0 "<<x + y<<" "<<x + y<<" 0"<<endl;
    }
    system("pause");
    return 0;
}
        

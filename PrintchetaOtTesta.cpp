#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    y = 5;
    if(z =(y++ > 5)) x = 5;
    else x = 3;
    cout<<x<<" "<<y<<" "<<z<<endl;
    system("pause");
    return 0;
}

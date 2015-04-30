#include<iostream>
using namespace std;
int main()
{
    unsigned long long r,g,b, min, counter = 0, max = 0;
    cin>>r>>g>>b;
    //cout<<r / 3<<" "<<g / 3<<" "<<b / 3<<endl;
    counter = counter + (r / 3) + (g / 3) + (b / 3);
    min = r % 3;
    if(g % 3 < min) min = g % 3;
    if(b % 3 < min) min = b % 3;
    counter = counter + min;
    if(counter > max) max = counter;
    counter = 0;
    min = r;
    if(g < min) min = g;
    if(b < min) min = b;
    counter = counter + min;
    r = r - min;
    g = g - min;
    b = b - min;
    counter = counter + (r / 3) + (g / 3) + (b / 3);
    if(counter > max) max = counter;
    cout<<max<<endl;
    system("pause");
    return 0;
}

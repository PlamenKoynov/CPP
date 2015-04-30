#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int i=1;
    while(i<=1000000) 
    {
                      Beep(1000, 10000000);
                      i++;
    }
    system("pause");
    return 0;
}

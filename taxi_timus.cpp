#include<iostream>
using namespace std;
int main()
{
    bool exit = false;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a > c)
    {
         cout<<a<<endl;
         exit = true;
    }
    while(exit == false)
    {
               if(a + b > c)
               {
                    cout<<c<<endl;
                    exit = true;
               }
               a = a + b;
               if(c - d < a && exit == false)
               {
                    cout<<a<<endl;
                    exit = true;
               }
               c = c - d;
    }
    system("pause");
    return 0;
}

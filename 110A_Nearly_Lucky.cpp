#include<iostream>
using namespace std;
int main()
{
    unsigned long long n, counter = 0;
    bool exit = false;
    cin>>n;
    while(n != 0)
    {
            if(n % 10 == 4 || n % 10 == 7) counter++;
            n = n / 10;
    }
    if(counter == 0)
    {
                cout<<"NO"<<endl;
                return 0;
    }
    else
    {
        while(counter != 0 && exit == false)
        {
                   if(counter % 10 != 4 && counter % 10 != 7) 
                   {
                              cout<<"NO"<<endl;
                              exit = true;
                   }
                   counter = counter / 10;
        }
        if(exit == false) cout<<"YES"<<endl;
    }
    system("pause");
    return 0;
}
   

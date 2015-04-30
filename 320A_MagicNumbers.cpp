#include<iostream>
using namespace std;
int main()
{
    long long n, current, next, nextPlusPlus;
    bool flag = 0;
    cin>>n;
    while(n > 0)
    {
            current = n % 10;
            if(current == 4)
            {
                       next = (n / 10) % 10;
                       if(next == 4)
                       {
                               nextPlusPlus = (n / 100) % 10;
                               if(nextPlusPlus != 1)
                               {
                                               flag = 1;
                                               cout<<"NO"<<endl;
                                               return 0;
                               }
                               else n = n / 1000;
                       }
                       else if(next != 1)
                       {
                            flag = 1;
                            cout<<"NO"<<endl;
                            return 0;
                       }
                        else if(next == 1) n = n / 100;
            }
            if(current != 1 && current != 4)
            {
                       flag = 1;
                       cout<<"NO"<<endl;
                       return 0;
            }
            if(current == 1) n = n / 10;
    }
    if(flag == 0) cout<<"YES"<<endl;
    system("pause");
    return 0;
}
            

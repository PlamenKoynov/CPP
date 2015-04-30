#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cin>>n;
    while(true)
    {
               n++;
               a = n % 10;
               b = (n / 10) % 10;
               c = (n / 100) % 10;
               d = n / 1000;
               if(a != b && a != c && a != d && b != c && b != d && c != d)
               {
                    cout<<n<<endl;
                    return 0;
               }
    }
    system("pause");
    return 0;
}
   

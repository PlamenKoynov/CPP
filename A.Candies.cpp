#include<iostream>
using namespace std;
int friends[101];
int main()
{
    int n, m;
    cin>>n>>m;
    bool exit = false;
    if(n % m == 0)
     for(int i = 0; i <= m - 1; i++) cout<<n / m<<" ";
    else
    {
        while(exit == false)
        {
                   for(int i = m - 1; i >= 0; i--)
                   {
                           friends[i]++;
                           n--;
                           if(n == 0) 
                           {
                                exit = true;
                                break;
                           }
                   }
        }
        for(int i = 0; i <= m - 1; i++) cout<<friends[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}

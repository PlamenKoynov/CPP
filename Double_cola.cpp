#include<iostream>
using namespace std;
string names[6] = {"", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int main()
{
    int n, br = 1, count = 1;
    cin>>n;
    while(br <= n)
    {
             for(int i = 1; i <= 5; i++)
             {
                     int p = count;
                     while(p > 0)
                     {
                                 if(br == n) cout<<names[i]<<endl;
                                 br++;
                                 p--;
                     }
             }
             count = count * 2;
    }                
    system("pause");
    return 0;
}  
    

#include<iostream>
using namespace std;
int GreatestDivisor(int x, int y)
{
    int max = 0;
    for(int i = y; i>=1; i--)
     if(y%i==0 && x%i==0)
     {
               max = i;
               break;
     }
    if(max != 0) return max;
     else return -1;
    
}
int main()
{
    int a, b, n, divisor;
    bool flag = false, winner = false;
    cin>>a>>b>>n;
    while(flag == false)
    {
               divisor = GreatestDivisor(a,n);
               if(divisor == -1) 
               {
                          winner = true;
                          flag = true;
               }
               else n = n - divisor;
               divisor = GreatestDivisor(b,n);
               if(divisor == -1) flag = true;
               else n = n - divisor;
    }
    if(winner == false) cout<<"0"<<endl;
     else cout<<"1"<<endl;
    system("pause");
    return 0;
}
               
    

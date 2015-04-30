#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,m,y;
    cin>>n>>m>>y;
    long long int limit = m - 1, x, br = 0;
    for(long long int i = 0; i <= limit; i++)
    {
             x = i;
             long long int current = n - 1;
             while(current > 0)
             {
                           x = (x * i) % m;
                           current--;
             }
             if(x % m == y) 
             {
                    cout<<i<<" ";
                    br++;
             }
    }
    if(br == 0) cout<<-1<<endl;
    else cout<<endl;
    system("pause");
    return 0;
}

#include<iostream>
using namespace std;
int Even[101], Odds[101];
int main()
{
    int n, a, current1 = 0, current2 = 0;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
            cin>>a;
            if(a % 2 == 0) 
            {
                 Even[current1] = i;
                 current1++;
            }
            else 
            {
                 Odds[current2] = i;
                 current2++;
            }
    }
    if(current1 == 1) cout<<Even[0]<<endl;
    else if(current2 == 1)cout<<Odds[0]<<endl;
    system("pause");
    return 0;
}

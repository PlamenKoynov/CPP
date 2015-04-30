#include<iostream>
using namespace std;
int dishes[2];
int main()
{
    int n, bowls, plates, a, br = 0;
    cin>>n>>bowls>>plates;
    for(int i = 0; i <= n - 1; i++)
    {
            cin>>a;
            dishes[a]++;
    }
    if(dishes[1] >= bowls) 
    {
                 br = br + dishes[1] - bowls;
                 bowls = 0;
    }
     else bowls = bowls - dishes[1];
    if(dishes[2] >= bowls + plates) br = br + dishes[2] - bowls - plates;
    cout<<br<<endl;
    system("pause");
    return 0;
}
            

#include<iostream>
using namespace std;
int prev[1][2];
int main()
{
    int n, h, m, br = 1, max = 0;
    cin>>n;
    cin>>h>>m;
    prev[1][1] = h;
    prev[1][2] = m;
    for(int i = 1; i <= n - 1; i++)
    {
            cin>>h>>m;
            if(h == prev[1][1] && m == prev[1][2]) br++;
            else
            {
                if(br > max) max = br;
                br = 1;
            }
            prev[1][1] = h;
            prev[1][2] = m;
    }
    if(br > max) max = br;
    cout<<max<<endl;
    system("pause");
    return 0;
}

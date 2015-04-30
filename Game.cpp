#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0, current = 1;
    cin>>n;
    while(current <= n)
    {
                  sum = sum + current;
                  current++;
                  sum = sum - current;
                  current++;
    }
    if(sum % 2 == 0) cout<<"black"<<endl;
    else cout<<"grimy"<<endl;
    system("pause");
    return 0;
}

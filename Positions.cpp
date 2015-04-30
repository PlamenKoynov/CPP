#include<iostream>
using namespace std;
int main()
{
    int n, a, b, br = 0;
    cin>>n>>a>>b;
    int i = n - b;
    while(i <= a) i++;
    for(i; i<=n; i++) br++;
    cout<<br<<endl;
    system("pause");
    return 0;
}
        

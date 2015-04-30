/*
(n - 2) * 180 / n = 60
180 * n - 360 = 60 * n
120 * n = 360 
n = 3;


180 * n - x * n = 360
n = 360 / (180 - x)
*/

#include<iostream>
using namespace std;
int array[200];
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i <= n - 1; i++) cin>>array[i];
    for(int i = 0; i <= n - 1; i++)
     if(360 %(180 - array[i]) == 0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    system("pause");
    return 0;
} 
            

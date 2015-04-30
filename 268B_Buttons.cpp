#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0, br = 1;
    cin>>n;
    if(n > 1)
    {
         while(n > 2)
         {
                 sum = sum + n + n - 1;
                 n--;
         } 
    }
    cout<<sum + 2<<endl;
    system("pause");
    return 0;
}
    
/*
4 3 2 1
1 1 1 1
1 1 1
1 1
1 1
1
1
1
*/

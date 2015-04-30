#include<iostream>
#include<cmath>
using namespace std;
int matr[5][5];
int main()
{
    int x, y;
    for(int i = 1; i <= 5; i++)
     for(int j = 1; j <= 5; j++)
     {
             cin>>matr[i][j];
             if(matr[i][j] == 1)
             {
                           x = i;
                           y = j;
             }
     }
    cout<<abs(x - 3) + abs(y - 3)<<endl;
    system("pause");
    return 0;
}
    

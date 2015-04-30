#include<iostream>
using namespace std;
int arr[101][101];
int main()
{
    int n, current = 1, posX, posY;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
            posX = n - i + 1;
            posY = 1;
            arr[posY][posX] = current;
            current++;
            while(posX < n && posY < n)
            {
                       posY++;
                       posX++;
                       arr[posY][posX] = current;
                       current++;
            }
    }        
    for(int i = 2; i<= n; i++)
    {
            posX = 1;
            posY = i;
            while(posX <= n && posY <= n)
            {
                       arr[posY][posX] = current;
                       current++;
                       posY++;
                       posX++;
            }
    }             
    for(int i = 1; i <= n; i++)
    {
                    for(int j = 1; j <= n; j++) cout<<arr[i][j]<<" ";
                    cout<<endl;
    }
    system("pause");
    return 0;
}                 

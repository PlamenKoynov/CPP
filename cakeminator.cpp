#include<iostream>
using namespace std;
int main()
{
    char mat[10][10];
    int row, col, counter = 0, flag = 0;
    cin>>row>>col;
    for(int i = 0; i <= row - 1; i++)
            for(int j = 0; j <= col - 1; j++)
                    cin>>mat[i][j];
    for(int i = 0; i <= row - 1; i++)
    {
            for(int j = 0; j <= col - 1; j++)
                    if(mat[i][j] == 'S')
                                 flag = 1;
            if(flag == 0)
            {
                    for(int j = 0; j <= col - 1; j++)
                            mat[i][j] = '0';
                    counter += row;
            }
            flag = 0;
    }
    for(int i = 0; i <= col - 1; i++)
    {
            for(int j = 0; j <= row - 1; j++)
                    if(mat[i][j] == 'S')
                                 flag = 1;
            if(flag == 0)
            {
                    for(int j = 0; j <= row - 1; j++)
                            if(mat[i][j] != '1') 
                                         counter++;
            }
            flag = 0;
    }
    cout<<counter<<endl;
    system("pause");
    return 0;
}
    
                                 

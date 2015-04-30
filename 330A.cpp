#include<iostream>
using namespace std;
char matrix[11][11];
int main()
{
    int r, c, count = 0, total = 0;
    cin>>r>>c;
    for(int i = 0; i <= r - 1; i++)
    {
            for(int j = 0; j <= c - 1; j++)
            {
                    cin>>matrix[i][j];
                    if(matrix[i][j] == '.') count++;
                    if(count == c && j == c - 1) total = total + count;
            }
            count = 0;
    }   
    count = 0;
    for(int i = 0; i <= c - 1; i++)
    {
            for(int j = 0; j <= r - 1; j++)
            {
                    if(matrix[j][i] == '.') count++;
                    if(count == r && j == r - 1) total = total + count;
            }
            count = 0;
    }          
    cout<<total<<endl;
    system("pause");
    return 0;
}

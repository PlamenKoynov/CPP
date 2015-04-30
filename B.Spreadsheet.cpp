#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    string str[100001];
    int n, numCol = 0, numRow = 0, arrSize, k = 1, last, current = 0, ost = 0;
    long long countCol = 1;
    bool flag = 0;
    cin>>n;
    for(int i = 0; i <= n - 1; i++) cin>>str[i];
    for(int i = 0; i <= n - 1; i++)
    {
            string s = str[i];
            arrSize = s.length() - 1;
            if(s[0] == 'R')
            {
                    while(s[arrSize] != 'C')
                    {
                                     numCol = numCol + (s[arrSize] - '0') * k;
                                     countCol = countCol * 26;
                                     k = k * 10;
                                     arrSize--;
                    }
                    arrSize--;
                    k = 1;
                    while(s[arrSize] != 'R')
                    {
                                     numRow = numRow + (s[arrSize] - '0') * k;
                                     k = k * 10;
                                     arrSize--;
                    }
                    countCol = countCol / 26;
                    if(numCol > 26)
                    {
                                     while(numCol % 26 != 0)
                                     {
                                                  numCol--;
                                                  last++;
                                     }
                                     while(countCol > numCol) countCol /= 26;
                                     while(countCol >= 26)
                                     {
                                                if(numCol % countCol > 26) 
                                                {
                                                          while(numCol % countCol > 26)
                                                          {
                                                              numCol = numCol - (numCol / 26);
                                                              countCol /= 26;
                                                              current ++;
                                                          }    
                                                          cout<<char(current + 64);
                                                }
                                                cout<<numCol<<" "<<countCol<<endl;
                                                if(numCol % countCol != 0) cout<<char(numCol % countCol + 64);
                                                else cout<<char(numCol / countCol + 64);
                                                numCol /= countCol;
                                                countCol /= 26;
                                     }
                                     cout<<char(last + 64)<<numRow<<endl;
                    }
                    else cout<<char(numCol + 64)<<numRow<<endl;
               
                   
            }
            else
            {
                    while(s[arrSize] >= '0' && s[arrSize] <= '9')
                    {
                                     numRow = numRow + (s[arrSize] - '0') * k;
                                     k = k * 10;
                                     arrSize--;
                    }
                    k = 1;
                    while(arrSize >= 0)
                    {
                                     numCol = numCol + (s[arrSize] - 'A' + 1) * k;
                                     k = k * 26;
                                     arrSize--;
                    }
                    cout<<"R"<<numRow<<"C"<<numCol<<endl;
            }
            numRow = numCol = current = last = 0;
            k = countCol = 1;
    }
    system("pause");
    return 0;
}
                          
                     
                             
            
            
    

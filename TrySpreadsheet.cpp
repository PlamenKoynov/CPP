#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int del(int a)
{
    while(a > 26) a /= 26;
    return a;
}
int main()
{
    string str;
    int n, numCol = 0, numRow = 0, arrSize, k = 1, temp = 0;
    long long countCol = 1, newArr[100001];
    bool flag = 0;
    cin>>n;
    cin.get();
    for(int i = 0; i <= n - 1; i++)
    {
            getline(cin, str);
            arrSize = str.length() - 1;
            if(str[0] == 'R')
            {
                    while(str[arrSize] != 'C')
                    {
                                     numCol = numCol + (str[arrSize] - '0') * k;
                                     k = k * 10;
                                     arrSize--;
                    }
                    arrSize--;
                    k = 1;
                    while(str[arrSize] != 'R')
                    {
                                     numRow = numRow + (str[arrSize] - '0') * k;
                                     k = k * 10;
                                     arrSize--;
                    }
                    if(numCol > 26)
                    {
                              temp = numCol;
                              while(temp > 26)
                              {
                                         cout<<char(del(temp) + 64);
                                         temp = numCol / 26;
                                         if(temp - 26 < 26) 
                                         {
                                                 cout<<char(temp - 26 + 64);
                                                 temp = temp - 26;
                                         }
                                         
                              }
                    }
                    cout<<char(26 - temp + 64)<<numRow<<endl;            
                    
            }
            else
            {
                    while(str[arrSize] >= '0' && str[arrSize] <= '9')
                    {
                                     numRow = numRow + (str[arrSize] - '0') * k;
                                     k = k * 10;
                                     arrSize--;
                    }
                    k = 1;
                    while(arrSize >= 0)
                    {
                                     numCol = numCol + (str[arrSize] - 'A' + 1) * k;
                                     k = k * 26;
                                     arrSize--;
                    }
                    cout<<"R"<<numRow<<"C"<<numCol<<endl;
            }
            numRow = numCol = 0;
            k = 1;
    }
    system("pause");
    return 0;
}

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int del, num;
    char a;
    cin>>a;
    del = int(a) - 48;
    while(a != '\n') 
    {
            a = getchar();
            if(a != '\n')
            {
                 del = (del * 10) + int(a) - 48;
                 del = del % 7;
            }
    }
    cout<<del % 7<<endl;
    system("pause");
    return 0;
}
    
     

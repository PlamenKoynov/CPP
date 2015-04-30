#include<iostream>
#include<string>
using namespace std;
string name[1001];
int score[1001];
int main()
{
    string a;
    int n, b, max, address, p = 0;
    for(int i = 0; i <= n - 1; i++)
    {
            cin.ignore();
            cin>>a;
            cin.ignore();
            cin>>b;
            if(i == 0) 
            {
                 max = b;
                 address = i;
            }
            for(int j = 0; j <= p; j++)
             if(a == name[j])
             {
                  score[j] = score[j] + b;
                  if(score[j] > max)
                  {
                              max = score[j];
                              address = j;
                  }
             }
             else 
             {
                  name[p] = a;
                  score[p++] = b;
                  if(score[p - 1] > max)
                  {
                              max = score[p];
                              address = p;
                  }
             }
    }
    cout<<name[address]<<" "<<score[address]<<endl;
    system("pause");
    return 0;
} 

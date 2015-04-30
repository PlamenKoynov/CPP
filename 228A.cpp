#include<iostream>
#include<string>
int shoes[4];
using namespace std;
int main()
{
    int n = 4, counter = 0;
    for(int i = 0; i <= n - 1; i++) cin>>shoes[i];
    for(int i = 0; i <= n - 1; i++)
     for(int j = 0; j <= i; j++)
      if(shoes[i] > shoes[j]) swap(shoes[i], shoes[j]);
    for(int i = 0; i <= n - 1; i++)
     for(int j = i + 1; j <= n - 1; j++)
      if(shoes[j] != 0 && shoes[j] == shoes[i])
      {
                  shoes[j] = 0;
                  counter++;
      }
     cout<<counter<<endl;
    system("pause");
    return 0;
}
   

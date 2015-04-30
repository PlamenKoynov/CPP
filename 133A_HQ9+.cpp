#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    cin>>line;
    int size = line.length() - 1, current = 0, ascii;
    bool flag = false;
    while(current <= size && flag == false)
    {
                  ascii = int(line[current]);
                  if(ascii == 57 || ascii == 72 || ascii == 81) 
                  {
                           flag = true;
                           cout<<"YES"<<endl;
                           return 0;
                  }
                  current++;
    }
    if(flag == false) cout<<"NO"<<endl;
    system("pause");
    return 0;
}

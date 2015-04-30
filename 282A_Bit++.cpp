#include<iostream>
#include<string>
using namespace std;
int main()
{
    int numLines, current = 0, br = 0;
    cin>>numLines;
    string line;
    for(int i=0; i<=numLines - 1; i++)
    {
            cin>>line;
            bool flag = false;
            while(flag == false && current<=2)
            {
                       if(line[current] == '+')
                       {
                              br++;
                              flag = true;
                       }
                       else if(line[current] == '-')
                       {
                              br--;
                              flag = true;
                       }
                       current++;
            }
            current = 0;
    }
    cout<<br<<endl;
    system("pause");
    return 0;
}

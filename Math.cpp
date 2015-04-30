#include<iostream>
#include<string>
using namespace std;
int passed[3];
int main()
{
    string line;
    getline(cin, line);
    int size = line.length() - 1;
    for(int i = 0; i <= size; i++)
     if(line[i] == '+') passed[0]++;
      else passed[int(line[i]) - 48]++;
    for(int i = 1; i <= 3; i++)
    {
            while(passed[i] > 0)
            {
                            cout<<i;
                            if(passed[0] > 0) 
                            {
                                         cout<<"+";
                                         passed[0]--;
                            }
                            passed[i]--;
            }
    }
    cout<<endl;
    system("pause");
    return 0;
}

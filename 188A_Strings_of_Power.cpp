#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, current;
    cin>>str;
    int size = str.length() - 1, countHeavy = 0, countAll = 0;
    for(int i = 0; i <= size; i++)
    {
            current = str.substr(i,5);
            if(current == "heavy") countHeavy++;
            if(current == "metal") countAll = countAll + countHeavy;
    }
    cout<<countAll<<endl;
    system("pause");
    return 0;
}

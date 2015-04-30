#include<iostream>
#include<string>
using namespace std;
bool letters[26];
int main()
{
    string nick;
    int counter = 0;
    cin>>nick;
    int size = nick.length() - 1;
    for(int i = 0; i <= size; i++)
     if(letters[int(nick[i]) - 96] == 0)
     {
                             letters[int(nick[i]) - 96] = 1;
                             counter++;
     }
    if(counter % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
     else cout<<"IGNORE HIM!"<<endl;          
    system("pause");
    return 0;
}
   

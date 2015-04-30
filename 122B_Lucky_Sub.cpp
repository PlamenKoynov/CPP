#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s; 
    cin>>s;
    long long size = s.length() - 1, brFours = 0, brSevens = 0;
    for(long long i = 0; i <= size; i++)
     if(s[i] == '4') brFours++;
      else if(s[i] == '7') brSevens++;
    if(brFours == 0 && brSevens == 0) cout<<-1<<endl;
    else if(brFours >= brSevens) cout<<4<<endl;
     else cout<<7<<endl;
    system("pause");
    return 0;
}

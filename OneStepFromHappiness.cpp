#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int first, sec, prev, next;
    first = (int(s[0]) - '0') + int(s[1] - '0') + int(s[2]) - '0';
    sec = (int(s[3]) - '0') * 100 + int(s[4] - '0') * 10 + int(s[5]) - '0';
    prev = sec - 1;
    next = sec + 1;
    if(prev / 100 + prev / 10 % 10 + prev % 10 == first || next / 100 + next / 10 % 10 + next % 10 == first ) cout<<"Yes"<<endl;
    else cout<<"No"<<endl; 
    system("pause");
    return 0;
}
    
     

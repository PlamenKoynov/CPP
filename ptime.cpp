#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int p,t;
    p=int(s[0])+int(s[1])-97;
    t=int(s[3])+int(s[4])-97;
    if(p<t)
    {
           p=p+1;
           t=(p%10)*10+p/10;
    }
    else 
     if(p>t) t=(p%10)*10+p/10;
    else 
     if(p==t) cout<<p+1<<":"<<t+10<<endl;
    cout<<p<<":"<<t<<endl;
    system("pause");
    return 0;
} 

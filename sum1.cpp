#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    set<string> mn, mn1;
    set<string>::iterator j,it;
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    mn.insert(a);
    cin.ignore();
    for(int i=0;i<=n-2;i++)
    {
            cin>>b;
            for(j=mn.begin();j!=mn.end();j++)
             if(b==*j) mn1.insert(b);
            mn.insert(b);
            cin.ignore();
    }
    for(j=mn1.begin();j!=mn1.end();j++) cout<<*j<<endl;
    system("pause");
    return 0;
}
     
    

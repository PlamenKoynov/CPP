#include<iostream>
#include<set>
using namespace std;
int main()
{
    long long p=1;
    int a,b;
    set<int> s;
    set<int>::iterator i;
    for(int j=0;j<=5;j++)
    {
            cin>>a>>b;
            s.insert(a);
            s.insert(b);
    }
    if(s.size()%2==0&&s.size()!=2) cout<<0<<endl;
    else
    {
        for(i=s.begin();i!=s.end();i++) p=p*(*i); 
        cout<<p<<endl;
    }
    system("pause");
    return 0;
}
     

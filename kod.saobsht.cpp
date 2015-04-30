#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<char> sp;
    list<char>::iterator i,j;
    string a;
    int s;
    getline(cin,a);
    s=a.size();
    for(int j=0;j<=s-1;j++)
    {
            sp.push_back(a[j]);
            if(a[j]=='p')
            {
                           if(a[j-1]=='a'||a[j-1]=='e'||a[j-1]=='o'||a[j-1]=='u'||a[j-1]=='i') 
                           {
                               sp.pop_back();
                               sp.pop_back();
                           }
            }
    }
    sp.pop_back();
    for(i=sp.begin();i!=sp.end();i++) cout<<*i;
    cout<<endl;
    system("pause");
    return 0;
}

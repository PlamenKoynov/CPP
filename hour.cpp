#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    float s,s1,s2;
    s1=10*(int(a[0])-48)+int(a[1])-48;
    s2=10*(int(a[3])-48)+int(a[4])-48;
    s1=s1*5;
    cout<<s1<<" "<<s2<<endl;
    if(s1>s2) s=s1-s2;
    else s=s2-s1;
    cout<<s<<endl;
    s=s*6;
    cout<<fixed<<setprecision(3)<<s<<endl;
    system("pause");
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    int size = s1.length() - 1;
    for(int i = 0; i <= size; i++)
     if(s1[i] == s2[i] == 1) cout<<0;
     else cout<<1;
    cout<<endl;
    system("pause");
    return 0;
}
   

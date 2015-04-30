#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, t;
    cin>>s>>t;
    int lengthS = s.length() - 1, lengthT = t.length() - 1;
    if(lengthS != lengthT) cout<<"NO"<<endl;
    else
    {
        for(int i = 0; i <= lengthS; i++)
         if(s[i] != t[lengthS - i])
         {
                 cout<<"NO"<<endl;
                 return 0;
         }
        cout<<"YES"<<endl;
    }
    system("pause");
    return 0;
}
        

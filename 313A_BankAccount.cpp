#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int length = s.length() - 1, maxDig = 0, pos = 0, count = 0;
    if(s[0] == '-')
    {
            for(int i = 1; i <= length; i++)
             if(s[i] - '0' >= maxDig) 
             {
                     maxDig = s[i] - '0';
                     pos = i;
             }
            if(maxDig == 1 && pos == 1)
            {
                      if(length == 2) cout<<0<<endl;
                       else 
                       {
                            for(int i = 0; i <= length - 1; i++) cout<<s[i];
                            cout<<endl;
                       }
            }
            else 
            {
                 for(int i = 0; i <= length; i++)
                  if(i != pos) cout<<s[i];
                 cout<<endl;
            }
    }
    else cout<<s<<endl;
    system("pause");
    return 0;
}

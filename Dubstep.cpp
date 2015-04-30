#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, t;
    getline(cin, s);
    int n = s.length() - 1;
    for(int i = 0; i <= n; i++)
    {
            t = s.substr(i, 3);
            if(t == "WUB") 
            {
                 s[i] = s[i + 1] = s[i + 2] = -1;
                 i = i + 2;
            }
    }
    bool flag = false;
    for(int i = 0; i <= n; i++)
     if(s[i] == -1)
     {
             if(flag == true)
             {
                     cout<<" ";
                     flag = false;
             }
     }
     else 
     {
          cout<<s[i];
          if(s[i + 1] == -1) flag = true;
     }
    cout<<endl;
    system("pause");
    return 0;
}
          
            

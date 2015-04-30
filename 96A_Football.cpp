#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag = false;
    char current; 
    int length = s.length() - 1, br = 1;
    for(int i=0; i<=length; i++)
    {
            current = s[i];
            int next = i + 1;
            if(next + 5 <= length)
            {
                    for(next; next<= next + 5; next++)
                     if(s[next] == current && br < 7) br++;
                     else break;
                    if(br == 7)
                    {
                          flag = true;
                          break;
                    }         
                    else br = 1;
            }
            else break;
    }
    if(flag == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    system("pause");
    return 0;
}
            

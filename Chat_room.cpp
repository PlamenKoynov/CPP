#include<iostream>
#include<string>
using namespace std;
char letters[6] = {' ', 'h', 'e', 'l', 'l', 'o'};
int main()
{
    string s;
    cin>>s;
    int n = s.length() - 1, current = 1, br = 1, i;
    for(i = 0; i <= n; i++)
     if(s[i] == letters[current]) 
     {
             current++;
             if(current == 6) 
             {
                        cout<<"YES"<<endl;
                        return 0;
             }
     }
    cout<<"NO"<<endl;
    system("pause");
    return 0;
}  
    

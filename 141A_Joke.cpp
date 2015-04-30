#include<iostream>
#include<string>
using namespace std;
int names[26], letters[26];
int main()
{
    string s;
    for(int i = 1; i <= 2; i++)
    {
            cin>>s;
            int size = s.length() - 1;
            for(int j = 0; j <= size; j++)
            names[int(s[j]) - 64]++;
    }
    cin>>s;
    int length = s.length() - 1;
    for(int i = 0; i <= length; i++)
    letters[int(s[i]) - 64]++;
    for(int i = 1; i <= 26; i++)
     if(letters[i] != names[i])
     {
                   cout<<"NO"<<endl;
                   return 0;
     }
    cout<<"YES"<<endl;
    system("pause");
    return 0;
}
    
            
    

#include<iostream>
#include<string>
using namespace std;
string sToLow(string s, int size)
{
       for(int i = 0; i <= size; i++)
               s[i] = tolower(s[i]);
       return s;
}
string sToUp(string s, int size)
{
       for(int i = 0; i <= size; i++)
               s[i] = toupper(s[i]);
       return s;
}
int main()
{
    string s;
    int l = 0, h = 0, size;
    cin>>s;
    size = s.length() - 1;
    for(int i = 0; i <= size; i++)
            if(s[i] >= 'a' && s[i] <= 'z')
                    l++;
            else 
                    h++;
    if(l >= h)
         cout<<sToLow(s, size)<<endl;
    else 
         cout<<sToUp(s, size)<<endl;
    //system("pause");
    return 0;
}

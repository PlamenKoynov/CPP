#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    string s, newstr;
    cin>>s;
    newstr = s;
    for(int i = 0; i <= t - 1; i++)
    {
            for(int j = 0; j <= n - 2; j++)
             if(s[j] == 'B' && s[j + 1] == 'G' && newstr[j] == 'B') swap(s[j], s[j + 1]);
            newstr = s;
    }
    cout<<newstr<<endl;
    system("pause");
    return 0;
}
   

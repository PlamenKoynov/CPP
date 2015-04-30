#include<iostream>
#include<string>
using namespace std;
bool arr[26][26];
int main()
{
    int n;
    cin>>n;
    string s; 
    for(int i = 1; i <= n; i++)
    {
            cin>>s;
            arr[int(s[0]) - 96][int(s[1] - 96)] = 1;
    }
    cin>>s;
    for(int i = 1; i <= 26; i++)
     if(arr[int(s[0]) - 96][i] == 1) cout<<s[0]<<char(i + 96)<<endl; 
    system("pause");
    return 0;
}
    
     

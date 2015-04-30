#include<iostream>
#include<string>
using namespace std;
int arr[28];
int main()
{
    string s;
    getline(cin,s);
    int k = s.length() - 1, current = 1, a, sum = 0;       
    for(int i = 1; i <= 26; i++)
    {
            if(current > 3) current = 1; 
            arr[i] = current;
            current++;
    }
    for(int i = 0; i <= k; i++)
     if(s[i] >= 'a' && s[i] <= 'z') sum = sum + arr[int(s[i] - 'a') + 1];
     else if(s[i] == '.' || s[i] ==' ') sum = sum + 1;
      else if(s[i] == ',') sum = sum + 2;
       else sum = sum + 3;     
    cout<<sum<<endl;
    system("pause");
    return 0;
}                 

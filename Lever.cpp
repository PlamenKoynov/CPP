#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long left = 0, right = 0, size, i = 0, j, k = 1;
    string s;
    getline(cin, s);
    size = s.length() - 1;
    while(s[i] != '^') i++;
    j = i;
    for(--j; j >= 0; j--)
    {
           if(s[j] >= '0' && s[j] <= '9') 
            left = left + (int(s[j] - '0') * k);
           k++;
    }
    k = 1;
    for(++i; i <= size; i++)
    {
           if(s[i] >= '0' && s[i] <= '9') 
            right = right + ((s[i] - '0') * k);
           k++;         
    }
    if(left > right) cout<<"left"<<endl;
    else if(right > left) cout<<"right"<<endl;
    else cout<<"balance"<<endl;
    system("pause");
    return 0;
}

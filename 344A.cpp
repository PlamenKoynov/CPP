#include<iostream>
using namespace std;
int main()
{
    int n, previous = 0, counter = 1;
    string s;
    cin>>n;
    cin>>s;
    previous = s[0] - '0';
    n--;
    for(int i = 0; i <= n - 1; i++)
    {
            cin>>s; 
            if(s[0] - '0' != previous) 
            {
                    counter++;
                    previous = s[0] - '0';
            }      
    }
    cout<<counter<<endl;
    system("pause");
    return 0;
}

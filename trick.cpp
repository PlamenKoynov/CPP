#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    char a[100];
    stack<char> st;
    long long n;
    cin>>a;
    cin.get();
    while(a!='=')
    {
                 cin>>a;
                 cin.ignore();
                 st.push(a);
    }
    cin>>a;
    st.push(a);
    while(!st.empty()) 
    {
                       cout<<st.top()<<endl;
                       st.pop();
    }
    system("pause");
    return 0;
}
                 

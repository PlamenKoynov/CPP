#include<iostream>
#include<set>
#include<stack>
using namespace std;
int main()
{
    set<string> m;
    set<string>::iterator i;
    stack<string> st;
    int n;
    cin>>n;
    string a;
    for(int p=0;p<=n-1;p++) 
    {
            cin>>a;
            cin.ignore();
            m.insert(a);
            st.push(a);
    }    
    system("pause");
    return 0;
}

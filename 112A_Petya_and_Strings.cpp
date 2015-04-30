#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;
    bool found = false;
    int size = a.length() - 1;
    for(int i = 0; i <= size; i++)
    {
            if(a[i] >= 'A' && a[i] <= 'Z') a[i] = int(a[i]) + 32;
            if(b[i] >= 'A' && b[i] <= 'Z') b[i] = int(b[i]) + 32;
            if(int(a[i]) < int(b[i]))
            {
                    found = true;
                    cout<<-1<<endl;
                    break;
            }
            else if(int(a[i]) > int(b[i]))
            {
                    found = true;
                    cout<<1<<endl;
                    break;
            }
            
    }
    if(found == false) cout<<0<<endl;
    system("pause");
    return 0;
}

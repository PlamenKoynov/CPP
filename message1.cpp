#include<iostream>
#include<string>
using namespace std;
char a[81],b[81];
int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++) 
    {
            cin>>a[i]>>b[i];
            if(int(a[i])==32) a[i]='1';
            if(b[i]=='\n') b[i]='1';
            cin.ignore();
    }
    cin>>s;
    int k=s.size(),p=0;
    for(int i=0;i<=k-1;i++)
    {
            cout<<s[i]<<endl;
            while(s[i]!=b[p]) p++;
            if(a[p]=='1') cout<<" ";
             else cout<<a[p];
            p=0;
    }
    cout<<endl;
    system("pause");
    return 0;
}

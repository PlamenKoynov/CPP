#include<iostream>
#include<string>
using namespace std;
char a[81],b[81];
int main()
{
    string s1,s2;
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<=n;i++) 
    {
            getline(cin,s1);
            if(int(s1[0])==' ') a[i]='1';
            if(int(s1[2])==' ') b[i]='1';
            if(int(s1[0])!=32) a[i]=s1[0];
            if(int(s1[2])!=32) b[i]=s1[2];
    }
    cin.clear();
    getline(cin,s2);
    int k=s2.size(),p=0;
    for(int i=0;i<=k-2;i++)
    {
            while(s2[i]!=b[p]) p++;
            if(a[p]=='1') cout<<" ";
             else cout<<a[p];
            p=0;
    }
    cout<<endl;
    system("pause");
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int k=s.size()-1,sum=0;
    for(int i=0;i<=k;i++)
    {
            if(s[i]>='a'&&s[i]<='x') 
            {
                                     if((int(s[i])-96)%3==0) sum=sum+3;
                                      else sum=sum+(int(s[i])-96)%3;
            }
            if(s[i]=='y'||s[i]==' '||s[i]=='.') sum=sum+1;
            if(s[i]==','||s[i]=='z') sum=sum+2;
            if(s[i]=='!') sum=sum+3;
            cout<<s[i]<<" "<<int(s[i])-96<<" "<<sum<<endl;
    }
    cout<<sum<<endl; 
    system("pause");
    return 0;
}

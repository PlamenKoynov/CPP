#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool flag=0;
    string s;
    getline(cin,s);
    long long n=s.size()-1;
    for(long long i=n;i>=0;i--)
     for(long long j=i-1;j>=0;j--)
      if(s[i]==s[j]&&flag==0)
      {
                    cout<<int(s[i])-48<<endl;
                    flag=1;
                    break;
      }
    if(flag==0) cout<<"No"<<endl;
    system("pause");
    return 0;
}
    

#include<iostream>
using namespace std;
int main()
{
    int s;
    string a;
    getline(cin,a);
    if(a[2]=='-')
    {
                 s=(int(a[0])-48)*10+int(a[1])-48;
                 if(s<=12) 
                 {
                           if(a[4]!='0'&&a[3]=='0') cout<<"a.m. "<<s<<":"<<a[4]<<endl;
                           if(a[4]=='0'&&a[3]!='0') cout<<"a.m. "<<s<<":"<<a[3]<<"0"<<endl;
                           if(a[4]==a[3]==0) cout<<"a.m. "<<s<<":"<<a[3]<<endl;
                           if(a[4]!='0'&&a[3]!='0') cout<<"a.m. "<<s<<":"<<a[3]<<a[4]<<endl;
                 }
                 else 
                 {
                           if(a[4]!='0'&&a[3]=='0') cout<<"p.m. "<<s-12<<":"<<a[4]<<endl;
                           if(a[4]=='0'&&a[3]!='0') cout<<"p.m. "<<s-12<<":"<<a[3]<<"0"<<endl;
                           if(a[4]!='0'&&a[3]!='0') cout<<"p.m. "<<s-12<<":"<<a[3]<<a[4]<<endl;
                 }  
    }
    if(a[0]=='a')
    {
                 s=int(a[5])-48;
                 if(a.size()==8) cout<<"0"<<s<<"-"<<"0"<<a[7]<<endl;
                 else cout<<"0"<<s<<"-"<<a[7]<<a[8]<<endl;
    }
    if(a[0]=='p')
    {
                 s=int(a[5])-36;
                 if(a.size()==8) cout<<s<<"-"<<"0"<<a[7]<<endl;
                 else cout<<"0"<<s<<"-"<<a[7]<<a[8]<<endl;
    }
    system("pause");
    return 0;
}

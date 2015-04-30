#include<iostream>
#include<string>
using namespace std;
int main()
{
    int s=0;
    string a;
    getline (cin,a);
    if(a[2]=='-')
    {
                 s=(int(a[0])-48)*10+int(a[1])-48;
                 if(s>12) 
                 {
                          if(a[4]=='0'&&a[3]=='0') cout<<"p.m. "<<s-12<<":0"<<endl;
                          if(a[4]=='0'&&a[3]!='0') cout<<"p.m. "<<s-12<<":"<<a[3]<<"0"<<endl;
                          if(a[4]!='0'&&a[3]!='0') cout<<"p.m. "<<s-12<<":"<<a[3]<<a[4]<<endl;
                          if(a[4]!='0'&&a[3]=='0') cout<<"p.m. "<<s-12<<":"<<a[4]<<endl;
                 }
                 else 
                 {
                          if(a[4]=='0'&&a[3]=='0') cout<<"a.m. "<<s<<":0"<<endl;
                          if(a[4]=='0'&&a[3]!='0') cout<<"a.m. "<<s<<":"<<a[3]<<"0"<<endl;
                          if(a[4]!='0'&&a[3]!='0') cout<<"a.m. "<<s<<":"<<a[3]<<a[4]<<endl;
                          if(a[4]!='0'&&a[3]=='0') cout<<"a.m. "<<s<<":"<<a[4]<<endl;
                 }
    }
    if(a[0]=='a')
    {
                 if(a[6]!=':') s=(int(a[5])-48)*10+int(a[6])-48;
                 else s=int(a[5])-48;
                 if(a.size()==8)
                 {
                                if(a[7]=='0') cout<<"0"<<s<<"-00"<<endl;
                                else cout<<"0"<<s<<"-0"<<a[7]<<endl;
                 }
                 if(a.size()==9)
                 {
                                if(a[8]=='0') cout<<s<<"-00"<<endl;
                                else cout<<s<<"-0"<<a[8]<<endl;
                 }
                 if(a.size()==10) cout<<s<<"-"<<a[8]<<a[9]<<endl;
    }
    if(a[0]=='p')
    {
                 if(a[6]!=':') s=(int(a[5])-48)*10+int(a[6])-48+12;
                 else s=int(a[5])-48+12;
                 if(a.size()==8)
                 {
                                if(a[7]=='0') cout<<s<<"-00"<<endl;
                                else cout<<s<<"-0"<<a[7]<<endl;
                 }
                 if(a.size()==9)
                 {
                                if(a[8]=='0') cout<<s<<"-00"<<endl;
                                else cout<<s<<"-0"<<a[8]<<endl;
                 }
                 if(a.size()==10) cout<<s<<"-"<<a[8]<<a[9]<<endl;
    }    
    system("pause");
    return 0;
}
                 

#include<iostream>
#include<list>
using namespace std;
int main()
{
    string a;
    cin>>a;
    list<char> sp;
    list<char>::iterator i;
    int n=a.size(),p;
    for(int j=0;j<=n-1;j++)
     if(int(a[j])>=65&&int(a[j])<=90) 
     {
                                      p=int(a[j])-64;
                                      if((p>=1&&p<=15)||(p>=20&&p<=23)) 
                                      {
                                                if(char(p+64)=='V') p=p/3+1;
                                                else
                                                {                        
                                                                         if(p%3!=0) p=(p/3)+2;
                                                                         else p=(p/3)+1;
                                                }
                                                sp.push_back(char(p+48));
                                      }
                                      if((p>15&&p<20)||(p>23&&p<=26)) 
                                      {
                                           if(p%4!=0) p=(p/4)+3;
                                           else p=(p/4)+3;
                                           sp.push_back(char(p+48));
                                      }
                                      if(p<1||p>26) sp.push_back(char(p));
     }
     else sp.push_back(a[j]);
     for(i=sp.begin();i!=sp.end();i++) cout<<*i;
     cout<<endl;
     system("pause");
     return 0;
}
                                      

#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
    int n,k,br=0;
    cin>>n;
    string a;
    list<string> m1,m2;
    list<string>::iterator i,j;
    for(int p=0;p<=n-1;p++) 
    {
            cin>>a;
            cin.ignore();
            m1.push_back(a);
            if(p>0) m2.push_back(a);
    }
    for(j=m2.begin();j!=m2.end();j++) 
    {
                                      cout<<br<<endl;
                                      for(i=m1.begin();i!=m1.end();i++)
                                       if((*i)==(*j)) 
                                       {
                                                      br=0;
                                                      break;
                                       }
                                       else br++;
                                      if(br==n) 
                                      {
                                                cout<<*j<<endl;
                                                break;
                                      }
    } 
    system("pause");
    return 0;
}
    
    

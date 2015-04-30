#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int pr[10];
int main()
{
    long long n,m,br=0,br1=0;
    cin>>n>>m;
    n++;
    for(n;n<m;n++)
    {
                   for(long long i=2;i<=n/2;i++)
                    if(n%i==0)
                    {
                              br1++;
                              break;
                    }
                    if(br1==0) 
                    {
                                   string s;        
                                   ostringstream convert;  
                                   convert << n;   
                                   s = convert.str();
                                   br=br+s.size();
                    }
                    br1=0;
    }
    cout<<br<<endl;
    system("pause");
    return 0;
}        
            
     

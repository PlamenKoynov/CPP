#include<iostream>
#include<list>
using namespace std;
int main()
{
    long long n,a,s=0,br=0;
    list<long long> sp;
    list<long long>::iterator i,indk;
    cin>>n;
    while(n>0)
    {
              cin>>a;
              sp.push_back(a);
              n--;
    }
    for(i=sp.begin();i!=sp.end();i++)
    {
                                     br++;
                                     s=s+(*i);
                                     if(n%s==0)
                                     {
                                               s=0;
                                               indk=i;
                                               break;
                                     }
                                     if(s>n) 
                                     {
                                             s=0;
                                             br=0;
                                     }
                                     
    }
    if(br==0) cout<<"-1 -1"<<endl;
    else cout<<indk-br<<" "<<indk<<endl;
    system("pause");
    return 0;
}
                                               
                                     
    
              
    

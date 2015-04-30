#include<iostream>
using namespace std;
long long a[1001];
int main()
{
    int k;
    cin>>k;
    if(k==1) cout<<0<<endl;
    if(k==2) cout<<6<<endl;
    int a=0, b=6, p=10;
    k=k-2;
    while(k>0)
    {
              a=b*p;
              k--;
              if(k==0) cout<<a<<endl;
              else
              {
                  a=b*p+a;
                  k--;
                  if(k==0) cout<<a<<endl;
                  else
                  {
                      a=b*p+b;
                      if(k==0) cout<<a<<endl;
                  }
              }
              p=p*10;
    }
    system("pause");
    return 0;
} 
    

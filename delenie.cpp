#include<iostream>
using namespace std;
int main()
{
    int n,k,s=0;
    cin>>n>>k;
    if(k==3||k==9)
    {
                  for(int i=1;i<=n;i++)
                  {
                          int c=i;
                          while(c!=0)
                          {
                                     s=s+c%10;
                                     c=c/10;
                          }
                  }
                  cout<<s%k<<endl;
     }
     else cout<<n%k<<endl;
     system("pause");
     return 0;
}
                  

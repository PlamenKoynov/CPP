#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    long long int t,p,s;
    if(x<8) t=16+x;
    else t=x-8;
    p=t*3600;
    s=p+y*60+z;
    while(s>=0)
    {
               s=s-60;
               if(s<0) 
               {
                       cout<<"premini"<<endl;
                       break;
               }
               s=s-4;
               if(s<0) 
               {
                       cout<<"izchakai"<<endl;
                       break;
               }
               s=s-40;
               if(s<0) 
               {
                       cout<<"spri"<<endl;
                       break;
               }
               s=s-4;
               if(s<0) 
               {
                       cout<<"izchakai"<<endl;
                       break;
               }
    }
    system("pause");
    return 0;
}
    

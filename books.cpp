#include<iostream>
using namespace std;
int main()
{
    long long int a,b,br=0,c,br1=0;
    cin>>a>>b;
    if(a<7) a=7;
    if(b>1879048192) b=1879048192;
    for(a;a<=b;a++)
    {
                   c=a;
                   while(c!=0)
                   {
                              if(c%2==1) br++;
                              c=c/2;
                              if(br>3) break;
                              
                   }
                   if(br==3) br1++;
                   br=0;
    } 
    cout<<br1<<endl;
    system("pause");
    return 0;
}

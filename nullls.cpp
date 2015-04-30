#include<iostream>
using namespace std;
int n;
int main()
{
    int br=0,p=1;
    cin>>n;             
    for(int i=1;i<=n;i++) 
    {
            p=p*i;
            if(p>=10)
            {
                    if(p%10==0)
                    {
                               while(p%10==0) 
                               {
                                     br++;
                                     p=p/10;
                               }
                    }
                    if(p>=10) p=p%10;
                    cout<<i<<":"<<p<<":"<<br<<endl;
            }
    }
    cout<<p<<" "<<br<<endl;
    system("pause");
    return 0;
}

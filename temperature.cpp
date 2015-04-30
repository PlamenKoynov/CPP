#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,br1=0,br2=0,br3=0,t,n,pred,tek;
    cin>>n;
    cin>>a>>b>>c>>d;
    pred=(a+b+c+d)/4;
    cin>>a>>b>>c>>d;
    tek=(a+b+c+d)/4;
    if(pred>tek) 
    {
                 br1++;
                 t=1;
    }
    if(pred<tek)
    {
                br2++;
                t=2;
    }
    if(pred==tek)
    {
                 br3++;
                 t=3;
    }
    pred=tek;
    for(int i=3;i<=n;i++)
    {
            cin>>a>>b>>c>>d;
            tek=(a+b+c+d)/4;
            if(pred>tek&&t!=1) 
            {
                               br1++;
                               t=1;
            }
            if(pred<tek&&t!=2)
            {
                              br2++;
                              t=2;
            }
            if(pred==tek&&t!=3)
            {
                               br3++;
                               t=3;
            }
            pred=tek;
    }
    cout<<br1<<" "<<br2<<" "<<br3<<endl;
    system("pause");
    return 0;
}
    
    

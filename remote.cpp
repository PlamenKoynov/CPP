#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,c,d;
    cin>>n>>a;
    double p=a/2,s=0,min=100000;
    for(int i=0;i<=n-1;i++)
    {
            cin>>c>>d;
            if((c<0&&(-c)>p)||(d<0&&(-d)>p)) s=fabs(c)+fabs(d);
            if((c>0&&c>p)||(d>0&&d>p)) s=fabs(c)+fabs(d);
            if(s<min&&s!=0) min=s;
            s=0;
    }
    cout<<min<<endl;
    system("pause");
    return 0;
}
             
            
    

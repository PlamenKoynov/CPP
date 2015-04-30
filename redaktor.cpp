#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,b,c,cuc,m,p;
    cin>>n;
    cin>>b>>c>>cuc>>m>>p;
    cin.ignore();
    string a;
    cin>>a;
    int k=a.size()-1,br=0,s=0;
    for(k;k>=0;k--)
    {
                   if(a[k]=='b') s=s+b;
                   if(a[k]=='c') s=s+c;
                   if(a[k]=='C') s=s+cuc;
                   if(a[k]=='m') s=s+m;
                   if(a[k]=='p') 
                   {
                                 br=br+s;
                                 s=0;
                   }
                   cout<<a[k]<<" "<<s<<" "<<br<<endl;
    }
    cout<<br<<endl;
    system("pause");
    return 0;
}
    

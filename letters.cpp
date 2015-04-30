#include<iostream>
using namespace std;
int main()
{
    int n,br1=0,br2=0,br3=0,br4=0,p,h=0;
    cin>>n;
    char k;
    cin>>k;
    string a,b,c,d;
    for(int i=0;i<=n-1;i++)
    {
            cin>>a;
            if((int(a[0])>=65&&a[0]<=90&&int(a[0])+32==int(k))||(a[0]==k)) br1++;
            cin.ignore();
            cin>>b;
            p=b.size();
            for(int i=0;i<=p-1;i++) 
             if(int(b[i])+32==int(k)||b[i]==k)
             {
                        br2++;
                        break;
             }
            cin.ignore();
            cin>>c;
            p=c.size();
            for(int i=0;i<=p-1;i++)
             if(int(c[i])+32==int(k)||c[i]==k) h++;
            if(h>=2) br3++;
            h=0;
            cin.ignore();
            cin>>d;
            p=d.size();
            if(int(d[p-1])+32==int(k)||d[p-1]==k) br4++;      
            cin.ignore();
    }
    cout<<br1<<" "<<br2<<" "<<br3<<" "<<br4<<endl;
    system("pause");
    return 0;
}

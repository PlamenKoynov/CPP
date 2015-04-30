#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    b=a;
    bool flag=0;
    int s1=0,s2=0;
    for(int i=0;i<=2;i++) s1=s1+(int(a[i])-48);
    for(int i=3;i<=5;i++) s2=s2+(int(a[i])-48);
    if((s1>s2&&s1-s2==1)||(s2>s1&&s2-s1==1)) 
    {
             int j=5;
             s1=0;
             s2=0;
             if(int(a[j])-48==9)
              while(int(a[j])-48==9) 
              {
                            a[j]='0';
                            j--;
                            if(int(a[j])-48!=9) a[j]++;
              }
             else a[j]++;
             for(int i=0;i<=2;i++) s1=s1+(int(a[i])-48);
             for(int i=3;i<=5;i++) s2=s2+(int(a[i])-48);
             if(s1==s2) flag=1;
             else 
             {
                  j=5;
                  s1=0;
                  s2=0;
                  if(int(b[j])-48==0)
                   while(int(b[j])-48==0) 
                   {
                            b[j]='9';
                            j--;
                            if(int(b[j])-48!=0) b[j]--;
                   }
                  else b[j]--;
                  for(int i=0;i<=2;i++) s1=s1+(int(b[i])-48);
                  for(int i=3;i<=5;i++) s2=s2+(int(b[i])-48);
                  if(s1==s2) flag=1;
             }
    }
    if(flag==1) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
    system("pause");
    return 0;
}

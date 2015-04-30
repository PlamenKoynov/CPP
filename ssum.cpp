#include<iostream>
using namespace std;
int s[10001];
bool m[10001];
int main()
{
    int n,p=1,br=0,t=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
            for(int j=2;j<i;j++)
             if(i%j==0) 
             {
                        br++;
                        break;
             }
            if(br==0) 
            {
                      s[p]=i;
                      p++;
            }
            br=0;
    }
     for(int j=1;j<=p-1;j++)
      for(int k=1;k<=p-1;k++)
       if(s[j]+s[k]==n) 
       {
                        if(m[s[j]]==1&&m[s[k]]==1) t++;
                         else 
                         {
                              m[s[j]]=1;
                              m[s[k]]=1;
                              br++;
                         }
       }                 
    cout<<br<<endl;
    system("pause");
    return 0;
}

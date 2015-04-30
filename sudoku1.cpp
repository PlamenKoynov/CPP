#include<iostream>
using namespace std;
int a[10][10];
bool ch[10];
int funct(int k, int p)
{
    int t=k+3, m=p-2;
    cout<<t<<" "<<m<<endl;
    for(int n=k+1;n<=t;n++)
    {
            cout<<n<<" "<<m<<endl;
            for(m;m<=p;m++) 
             if(a[n][m]!=0) ch[a[n][m]]=1;
    }
    cout<<endl;
    //for(int i=1;i<=9;i++) cout<<ch[i]<<" ";
    //cout<<endl;
    for(int i=1;i<=9;i++)
     if(ch[i]==0) 
     {
                  for(int j=1;j<=9;j++) ch[j]=0;
                  return i;
     }
     
}
int main()
{
    for(int i=1;i<=9;i++)
     for(int j=1;j<=9;j++) cin>>a[i][j];
    for(int i=1;i<=9;i++)
    {
            for(int j=1;j<=9;j++)
             if(a[i][j]==0)
             {
                           int k,p;
                           k=i;
                           p=j;
                           while(k%3!=0) k--;
                           while(p%3!=0) p++;
                           a[i][j]=funct(k,p);
             }
    }
    cout<<endl;
    for(int i=1;i<=9;i++)
    {
            for(int j=1;j<=9;j++) cout<<a[i][j]<<" ";
            cout<<endl;
    }
    system("pause");
    return 0;
}

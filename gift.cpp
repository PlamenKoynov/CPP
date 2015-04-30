#include<iostream>
using namespace std;
int s[10001];
int main()
{
    int n,p=1,br=0;
    cin>>n;
    for(int i=2;i<=n;i++)
     if((i%2!=0&&i%3!=0)||i==2||i==3) 
     {
                      s[p]=i;
                      p++;
     }
     for(int j=1;j<=(p+1)/2;j++)
      for(int k=1;k<=p-1;k++)
       if(s[j]+s[k]==n) 
       {
                        cout<<s[j]<<" "<<s[k]<<endl;
                        br++;
       }
    cout<<br<<endl;
    system("pause");
    return 0;
}

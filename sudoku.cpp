#include<iostream>
using namespace std;
int a[9][9],b[9][9];
bool visited[10];
int main()
{
    int c=1,p=3;
    for(int i=1;i<=9;i++)
     for(int j=1;j<=9;j++) cin>>a[i][j];
    for(int i=1;i<=3;i++)
     if(i%3==0)
     {
               for(int r=1;r<=3;r++)
               {
                        for(int t=c;t<=p;t++)
                        {
                                for(int k=c;k<=p;k++) cout<<a[t][k]<<" ";
                                cout<<endl;
                        }
                        c=p;
                        p=p+3;
                        cout<<endl<<c<<" "<<p<<endl;               
               }
               c=1;
               p=3;
     }
     system("pause");
     return 0;
}            

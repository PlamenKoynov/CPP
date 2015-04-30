#include<iostream>
using namespace std;
int a[5];
int main()
{
    int br=0,max=0;
    for(int i=1;i<=5;i++) 
    {
            cin>>a[i];
            if(a[i]>max) max=a[i];
    }
    for(int i=1;i<=5;i++)
     for(int j=1;j<=4;j++)
      if(a[j]>a[j+1])
      {
                     int temp;
                     temp=a[j];
                     a[j]=a[j+1];
                     a[j+1]=temp;
      }
    for(int i=2;i<=5;i++) 
     if(a[i]-1==a[i-1]) br++;
    if(br==4)
     for(int i=1;i<=5;i++)
     {
             cout<<a[i];
             if(i!=5) cout<<" ";
              else cout<<endl;
     }
     else cout<<max<<endl;
     system("pause");
     return 0;
} 
    

#include<iostream>
using namespace std;
bool a[100];
int n,m;
int main()
{
    int br=0,BR=0,k;
    cin>>n>>m;
    for(int i=1;i<=m;i++) 
    {
            cin>>k;
            a[k]=1;
    }
    int i=1;
    while(i<n)
    {
            while(a[i]==0)
            {
                  i++;
                  br++;
                  if(br<3)
                   if(a[i]==1) 
                   {
                                 i++;
                                 br=0;
                                 BR++;
                   } 
                  if(br+1==3) 
                  {
                                BR++;
                                br=0;
                  }
            }
            while(a[i]==1) i++;
    }
    cout<<BR<<endl;
    system("pause");
    return 0;
}                                     
                  

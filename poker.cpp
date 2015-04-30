#include<iostream>
#include<set>
using namespace std;
int a[5];
int main()
{
    bool flag=0;
    set<int> m;
    set<int>::iterator j;
    const int n=5;
    int br=0;
    for(int i=0;i<=n-1;i++) 
    {
            cin>>a[i];
            m.insert(a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<=n-1;i++) 
    {
            for(int p=i+1;p<=n-1;p++)
             if(a[i]+1==a[p]) br++;
    }
    if(br==n-1&&m.size()==n) 
    {
              cout<<"Straight"<<endl;
              flag=1;
    } 
    br=0;
    if(m.size()+1==n) 
    {
                      cout<<"One Pair"<<endl;
                      flag=1;
    }
    if(m.size()==3)
    {
                     for(int i=0;i<=n-1;i++)
                     {
                             for(int j=i+1;j<=n-1;j++)
                              if(a[i]==a[j]) br++;
                     }
                     if(br==2)
                     {
                              cout<<"Two Pairs"<<endl;
                              flag=1;
                     }
                     if(br==3)
                     {
                          cout<<"Three of a Kind"<<endl;
                          flag=1;
                     }
    }
    br=0;
    if(m.size()==2)
    {    
                     for(int i=0;i<=n-1;i++)
                     {
                             for(int j=0;j<=n-1;j++)
                              if(a[i]==a[j]) br++;
                     }
                     if(a[1]!=a[2]||a[2]!=a[3])
                     {
                              cout<<"Full House"<<endl;
                              flag=1;
                     }
                     else
                     {
                         cout<<"Four of a Kind"<<endl;
                         flag=1;
                     }
    }
    if(m.size()==1)
    {
                   cout<<"Impossible"<<endl;
                   flag=1;
    }
    if(flag==0) cout<<"Nothing"<<endl;
    system("pause");
    return 0;
}

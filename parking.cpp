#include<iostream>
#include<list>
long long b[26];
using namespace std;
int main()
{
    list<char> sp;
    long long n,br=0,w=0;
    cin>>n;
    cin.get();
    string a;
    bool flag=0;
    for(int i=0;i<=n;i++)
    {
            getline(cin,a);
            int k=a.size();
            flag=0;
            for(int j=0;j<=k-1;j++)
            {
                    if(a[j]=='-') 
                    {
                                  sp.push_back(a[j]);
                                  if(flag==1&&!sp.empty())
                                  {
                                             sp.pop_back();
                                             flag=0;
                                  }
                    }
                    if(a[j]=='D'&&flag==1) flag=0;
                    if(a[j]=='B'&&j!=0&&a[j-1]!='B')
                    {
                                 if(a[j-1]=='-'&&!sp.empty()&&a[j-2]!='S') sp.pop_back();
                                 if(a[j-2]=='-'&&!sp.empty()&&a[j-3]!='S') sp.pop_back();
                                 if(flag==1) flag=0;
                    }
                    if(a[j]=='S') 
                    {
                                  if(!sp.empty()&&a[j-1]=='-'&&a[j-2]!='S'&&a[j+1]!='B') sp.pop_back();
                                  flag=1;
                    }
            }
            while(!sp.empty())
            {
                              br++;
                              sp.pop_back();
            }
            flag=0;
            b[w]=br;
            w++;
            br=0;
    }
    for(int i=1;i<=w-1;i++) 
    {
            cout<<b[i];
            if(i<w-1) cout<<" ";
            else cout<<endl;
    }
    system("pause");
    return 0;
}
     
                    
                    
    


#include<iostream>
using namespace std;
int visited[100001];
int main()
{
    int p=6,a,b,max=0;
    while(p>0)
    {
              cin>>a>>b;
              visited[a]++;
              visited[b]++;
              if(a>max) max=a;
              if(b>max) max=b;
              p--;
    }
    int br=0,k=1;
    for(int i=1;i<=max;i++)
     if(visited[i]==4) 
     {
                       br++;
                       k=k*i;
     }
     else if(visited[i]==12) 
     {
          cout<<i*i*i<<endl;
          break;
     }
    if(br==3) cout<<k<<endl;
    else cout<<0<<endl;
    system("pause");
    return 0;
}
              

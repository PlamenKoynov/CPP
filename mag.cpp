#include<iostream>
using namespace std;
long long n;
long long visited[100000],b[100000];
int main()
{
    int c=0;
    cin>>n;
    for(int i=1;i<=n/2;i++)
     if(n%i==0) 
     {
                visited[c]=i;
                c++;
     }
    if(c==1) 
    {
             cout<<"NO"<<endl;
             system("pause");
             return 0;
    }
    bool flag=0;
    int k=0,w=0;
    long long s=0,p=1;
    for(int i=0;i<=c-1;i++)
    {
            while(s<n||p<n)
            {
                      s=s+visited[i+k];
                      p=p*visited[i+k];
                      b[w]=visited[i+k];
                      k++;
                      w++;
                      if(s==p&&s==n) 
                      {
                                      for(int j=0;j<=w-1;j++) 
                                              {
                                                              cout<<b[j];
                                                              if(j<w-1) cout<<" ";
                                                              else cout<<endl;
                                              }
                                      flag=1;
                                      break;
                      }
            }
            k=0;
            w=0;
    }
    if(flag==0) cout<<"NO"<<endl;
    system("pause");
    return 0;
}
    

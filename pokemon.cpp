#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[101],br=1,indi,indj;
    for(int i=0;i<=n-1;i++) cin>>a[i];
    for(int i=0;i<=n-1;i++)
    {
            for(int j=i+1;j<=n-1;j++)
            {
                    if(a[i]==a[j])
                    {
                                  cout<<a[i]<<endl;
                                  cout<<i+1<<" "<<j+1<<endl;
                                  br++;
                                  break;
                    }
            }
            if(br!=1) break;
    }
    if(br==1) cout<<"No"<<endl;
    system("pause");
    return 0;
}

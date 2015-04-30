#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int s1=0,s2=0;
    long long int n,a[101],br=0,p=1,br1=0;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
            cin>>a[i];
            long long int t=a[i];
            while(t!=0) 
            {
                        br++;
                        t=t/10;
            }
            while(br!=0) 
            {
                         p=p*10;
                         br--;
            }             
            long long int k=a[i]*a[i];
            s1=k%p;
            s2=k/p;
            if(s1+s2==a[i]) br1++;
            s1=0;
            s2=0;
            p=1;
    }
    cout<<br1<<endl;
    system("pause");
    return 0;
}
                               

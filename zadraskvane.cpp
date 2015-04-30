#include<iostream>
using namespace std;
int main()
{
    int m,n,br=0;
    cin>>m>>n;
    n++;
    for(int i=2;i<=n/2;i++)
     if(n%i==0) 
     {
                br++;
                cout<<i<<endl;
     }
    cout<<br<<endl;
    system("pause");
    return 0;
}

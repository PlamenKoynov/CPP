#include<iostream>
using namespace std;
int main()
{
    long long int v,n,br;
    cin>>v>>n;
    if(n*3<=v) cout<<"NO"<<endl;
    else
    {
        cout<<"YES";
        long long int c=v/3;
        br=c-n;
        if(br<0) cout<<" "<<-br<<endl;
        else cout<<" "<<br<<endl;
    }
    system("pause");
    return 0;
}

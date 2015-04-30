#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    bool flag = false;
    for(int i=2; i<=w-2; i=i+2)
     if((w-i)%2==0) 
     {
                    flag = true;
                    break;
     }
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    system("pause");
    return 0;
}

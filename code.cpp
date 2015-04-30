#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.length(),c,br=0,s=0,p=1;
    for(int i=0;i<=n-1;i++) 
    {
            s=s+(i+1)*(int(a[i])-96);
            if(a[i]==a[n-p]) p++;
            else br++;
    }
    c=s%n;
    if(br==0) c=c*2;
    cout<<c<<endl;
    system("pause");
    return 0;
}
            
            
            

#include<iostream>
using namespace std;
long long My_Funct(int a,int b)
{
     while(a!=b)
      if(a>b) a=a-b;
      else b=b-a;
     return a;
}
int main()
{
    long long m,n,k,s,s1;
    cin>>m>>n>>k;
    s=My_Funct(My_Funct(m,n),k);
    s1=(m/s)*(n/s)*(k/s);
    cout<<s1<<endl;
    system("pause");
    return 0;
}

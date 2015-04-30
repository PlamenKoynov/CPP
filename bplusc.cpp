#include<iostream>
#include<string>
using namespace std;
int a[10],b[10];
int main()
{
    flag=0;
    string s;
    getline(cin,s);
    long long n=s.size();
    for(long long i=0;i<=n-1;i++) 
    {
             a[int(s[i])-48]++;
             b[int(s[i])-48]++;
    }
    if(b[0]==0) 
    for(int i=0;i<=9;i++)
    {
            if(a[i]!=0&&i<=nac&&i!=0) nac=i;
            if(a[i]!=0&&i>=kr) kr=i;
    } 
    system("pause");
    return 0;
}
    

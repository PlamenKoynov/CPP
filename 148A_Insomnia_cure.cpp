#include<iostream>
using namespace std;
int dragons[100001];
int main()
{
    int n,l,k,m,d, numHarmed = 0;
    cin>>k>>l>>m>>n>>d;
    dragons[k] = k;
    dragons[l] = l;
    dragons[m] = m;
    dragons[n] = n;
    for(int j=k; j<=d; j = j+k) dragons[j] = k;
    for(int j=l; j<=d; j = j+l) dragons[j] = l;
    for(int j=m; j<=d; j = j+m) dragons[j] = m;
    for(int j=n; j<=d; j = j+n) dragons[j] = n;
    for(int i=1; i<=d; i++)
     if(dragons[i] != 0) numHarmed++;
    cout<<numHarmed<<endl;
    system("pause");
    return 0;
}   

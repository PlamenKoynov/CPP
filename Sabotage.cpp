#include<iostream>
using namespace std;
int array[100000];
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<=n-1; i++) cin>>array[i];
    for(int i=0; i<=n-1; i++)
     for(int j=i+1; j<=n-1; j++)
      if(array[i]<array[j]) swap(array[i],array[j]);
    for(int i=0; i<=n-1; i++) cout<<array[i]<<endl;
    system("pause");
    return 0;
}
    

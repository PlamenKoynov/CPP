#include<iostream>
using namespace std;
int a[12];
int main()
{
    int n, sum = 0, br = 0;
    cin>>n;
    for(int i = 1; i<= 12; i++) cin>>a[i];
    for(int i = 1; i <= 12; i++)
     for(int j = 1; j <= 12; j++)
      if(a[i] > a[j]) swap(a[i], a[j]);
    if(n == 0) cout<<0<<endl;
    else
    {
        int current = 1;
        while(sum < n)
        {
                  if(current > 12) break;
                  sum = sum + a[current];
                  current++;
                  br++;
        }
        if(sum < n) cout<<-1<<endl;
        else cout<<br<<endl;
    }
    system("pause");
    return 0;
}
    

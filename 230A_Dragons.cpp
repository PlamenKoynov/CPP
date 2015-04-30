#include<iostream>
using namespace std;
int power[10001], give[10001];
int main()
{
    int s,n;
    cin>>s>>n;
    for(int i = 0; i <= n - 1; i++) cin>>power[i]>>give[i];
    for(int i = 0; i <= n - 1; i++)
     for(int j = 0; j <= n - 2; j++)
      if(power[j] > power[j+1])
      {
                  swap(power[j], power[j+1]);
                  swap(give[j], give[j+1]);
      }
    for(int i = 0; i <= n - 1; i++)
    {
            if(power[i] < s) s += give[i];
            else
            {
                cout<<"NO"<<endl;
                system("pause");
                return 0;
            }
    }
    cout<<"YES"<<endl;
    system("pause");
    return 0;
}
    

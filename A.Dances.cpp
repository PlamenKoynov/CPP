#include<iostream>
using namespace std;
int main()
{
    int n, m, counter;
    cin>>n>>m;
    cout<<n + m - 1<<endl;
    if(n >= m)
    {
         for(int i = 1; i<= n; i++) cout<<1<<" "<<i<<endl;
         if(m > 1) 
          for(n; n >= 2; n--) cout<<n<<" "<<m<<endl;
    }
    else
    {
        for(int i = 1; i<= m; i++) cout<<1<<" "<<i<<endl;
        if(n > 1) 
         for(m; m >= n + 1; m--) cout<<m<<" "<<n<<endl;
    }    
    system("pause");
    return 0;
}

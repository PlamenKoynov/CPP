#include<iostream>
using namespace std;
int a[101];
int main()
{
    int n, countNeg = 0, countZero = 0, countPos = 0, current = 1, orig;
    cin>>n;
    orig = n;
    for(int i = 0; i <= n - 1; i++) 
    {
            cin>>a[i];
            if(a[i] < 0) countNeg++;
            if(a[i] > 0) countPos++;
            if(a[i] == 0) countZero++;
    }
    for(int i = 0; i <= n - 1; i++)
     for(int j = i + 1; j <= n - 1; j++)
      if(a[i] > a[j]) swap(a[i], a[j]);
    cout<<1<<" "<<a[0]<<endl;
    countNeg--;
    bool flag = 0;
    if(countNeg > 1)
    {
                if(countNeg % 2 == 0) cout<<countNeg + countPos<<" ";
                else 
                {
                     cout<<countNeg - 1 + countPos<<" ";
                     current = 2;
                     flag = 1;
                }
                while(a[current] < 0) 
                {
                                 cout<<a[current]<<" ";
                                 current++;
                }
                while(a[n - 1] > 0)
                {
                                 cout<<a[n - 1]<<" ";
                                 n--;
                }
                cout<<endl;
                if(flag == 0)
                {
                        cout<<countZero<<" ";
                        while(countZero > 0)
                        {
                                cout<<0<<" ";
                                countZero--;
                        }
                        cout<<endl;
                }
                else 
                {
                     cout<<countZero + 1<<" "<<a[1]<<" ";
                     while(countZero > 0)
                     {
                                cout<<0<<" ";
                                countZero--;
                     }
                     cout<<endl;
                }
    }
    else 
    {
         cout<<countPos<<" ";
         while(a[n - 1] > 0)
         {
                   cout<<a[n - 1]<<" ";
                   n--;
         }
         cout<<endl;
         cout<<countNeg + countZero<<" ";
         while(a[current] < 0)
         {
                          cout<<a[current]<<" ";
                          current++;
         }
        while(countZero > 0)
        {
                        cout<<0<<" ";
                        countZero--;
        }
        cout<<endl;
    }
    //for(int i = 0; i <= n - 1; i++) cout<<a[i]<<" ";
    //cout<<endl;
    system("pause");
    return 0;
} 
    
            
    

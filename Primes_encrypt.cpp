#include<iostream>
#include<cmath>
using namespace std;
int arr[15001], primeArr[15001];
int main()
{
    int n, max = 0, t = 2;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
            cin>>arr[i];
            if(arr[i] > max) max = arr[i];
    }
    primeArr[1] = 2;
    for(int i = 3; i <= 300000; i++)
    {
            bool flag = 0;
            long long digit = sqrt(i);
            for(int j = 2; j <= digit; j++)
             if(i % j == 0)
             {
                  flag = 1;
                  break;
             }
            if(flag == 0) primeArr[t++] = i;
            if(t - 1 == max) break;
    }     
    for(int i = 1; i <= n; i++) cout<<primeArr[arr[i]]<<" ";
    cout<<endl;
    system("pause");
    return 0;
} 
    
    

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
long long arr[1000001];
int main()
{
    long long p1 = 0, current = 0, t = 0;
    string a;
    getline(cin, a);
    p1 = a.length();
    for(int i = 0; i <= p1 - 1; i++) arr[i] = int(a[i] - '0');
    for(int i = 0; i <= p1 - 1; i++)
    {
            for(int j = 0; j <= p1 - 1; j++)
                    if(arr[i] < arr[j]) 
                    {
                              int temp = arr[i];
                              arr[i] = arr[j];
                              arr[j] = temp;
                    }
    }
    while(arr[t] == 0) t++;
    do
    {
           for(int i = t; i <= p1 - 1; i++)
            current = (current * 10 + arr[i]) % 7;
           if(current % 7 == 0) 
           {
                      for(int i = t; i <= p1 - 1; i++) cout<<arr[i];
                      while(t > 0) 
                      {
                              cout<<0;
                              t--;
                      }
                      cout<<endl;
                      system("pause");
                      return 0;
           }

             current = 0;
    }
    while(next_permutation(arr, arr + p1));
    cout<<0<<endl;
    system("pause");
    return 0;
}

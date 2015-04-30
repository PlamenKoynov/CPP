#include<iostream>
using namespace std;
bool arr[101];
int main()
{
    int n, firstZero, lastZero, countOne = 0, countZero = 0, max = 0, counter = 0;
    cin>>n;
    for(int i = 0; i <= n - 1; i++) 
    {
            cin>>arr[i];
            if(arr[i] == 1) countOne++;
            else countZero++;
    }
    max = countOne;
    int current = 0;
    while(arr[current] == 1) current++;
    if(current == n)
    {
               cout<<n - 1<<endl;
               return 0;
    }
    firstZero = current; 
    current = n - 1;
    while(arr[current] == 1) current--;
    lastZero = current;
    for(int i = firstZero; i <= lastZero; i++)
    {
            if(arr[i] == 0)
            {
                      arr[i] = 1;
                      for(int j = 0; j <= n - 1; j++)
                       if(arr[j] == 1) counter++;
            }
            else arr[i] = 0;
            if(counter > max) max = counter;
            counter = 0;
    }
    cout<<max<<endl;
    system("pause");
    return 0;
}

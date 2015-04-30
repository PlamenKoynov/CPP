#include<iostream>
using namespace std;
unsigned long int arr[65536], ansArr[100000];
void findDig(unsigned long int a)
{
         unsigned long int first = 1, diff = 1;
         while(first <= a)
         {
                     ansArr[first] = 1;
                     first = first + diff;

                     diff++;
         }
} 
int main()
{
    unsigned long int first = 1, diff = 1, n, max = 0;
    cin>>n;
    for(int i = 1; i <= n; i++) 
    {
            cin>>arr[i];
            if(arr[i] > max) max = arr[i];
    }
    findDig(max);
    for(int i = 1; i <= n; i++) cout<<ansArr[arr[i]]<<" ";
    cout<<endl;
    system("pause");
    return 0;
}

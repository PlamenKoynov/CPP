#include<iostream>
#include<string>
int soldiers[101];
using namespace std;
int main()
{
    int n, minIndex = 0, maxIndex = 0, min = 101, max = 0;
    cin>>n;
    for(int i = 0; i <= n - 1; i++)
    {
            cin>>soldiers[i];
            if(soldiers[i] > max) max = soldiers[i];
            if(soldiers[i] < min) min = soldiers[i];
    }
    for(int i = 0; i <= n - 1; i++)
     if(soldiers[i] == max) 
     {
                    maxIndex = i + 1;
                    break;
     }
    for(int i = n - 1; i >= 0; i--)
     if(soldiers[i] == min) 
     {
                    minIndex = i + 1;
                    break;
     }
    if(minIndex < maxIndex) maxIndex--;    
    cout<<n - minIndex + maxIndex - 1<<endl;
    system("pause");
    return 0;
}
   

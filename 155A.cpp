#include<iostream>
using namespace std;
int home[100], away[100];
int main()
{
    int n, current, max = 0, min = 0, counter = 0;
    cin>>n;
    cin>>current;
    max = current;
    min = max;
    for(int i = 0; i <= n - 2; i++)
    {
            cin>>current;
            if(current > max) 
            {
                       max = current;
                       counter++;
            }
            if(current < min)
            {
                       min = current;
                       counter++;
            }
    }
    cout<<counter<<endl;
    system("pause");
    return 0;
}

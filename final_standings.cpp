#include<iostream>
using namespace std;
int tasks[150001], ID[150001];
int main()
{
    int n, max, ind;
    cin>>n;
    cin>>ID[1]>>tasks[1];
    n--;
    int last = 1, current = 1;
    for(int i = 2; i <= n; i++) 
    {
            cin>>ID[i]>>tasks[i];
            while(tasks[current] <= tasks[i]) current++;
            while(last >= 1) 
            {
                       tasks[last + 1] = tasks[last];
                       ID[last + 1] = ID[last];
                       last--;
            }
            tasks[i] = tasks[current];
            current = 1;
            last++;
    }
    for(int i = 1; i <= n; i++) cout<<ID[i]<<" "<<tasks[i]<<endl;
    system("pause");
    return 0;
}                 

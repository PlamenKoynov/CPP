#include<iostream>
using namespace std;
int profList[15001], studList[1000000];
int main()
{
    int n, m, br = 0, max, min;
    cin>>n;
    for(int i = 1; i <= n; i++) cin>>profList[i];
    min = profList[1];
    max = profList[n];
    cin>>m;
    for(int i = 1; i <= m; i++) cin>>studList[i];
    for(int i = 1; i <= m; i++)
     for(int j = i + 1; j <= m - 1; j++)
      if(studList[i] > studList[j]) swap(studList[i], studList[j]);
    int current = 1;
    while(studList[current] < min && current < m) current++;
    if(current == m)
    {
               cout<<0<<endl;
               return 0;
    }
    while(studList[current] <= max)
    {
                            for(int i = 1; i <= n; i++)
                             if(studList[current] == profList[i]) br++;
                            current++;
    }
    cout<<br<<endl;
    system("pause");
    return 0;
}
    

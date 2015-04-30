#include<iostream>
using namespace std;
int home[100], away[100];
int main()
{
    int n, h, a, maxI = 0, count = 0;
    cin>>n;
    for(int i = 0; i<= n - 1; i++)
    {
            cin>>h>>a;
            if(h > maxI) maxI = h;
            if(a > maxI) maxI = a;
            home[h]++;
            away[a]++;
    }
    for(int i = 0; i <= maxI; i++)
     if(home[i] != 0 && away[i] != 0) count = count + home[i] * away[i];
    cout<<count<<endl;
    system("pause");
    return 0;
}
            

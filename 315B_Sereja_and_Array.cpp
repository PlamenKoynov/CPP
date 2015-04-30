#include<iostream>
using namespace std;
int ArrElements[100001], ArrResult[100001];
int main()
{
    int m,n,a,b,c,current = 0, sum = 0;
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>ArrElements[i];
    for(int i=0; i<=m-1; i++)
    {
            cin>>a;
            switch(a)
            {
                     case 1:
                          cin>>b>>c;
                          ArrElements[b] = c - sum; 
                          break;
                     case 2: 
                          cin>>b;
                          sum = sum + b;
                          break;
                     case 3: 
                          cin>>b;
                          ArrResult[current] = ArrElements[b] + sum;
                          current++;
                          break;
            }
    }
    for(int i=0; i<= current - 1; i++) cout<<ArrResult[i]<<endl;
    system("pause");
    return 0;
}
            

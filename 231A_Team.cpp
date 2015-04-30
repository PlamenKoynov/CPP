#include<iostream>
using namespace std;
int main()
{
    int numProblems, a, b, c, numAgree = 0, numSolved = 0;
    cin>>numProblems;
    for(int i=0; i<=numProblems - 1; i++)
    {
            cin>>a>>b>>c;
            if(a == 1) numAgree++;
            if(b == 1) numAgree++;
            if(c == 1) numAgree++;
            if(numAgree >= 2) numSolved++;
            numAgree = 0;
    }
    cout<<numSolved<<endl;
    system("pause");
    return 0;
}
    

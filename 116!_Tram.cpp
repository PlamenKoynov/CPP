#include<iostream>
using namespace std;
int main()
{
    int n, max = 0, enter, exit, current = 0;
    cin>>n;
    for(int i=0; i<= n-1; i++)
    {
            cin>>exit>>enter;
            current = current - exit + enter;
            if(current > max) max = current;
    }
    cout<<max<<endl;
    system("pause");
    return 0;
}
            
    
    

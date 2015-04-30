#include<iostream>
using namespace std;
int main()
{
    int n, current = 0;
    cin>>n;
    int nums = n * 2, spaces = n * 2;
    for(int i = 0; i <= nums; i++)
    {
            for(int j = 1; j <= spaces; j++) cout<<" ";
            if(i >= n) spaces+=2;
            else spaces-=2;
            for(int p = 0; p <= current; p++) 
            {
                    cout<<p;
                    if(current != 0) cout<<" ";
            }
            for(int t = current - 1; t >= 0; t--) 
            {
                    cout<<t;
                    if(t != 0) cout<<" ";
            }
            if(i >= n) current--;
            else current++;
            cout<<endl;
    }
    system("pause");
    return 0;
}  
    

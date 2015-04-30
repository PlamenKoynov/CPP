#include<iostream>
#include<string>
using namespace std;
int passed[9];
int main()
{
    string a;
    int k;
    cin>>k;
    k *= 2;
    for(int i = 0; i <= 3; i++)
    {
            cin>>a;
            for(int j = 0; j <= 3; j++) 
             if(a[j] >= '0' && a[j] <= '9') passed[a[j] - '0']++;
            cin.ignore();
    }
    for(int i = 0; i <= 9; i++)
     if(passed[i] > k)
     {
                  cout<<"NO"<<endl;
                  system("pause");
                  return 0;
     }
    cout<<"YES"<<endl;
    system("pause");
    return 0;
}
             

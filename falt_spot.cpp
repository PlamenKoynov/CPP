#include<iostream>
using namespace std;
int arr[101];
int main()
{
    int n, a, br = 0, count600 = 0, count700 = 0;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
            cin>>a;
            int ind = (a / 10 % 10) * 10  + (a % 10);
            if(ind == 0)
            {
                   if(a == 600) 
                   {
                        count600++;
                        if(count600 == 4) 
                        {
                                    br++;
                                    count600 = 0;
                        }
                   }
                   if(a == 700) 
                   {
                        count700++;
                        if(count700 == 4)
                        {
                                    br++;
                                    count700 = 0;
                        }
                   }
            }
            else
            {
                arr[ind]++;
                if(arr[ind] == 4) 
                {
                            br++;
                            arr[ind] = 0;
                }
            } 
    }  
    cout<<br<<endl;
    system("pause");
    return 0;
}

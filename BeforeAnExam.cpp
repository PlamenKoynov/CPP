/*    Facebook    */
#include<iostream>
using namespace std;
int minArr[30], maxArr[30], diff[30];
int main()
{
    int d, time, sumMax = 0, dif = 0, sumMin = 0;
    cin>>d>>time;
    for(int i = 0; i <= d - 1; i++)
    {
            cin>>minArr[i]>>maxArr[i];
            diff[i] = maxArr[i] - minArr[i];
            sumMax = sumMax + maxArr[i];
            sumMin = sumMin + minArr[i];
    }
    if(sumMax < time) cout<<"NO"<<endl;
    else       
    {
               if(sumMin > time) 
               {
                         cout<<"NO"<<endl;
                         system("pause");
                         return 0;
               }
               cout<<"YES"<<endl;
               dif = sumMax - time;
               for(int i = 0; i <= d - 1; i++)
                if(dif > diff[i]) 
                {
                       cout<<maxArr[i] - diff[i]<<" ";
                       dif = dif - diff[i];
                }
                else 
                {
                     cout<<maxArr[i] - dif<<" ";
                     dif = 0;
                }
                cout<<endl;
    } 
    system("pause");
    return 0;
}        

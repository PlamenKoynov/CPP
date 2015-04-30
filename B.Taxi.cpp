#include<iostream>
using namespace std;
int Group[5];
int main()
{
    int n, br = 0, num;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
            cin>>num;
            if(num == 4) br++;
             else 
             {
                  Group[num]++;
                  if((Group[num]*num)%4 == 0) 
                  {
                            Group[num] = 0;
                            br++;
                  }
             }
    }    
    //cout<<Group[1]<<" "<<Group[2]<<" "<<Group[3]<<" "<<br<<endl;  
    if(Group[1]>Group[3]) 
    {
                          if((Group[1] - Group[3] + 2*Group[2])%4!=0) br = br + Group[3] + (Group[1] - Group[3] + 2*Group[2])/4 + 1;
                           else br = br + Group[3] + (Group[1] - Group[3] + 2*Group[2])/4;
    }
     else 
      if(Group[1]<Group[3]) br = br + Group[1] + Group[3] - Group[1] + Group[2];
       else 
        if(Group[1]==Group[3]) br = br + Group[1] + Group[2];
    cout<<br<<endl;
    system("pause");
    return 0;
} 

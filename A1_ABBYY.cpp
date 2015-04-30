#include<iostream>
#include<string>
bool passed[10];
using namespace std;
int main()
{
    string line;
    cin>>line;
    long long size = line.length() - 1, count = 1, current = 10, countMarks = 0; 
    for(int i=0; i<=size; i++)
     if(line[i]>='A' && line[i]<='J' && i==0) 
     {
                     count = count * 9;
                     passed[int(line[i]) - 64] = 1;
                     current--;
     }
     else if(line[i]>='A' && line[i]<='J' && i!=0 && passed[int(line[i]) - 64] == 0)
     {
          count = count * current;
          current--;
          passed[int(line[i]) - 64] = 1;
     }
      else if(i!=0 && line[i] == '?') countMarks++;
       else if(i==0 && line[i] == '?') count = count * 9;
     cout<<count;
     if(countMarks!=0)
      while(countMarks>0) 
      {
                          cout<<"0";
                          countMarks--;
      }
     cout<<endl;
    system("pause");
    return 0;
}

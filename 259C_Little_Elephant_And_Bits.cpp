#include<iostream>
#include<string>
using namespace std;
int DigPos[100000];
int main()
{
    string Digit;
    cin>>Digit;
    int size = Digit.length() - 1;
    int OnePos = 0;
    for(int i=0; i<=size; i++) 
    {
            DigPos[i] = int(Digit[i]) - 48;
            if(int(Digit[i]) - 48 == 1) OnePos = i;
    }
    while(DigPos[OnePos] == 1) OnePos = OnePos - 1;
    OnePos--;
    int current = 0, start = 0;
    while(DigPos[current] == 0) 
    {
                          start++;
                          current++;
    }
    for(start; start<=size; start++ )
     if(start!= OnePos) cout<<DigPos[start];
    cout<<endl;
    system("pause");
    return 0;
}
    

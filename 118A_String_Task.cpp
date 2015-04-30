#include<iostream>
#include<string>
using namespace std;
char newArray[101];
int main()
{
    string word;
    cin>>word;
    int size = word.length() - 1, current = 0;
    for(int i=0; i<=size; i++)
    {
            if(int(word[i])>=65 && int(word[i])<=90) word[i]=word[i]+32;
            if(word[i]=='a'||word[i]=='o'||word[i]=='y'||word[i]=='u'||word[i]=='e'||word[i]=='i') newArray[current] = -1;
             else newArray[current] = word[i];
            current++;
    }
    for(int i=0; i<=current-1; i++)
     if(newArray[i]!=-1) cout<<"."<<newArray[i];
    cout<<endl;
    system("pause");
    return 0;
}
    

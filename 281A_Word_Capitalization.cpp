#include<iostream> 
#include<string>
using namespace std;
int main()
{
    string Word;
    cin>>Word;
    if(int(Word[0])>=97) Word[0] = char(Word[0] - 32);
    cout<<Word<<endl;
    system("pause");
    return 0;
}

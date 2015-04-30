#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int size = word.length() - 1, br=0;
    if(size > 0) 
    {
            for(int i = 1; i <= size; i++)
             if(word[i] >= 'a' && word[i] <= 'z' )
             {
                        cout<<word;
                        return 0;
             }
    }
    if(word[0] >= 'A' && word[0] <= 'Z') cout<<char(word[0] + 32);
     else cout<<char(word[0] - 32);
    if(size > 0)              
     for(int i = 1; i <= size; i++) cout<<char(word[i] + 32);
    cout<<endl;
    system("pause");
    return 0;
}
    

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string array[101];
int main()
{
    int n;
    cin>>n;
    string word;
    for(int i=0; i<=n-1; i++)
    {
            cin>>word;
            int size = word.length();
            if(size>10) 
            {
                        std::string s;
                        std::stringstream out;
                        out<<size - 2;
                        s = out.str();
                        array[i] = word[0] + s + word[size-1];
            }
             else array[i] = word;
    }
    for(int i=0; i<=n-1; i++) cout<<array[i]<<endl;
    system("pause");
    return 0;
}
    

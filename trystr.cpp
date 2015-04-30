#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    long long n=123124124; 
    string s;        
    ostringstream convert;  
    convert << n;   
    s = convert.str();
    cout<<s<<endl;
    system("pause");
    return 0;
}        
            

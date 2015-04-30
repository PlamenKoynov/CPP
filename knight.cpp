#include<iostream>
#include<string>
using namespace std;
int a[101];
int main()
{
    int n,br=0,x,y,p=1;
    cin>>n;
    cin.ignore();
    string s;
    for(int i=0;i<=n-1;i++)
    {
            getline(cin,s);
            x=8-(int(s[1])-48)+1;
            y=int(s[0])-97+1;
            //cout<<x<<" "<<y<<endl;
            if(x-2>=1) 
            {
                       if(y+1<=8) br++;
                       if(y-1>=1) br++;
            }
            if(x+2<=8)
            {
                      if(y+1<=8) br++;
                      if(y-1>=1) br++;
            }
            if(y+2<=8)
            {
                      if(x+1<=8) br++;
                      if(x-1>=1) br++;
            }
            if(y-2>=1)
            {
                      if(x+1<=8) br++;
                      if(x-1>=1) br++;
            }
            a[p]=br;
            br=0;
            p++;
    }
    for(int i=1;i<=p-1;i++) cout<<a[i]<<endl;
    system("pause");
    return 0;
}

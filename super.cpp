#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> st;
    list<int>::iterator i;
    int n,m,br1=0,br2=0;
    cin>>n>>m;
    for(n;n<=m;n++)
    {
                   int c=n;
                   if(c%2!=0&&c%3!=0||c%7!=0||c%5!=0&&c!=1)
                   {
                                     while(c!=0)
                                     {
                                                br2++;
                                                if(c%2!=0&&c%3!=0&&c%5!=0&&c!=1||c==2||c==3||c==5) br1++;
                                                c=c/10;
                                     }
                                     if(br1==br2) st.push_back(n);
                                     br1=0;
                                     br2=0;
                   }
    } 
    for(i=st.begin();i!=st.end();i++) cout<<*i<<endl;
    system("pause");
    return 0;
}

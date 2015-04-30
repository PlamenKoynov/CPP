#include<iostream>
using namespace std;
int main()
{
    string n;
    int m;
    cin>>n;
    cin.ignore();
    cin>>m;
    long long int s=0,c,p=n.length(),k=17;
    for(int i=0;i<=p-1;i++) s=s+int(n[i])-48;
    c=s/k;
    if(m<=p) cout<<int(n[m-1])-48<<endl;
    else 
    { do
     {
         s=s+c;
         c=s/k+1;
         int j=c;
         while(j!=0)
         {
                    k++;
                    j=j/10;
         }
     }
     while(k+1<m);
     cout<<s/(m-1)<<endl;
    } 
    system("pause");
    return 0;
}
    
    

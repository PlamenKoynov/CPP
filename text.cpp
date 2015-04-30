#include<iostream>
#include<string>
using namespace std;
int main()
{
    int max1=0, max2=0, br1=0, br2=0, p, n, g, h;
    char a;
    cin>>a;
    cin.get();
    string b;
    cin>>b;
    int k=b.size();
    for(int i=0;i<=k-1;i++)
     if(b[i]>=97&&b[i]<=122) 
     {
                             br1++;
                             if(b[i+1]<97||b[i+1]>122) 
                              if(br1>max1) 
                              {
                                          max1=br1;
                                          p=i;
                                          n=i-br1+1;
                                          br1=0;
                              }
                              else br1=0;                         
     }
    for(int i=0;i<=k-1;i++)
     if(b[i]>=48&&b[i]<=57) 
     {
                             br2++;
                             if(b[i+1]<48||b[i+1]>57) 
                              if(br2>max2) 
                              {
                                          max2=br2;
                                          g=i;
                                          h=i-br2+1;
                                          br2=0;
                              }          
                              else br2=0;               
     }
    if(max2!=0) 
    {
                for(h;h<=g;h++) cout<<b[h];
                cout<<endl;
    }
    if(max1!=0) 
    {
             for(n;n<=p;n++) cout<<b[n];
             cout<<endl;
    }
    system("pause");
    return 0;
}
                             
                             
                              
    
    
    

#include<iostream>
using namespace std;
int main()
{
    int n,br=0,k=8;
    cin>>n;
    if(n%6==0) 
    {
               br=n/6;
               if(n%8==0&&n/8<br) br=n/8; 
               n=0;
    }
    else if(n%8==0) 
    {
         br=n/8;
         n=0;
    }
    else
     while(n-k>=0)
     {
                 n=n-k;
                 br++;
                 if(n%8==0) 
                 {
                            br=br+(n/8);
                            n=0;
                 }
                 if(n%6==0) k=6;
     } 
    if(br!=0&&n==0) cout<<br<<endl;
    else cout<<"No solution"<<endl;           
    system("pause");
    return 0;
}
                               

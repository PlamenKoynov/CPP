#include<iostream>
#include<stack>
using namespace std;
int main()
{
    bool flag=0;
    int n;
    cin>>n;
    stack<int> st1,st2;
    st1.push(1);
    n--;
    if(n==0) 
    {
             cout<<st1.top()<<endl;
             flag=1;
    }
    if(flag==0) 
    {
                st1.push(1);
                n--;
    }
    long long a=1,b=1,c;
    while(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<10) 
        {
                 st1.push(c);
                 n--;
                 if(n==0) 
                 {
                          cout<<st1.top()<<endl;
                          break;
                 }
        }
        else
        {
            while(c!=0)
            {
                       st2.push(c%10);
                       c=c/10;
            }
            while(!st2.empty())
            {
                               st1.push(st2.top());
                               st2.pop();
                               n--;
                               if(n==0) 
                               {
                                        cout<<st1.top()<<endl;
                                        break;
                               }
            } 
        }
    }
    system("pause");
    return 0;
}
        
    

#include<iostream>
#include<string>
using namespace std;
int a[9][9];
int func(int x, int y)
{
     int t=0,br=0;
      while(x+t<=8) 
       if(a[x+t][y]==1)
       {
                         br++;
                         a[x+t][y]=-1;
                         break;
       }
       else 
        if(a[x+t][y]==-1) break;
         else t++;
      t=0;
      while(x-t>=1) 
       if(a[x-t][y]==1)
       {
                         br++;
                         a[x-t][y]=-1;
                         break;
       }
       else 
        if(a[x-t][y]==-1) break;
         else t++;
      t=0;
      while(y+t<=8) 
       if(a[x][y+t]==1)
       {
                         br++;
                         a[x][y+t]=-1;
                         break;
       }
       else 
        if(a[x][y+t]==-1) break;
         else t++;
      t=0;
      while(y-t>=1) 
       if(a[x][y-t]==1)
       {
                         br++;
                         a[x][y-t]=-1;
                         break;
       }
       else 
        if(a[x][y-t]==-1) break;
         else t++;
      t=0;
      while(x+t<=8&&y+t<=8) 
       if(a[x+t][y+t]==1)
       {
                         br++;
                         a[x+t][y+t]=-1;
                         break;
       }
       else 
        if(a[x+t][y+t]==-1) break;
         else t++;
      t=0;
      while(x-t>=1&&y-t>=1) 
       if(a[x-t][y-t]==1)
       {
                         br++;
                         a[x-t][y-t]=-1;
                         break;
       }
       else 
        if(a[x-t][y-t]==-1) break;
         else t++;
      t=0;
     while(x+t<=8&&y-t>=1) 
       if(a[x+t][y-t]==1)
       {
                         br++;
                         a[x+t][y-t]=-1;
                         break;
       }
       else 
        if(a[x+t][y-t]==-1) break;
         else t++;
       t=0;
     while(x-t>=1&&y+t<=8) 
       if(a[x-t][y+t]==1)
       {
                         br++;
                         a[x-t][y+t]=-1;
                         break;
       }
       else 
        if(a[x-t][y+t]==-1) break;
         else t++;
     return br;
}
int main()
{
    int p=1,x1,x2,y1,y2;
    string s, s1[100], b, c;
    while(getline(cin, s)&&s.size()!=0) 
    {
                       a[8-(int(s[1])-48)+1][int(s[0])-97+1]=1;
                       s1[p]=s;
                       p++;
    }
    b=s1[p-1];
    c=s1[p-2];  
    a[8-(int(b[1])-48)+1][int(b[0])-97+1]=2;
    a[8-(int(c[1])-48)+1][int(c[0])-97+1]=2;
    x1=8-(int(b[1])-48)+1;
    x2=8-(int(c[1])-48)+1;
    y1=int(b[0])-97+1;
    y2=int(c[0])-97+1;
    cout<<func(x1,y1)+func(x2,y2)<<endl;  
    system("pause");
    return 0;
}

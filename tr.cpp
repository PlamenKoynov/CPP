#include<iostream>
using namespace std;
int main()
{
    bool flag=0;
    string a;
    cin>>a;
    int n=a.size(),br1=0,br2=0,i;
    if(n<8) 
    {
            cout<<3<<endl;
            flag=1;
    }
    else
    {
        for(i=0;i<=n-1;i++) 
         {if(a[i]>=48&&a[i]<=57) 
         {
                                br1++;
                                if(br1==3) 
                                 if(a[i+1]>=48&&a[i+1]<=57) 
                                 {
                                                            cout<<2<<endl;
                                                            flag=1;
                                                            break;
                                 }
                                 else br1=0;
         }
         if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
         {
                                br2++;
                                if(br2==3) 
                                 if((a[i+1]>=65&&a[i+1]<=90)||(a[i+1]>=97&&a[i+1]<=122))
                                 {
                                                                                        cout<<2<<endl;
                                                                                        flag=1;
                                                                                        break;
                                 }
                                 else br2=0;
         }
         if((a[i]<=47)||(a[i]>=58&&a[i]<=64)||(a[i]>=91&&a[i]<=96)||(a[i]>=123))
         {
                                                                                        cout<<1<<endl;
                                                                                        flag=1;
                                                                                        break;
         }
         }
    }
    if(flag==0) cout<<0<<endl;
    system("pause");
    return 0;
}
         
     

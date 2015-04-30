#include<iostream>
using namespace std;
long long n, a[100001], b[100001];
void QuickSort(long long b[], long long left, long long right) 
{
      long long i=left, j=right;
      long long nas;
      long long sr=b[(left+right)/2];
      while(i<=j) 
      {
            while(b[i]<sr) i++;
            while(b[j]>sr) j--;
            if(i<=j) 
            {
                  swap(b[i],b[j]);
                  i++;
                  j--;
            }
      };
      if(left<j) QuickSort(b, left, j);
      if(i<right) QuickSort(b, i, right);
} 
int main()
{
          long long s=0,s1=0,br=0;
          cin>>n;
          for(long long p=0;p<=n-1;p++) cin>>a[p]>>b[p];
          QuickSort(b, 0, n-1);
          for(long long p=0;p<=n-1;p++)
           if(a[p]==b[p]) 
           {
                          long long t=p,k=n-1;
                          for(k;k>t;k--) 
                           if(a[k]==b[k])
                           {
                                         swap(b[t],b[k]);
                                         break;
                           }
          }
          for(long long p=0;p<=n-1;p++) cout<<b[p]<<" ";
          cout<<endl;
          for(long long p=0;p<=n-1;p++)
           if(a[p]>b[p]) s=s+(a[p]-b[p]);
           else s=s+(b[p]-a[p]);
          cout<<s<<endl;
          system("pause");
          return 0;
}

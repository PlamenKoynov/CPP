#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> a;
int n,kmax,c;
bool ok(vector<int> a, int n, int c, int kmax)
{
    int k=0;
    int m=n;
    while(m>0&&k<=kmax)
    {
        k++;
        int t=c;
        int j=n-1;
        while(a[j]==0) j--;
        while(t>=a[j])
        {
            int i=0;
            while(a[i]==0||a[i]>t) i++;
            t=t-a[i];
            a[i]=0;
            m--;
            j=n-1;
            while(a[j]==0) j--;
        }
    }
    return(m==0 && k<=kmax);
}
int main()
{
    cin>>n>>kmax;
    for(int i=0;i<=n-1;i++) 
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),greater<int>());
    int s=0;
    for(int i=0;i<=n-1;i++) s=s+a[i];
    int minc=a[0]-1;
    int maxc=s;
    while(minc+1<maxc)
    {
        int c=(minc+maxc)/2;
        if(ok(a,n,c,kmax)) maxc=c;
        else minc=c;
    }
    while(!ok(a,n,c,kmax)) c++;
    cout<<maxc<<endl;
    system("pause");
    return 0;
}

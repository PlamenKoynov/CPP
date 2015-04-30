#include<iostream>
#include<string>
using namespace std;
int arr[51];
int main()
{
    string s, ans;
    int ind, max = 0;
    getline(cin, s);
    int n = s.length() - 1;
    for(int i = 0; i <= n ; i++)
    {
            ind = int(s[i]) - 'a' + 1;
            arr[ind]++;
            if(arr[ind] > max)
            {
                        max = arr[ind];
                        ans = char(ind - 1) + 'a';
            }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}

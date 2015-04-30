#include<iostream>
using namespace std;
int arr[101];
int main()
{
    string s;
    getline(cin, s);
    int n = s.length() - 1;
    for(int i = 0; i <= n; i++)
    {
            int letter = int(s[i]) - 'a';
            arr[i] = letter;
    }
    arr[0] = arr[0] + 5;
    if(arr[0] > 25) arr[0] = arr[0] % 26;
    cout<<arr[0]<<" "<<char(arr[0] + 97);
    for(int i = 1; i <= n; i++)
    {
            arr[i] = arr[i] + arr[i - 1];
            if(arr[i] > 25) arr[i] = arr[i] % 26;
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i <= n; i++) cout<<char(arr[i] + 97);
    cout<<endl;
    system("pause");
    return 0;
}

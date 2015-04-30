#include<iostream>
using namespace std;
int cena[5001];
int main()
{
    int n, a, b, k, nach, krai, c, sum = 0;
    cin>>n>>a>>b;
    for(int i = 1; i <= n; i++)
    {
            cin>>nach>>krai>>c;
            for(nach; nach <= krai; nach++) cena[nach] = c;
    }
    for(a; a <= b; a++)
    {
           nach = a;
           while(cena[a + 1] == cena[a] && a <= b) a++;
           krai = a;
           if(krai - nach < cena[a - 1]) sum = sum + krai - nach;
           else sum = sum + cena[a - 1];
    }
    cout<<sum<<endl;
    system("pause");
    return 0;
}
           
            
    

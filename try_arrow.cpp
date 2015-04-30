#include<iostream>
#include <conio.h>
#include<time.h>
#include<string>
using namespace std;
int main() 
{
    string s;
    cout<<"Vuvedete ime na sustezanieto: ";
    getline(cin,s);
    int br=0,n,t;
    double p=0;
    time_t start, end;
    cout<<"Vuvedete broi obikolki: "; cin>>n;
    int control = getch();
    int keycode = getch();
    while(keycode&&br<n)
    {      
                  time(&start);      
                  br++;
                  cout<<"Laps:"<<br<<"/"<<n<<" Time:"<<((float)t)/CLOCKS_PER_SEC<<endl;
                  control=getch();
                  keycode=getch();
                  time(&end);
                  p=p+difftime(end, start);             
    }              
    cout<<"End of race!"<<endl;
    cout<<"Total time: "<<((float)p)/CLOCKS_PER_SEC<<" seconds"<<endl;
    cout<<"Time for lap: "<<n/(((float)p)/CLOCKS_PER_SEC)<<" seconds"<<endl;
    system("pause");
    return 0;
}

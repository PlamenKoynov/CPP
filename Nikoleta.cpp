#include<iostream>
using namespace std;
int masInt[20]; //masiv s 20 elementa, koito sydyrja wsichki celi chisla, wywedeni ot potrebitelq
double masDouble[20]; //masiv s 20 elementa, koito sydyrja wsichki realni chisla, wywedeni ot potrebitelq
int main()
{
    int i = 0, br = 0; 
    cout<<"Wywedete celite chisla!"<<endl;
    //Vyvejdane na celite chisla
    for(i = 0; i <= 19; i++)
    {
          cout<<i+1<<" : ";//izvejda poziciqta na chisloto
          cin>>masInt[i];//wywejda chisloto w masiwa
    }
    cout<<"Wywedete realnite chisla!"<<endl;
    //Vyvejdane na realnite chisla
    for(i = 0; i <= 19; i++)
    {
          cout<<i+1<<" : ";//izvejda poziciqta na chisloto
          cin>>masDouble[i];//wywejda chisloto w masiwa
    }
    cout<<"Celite chisla, koito se delyat na 3: ";
    //Izvejdane na celite chisla, koito se delqt na 3 bez ostatyk
    for(i = 0; i <= 19; i++)
     if(masInt[i] % 3 == 0)//prowerka 
     {
                  cout<<masInt[i]<<" ";//izwejdane
                  br++;
     }
    if(br == 0) cout<<"nyama takiwa!"<<endl;//prowerka, ako nqma chisla, koito se delqt na 3 bez ostatyk
    else cout<<endl;
    br = 0;
    cout<<endl;
    system("pause");
    return 0;
}
    
